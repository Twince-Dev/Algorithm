#include <stdio.h>
#define arrayLen 10
int quickSort[arrayLen] = {8, 6, 10, 1, 7, 4, 2, 9, 3, 5};
int end;
int left, right;
int top, stack[arrayLen];
	top = 0;
	
int dlatl = 0;

 //pivot 선택을 위한 stack 
int stackPush(int pushData){
	stack[top] = pushData;
	top++;
	printf("값이 스택에 PUSH 됨 : %d", stack[top]);
}
int stackPop(){
	return stack[top];
	top--;
	printf("값이 POP 됨 : %d", stack[top]);
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
			stackPush(Qright + 1);
			printf("\n Qright의 값: %d ,Qright 값이 PUSH 되었습니다", Qright);
			if(Qleft == j) Qleft++;
			swap(&quickSort[pivot], &quickSort[j]);
		}
	}
	
	
	printf("\n--------------------------------\n");
	show(arrayLen);

	dlatl++;
	if(dlatl == 9)
		return 0;

	printf("\n Qleft의 값: %d", Qleft);
	if(Qleft == 9) return 0;
	Qsort(Qleft, Qright);
}

void main(){
	left = 0;
	right = arrayLen;
	
	show(arrayLen);
	Qsort(left, right);
}
