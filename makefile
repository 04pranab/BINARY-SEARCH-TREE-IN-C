exeBST: BSTMain.o BSTFunctions.o
	gcc -o exeBST BSTMain.o BSTFunctions.o 
BSTMain.o: BSTMain.c
	gcc -c BSTMain.c
BSTFunctions.o: BSTFunctions.c
	gcc -c BSTFunctions.c