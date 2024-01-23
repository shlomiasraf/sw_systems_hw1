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
mains: $(OBJECTS_MAIN) recursives 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN) loopd
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) libclassloops.so	
maindrec:  $(OBJECTS_MAIN) recursived
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) libclassrec.so	
main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c 
libclassloops.a: $(OBJECTS_LIB_Loop)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_Loop)
libclassrec.a: $(OBJECTS_LIB_Recursive)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_Recursive)
libclassrec.so: $(OBJECTS_LIB_Recursive)
	$(CC) -shared -fpic -o libclassrec.so $(OBJECTS_LIB_Recursive)
libclassloops.so: $(OBJECTS_LIB_Loop)
	$(CC) -shared -fpic -o libclassloops.so $(OBJECTS_LIB_Loop)
clean:
	rm -f *.o *.a *.so mains maindloop maindrec
