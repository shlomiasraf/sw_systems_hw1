CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_Loop=basicClassification.o advancedClassificationLoop.o
OBJECTS_LIB_Recursive = basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall 
all: loops recursives recursived loopd mains maindloop maindrec 
loops: $(OBJECTS_LIB_Loop)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_Loop)
recursives: $(OBJECTS_LIB_Recursive)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_Recursive)
recursived: $(OBJECTS_LIB_Recursive)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_Recursive)
loopd: $(OBJECTS_LIB_Loop)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB_Loop)
mains: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c 	
maindrec:  $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so	
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -fPIC -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -fPIC -c advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c



clean:
	rm -f *.o *.a *.so mains maindloop maindrec
