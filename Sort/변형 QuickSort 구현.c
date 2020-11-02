#include <stdio.h>
#define arrayLen 10
int quickSort[arrayLen] = {3, 6, 7, 1, 8, 4, 2, 9, 10, 5};
int end;
int left, right;
int top, stack[arrayLen];
	top = 0;

 //pivot 선택을 위한 stack 
int stackPush(int pushData){
	stack[top] = pushData;
	top++;
}
int stackPop(){
	return stack[top];
	top--;
}

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
	Qleft = stackPop();
	pivot = j = Qleft;
	
	
	for(i=Qleft + 1; i<Qright; i++){
		if(quickSort[pivot] > quickSort[i]){
			j++;
			swap(&quickSort[j], &quickSort[i]);
		}
		if(i == Qright-1) {
			Qright = j;
			stackPush(j+1);
			printf("Qright의 값: ", Qright);
			if(Qleft == j) Qleft++;
			swap(&quickSort[pivot], &quickSort[j]);
		}
	}

	printf("\n--------------------------------\n");
	show(arrayLen);

	printf("Qleft의 값: %d", Qleft);
	if(Qleft == 9) return 0;
	Qsort(Qleft, 10);
}

void main(){
	left = 0;
	right = arrayLen;
	
	show(arrayLen);
	Qsort(left, right);
}
