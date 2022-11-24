CC=gcc
AR=ar
OBJECTS_LOOP=basicClassification.o advancedClassificationLoop.o
OBJECTS_RECURSION=basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall -g

all: mains maindloop maindrec libclassloops.a 
libclassloops.a: $(OBJECTS_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOP)
libclassrec.a : $(OBJECTS_RECURSION)
	$(AR) -rcs libclassrec.a $(OBJECTS_RECURSION)
libclassrec.so : $(OBJECTS_RECURSION)
	$(CC) -shared -o libclassrec.so $(OBJECTS_RECURSION)
libclassloops.so : $(OBJECTS_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOP)
main.o : main.c NumClass.h
	$(CC) -c main.c NumClass.h
mains: main.o libclassrec.a 
	$(CC) $(FLAGS) main.c libclassrec.a -o mains -lm
maindloop: main.o ./libclassloops.so
	$(CC) $(FLAGS) main.c ./libclassloops.so -o maindloop -lm
maindrec: main.o ./libclassrec.so
	$(CC) $(FLAGS) main.c ./libclassrec.so -o maindrec -lm
basicClassification.o: basicClassification.c NumClass.h  
	$(CC) $(FLAGS) -c -fPIC basicClassification.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h  
	$(CC) $(FLAGS) -c -fPIC advancedClassificationLoop.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h  
	$(CC) $(FLAGS) -c -fPIC advancedClassificationRecursion.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec