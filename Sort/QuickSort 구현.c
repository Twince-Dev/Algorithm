#include <stdio.h>
#define arrayLen 10
int quickSort[arrayLen] = {8, 5, 6, 2, 3, 7, 4, 9, 10, 1};
int end;

int show(int lengthEnd){
	int i;
	
	for(i=0; i<lengthEnd; i++) 
		printf("[%d] ",quickSort[i]);
	printf("\b ");
}

int swap(int *inputA, int *inputB){
	int temp;
	
	temp = *inputA;
	*inputA = *inputB;
	*inputB = temp;
}

int Qsort(int Qleft, int Qright){
	int pivot, i, j;
	pivot = j = Qleft;
	
	
	for(i=Qleft + 1; i<Qright; i++){
		if(quickSort[pivot] > quickSort[i]){
			j++;
			swap(&quickSort[j], &quickSort[i]);
		}
		if(i == Qright-1) {
			end = j;
			swap(&quickSort[pivot], &quickSort[j]);	
		}
	}
	
	printf("end : %d(시각적으로 봤을떄의 기준값: %d) / pivot : %d", end, end+1, quickSort[pivot]);
	
	printf("\n--------------------------------\n");
	show(arrayLen);
}


void main(){
	int left, right;
	
	
	left = 0;
	right = arrayLen;
	
	show(arrayLen);
	
	Qsort(left, right);
	Qsort(left+1, right);

	//pivot 값을 잡는다.
	//Qright는 배열의 끝을 의미한다. 
}
