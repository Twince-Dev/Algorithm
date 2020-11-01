#include <stdio.h>
int swap(int inputA, int inputB){
	int temp;
	
	temp = inputA;
	inputA = inputB;
	inputB = temp;
}

void main(){
	int quickSort[5] = {5, 4, 2, 1, 7};
	int pivot, i, k;
	
	for(i=0; i<5; i++) printf("%d ,", i, quickSort[i]);
	swap(quickSort[0], quickSort[4]);
	printf("\n\n");
	for(i=0; i<5; i++) printf("%d ,", i, quickSort[i]);
	
	
	
	//pivot 값을 잡는다.
	//
}
