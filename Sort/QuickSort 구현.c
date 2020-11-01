#include <stdio.h>
int swap(int *inputA, int *inputB){
	int temp;
	
	temp = *inputA;
	*inputA = *inputB;
	*inputB = temp;
}

void main(){
	int quickSort[5] = {5, 6, 7, 1, 2};
	int pivot, i, j;
	
	for(i=0; i<5; i++) printf("%d ,",quickSort[i]);
	printf("\b ");
	pivot = j = 0;
	for(i=1; i<5; i++){
		if(quickSort[pivot] > quickSort[i]){
			j++;
			swap(&quickSort[j], &quickSort[i]);
		}
		if(i == 4) swap(&quickSort[pivot], &quickSort[j]);
	}
	printf("\n--------------------------------\n");
	for(i=0; i<5; i++) printf("%d ,",quickSort[i]);
	printf("\b ");
	
	
	
	
	//pivot 값을 잡는다.
	//
}
