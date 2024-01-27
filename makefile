CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_Loop=basicClassification.o advancedClassificationLoop.o
OBJECTS_LIB_Recursive = basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall 
# Create everything
all: loops recursives recursived loopd mains maindloop maindrec 
# Create static library by loops
loops: libclassloops.a
# Create static library by recursives
recursives: libclassrec.a
# Create shared library by recursives
recursived: libclassrec.so
# Create shared library by loops
loopd: libclassloops.so
# Create main with static library by recursive
mains: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) ./libclassrec.a
# Create main with shared library by loops
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so	
# Create main with shared library by recursive
maindrec:  $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
# Compile main.c	
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 
# Make the static library with OBJECTS_LIB_Loop
libclassloops.a: $(OBJECTS_LIB_Loop)
	$(AR) rcs $@ $^
# Make the static library with OBJECTS_LIB_Recursive
libclassrec.a: $(OBJECTS_LIB_Recursive)
	$(AR) rcs $@ $^
# Make the shared library with OBJECTS_LIB_Recursive
libclassrec.so: $(OBJECTS_LIB_Recursive)
	$(CC) -shared -fpic -o libclassrec.so $(OBJECTS_LIB_Recursive)
# Make the shared library with OBJECTS_LIB_Loop
libclassloops.so: $(OBJECTS_LIB_Loop)
	$(CC) -shared -fpic -o libclassloops.so $(OBJECTS_LIB_Loop)
# Add NumClass.h to the implicit rules
%.o: %.c NumClass.h
	$(CC) $(CFLAGS) -c $<
#Clear everything we create
clean:
	rm -f *.o *.a *.so mains maindloop maindrec
