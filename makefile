CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_Loop=basicClassification.o advancedClassificationLoop.o
OBJECTS_LIB_Recursive = basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall 
all: loops recursives recursived loopd mains maindloop maindrec 
loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so
mains: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) ./libclassrec.a
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so	
maindrec:  $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so	
main.o: main.c  
	$(CC) $(FLAGS) -c main.c 
libclassloops.a: $(OBJECTS_LIB_Loop)
	$(AR) rcs $@ $^
libclassrec.a: $(OBJECTS_LIB_Recursive)
	$(AR) rcs $@ $^
libclassrec.so: $(OBJECTS_LIB_Recursive)
	$(CC) -shared -fpic -o libclassrec.so $(OBJECTS_LIB_Recursive)
libclassloops.so: $(OBJECTS_LIB_Loop)
	$(CC) -shared -fpic -o libclassloops.so $(OBJECTS_LIB_Loop)
clean:
	rm -f *.o *.a *.so mains maindloop maindrec
