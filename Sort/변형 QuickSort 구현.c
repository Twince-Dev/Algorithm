#include <stdio.h>
#define arrayLen 10
int quickSort[arrayLen] = {8, 5, 6, 2, 3, 7, 4, 9, 10, 1};
int end;
int left, right;
int top, stack[10];
	top = 0;
	left = 0;
	
int dlatl = 0;

// pivot 선택을 위한 stack 
int stackPush(int pushData){
	stack[top] = pushData;
	printf("값이 스택에 PUSH 됨-> 다음 for문의 끝값  : %d", stack[top]);
	top++;
}

int stackPop(){
	top--;
	printf("값이 POP 됨 : %d", stack[top]);
	return stack[top];
	
}

int show(int lengthEnd){
	int i;
	
	printf("\n");
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
	
	printf("\n\n\n함수의 시작\n"); 
	printf("\n Qleft 값: %d", Qleft);
	printf("\n Qright 값: %d", Qright);
	printf("\n Qright - Qleft : %d \n", Qright-Qleft);
	
	if(Qright - Qleft <= 3) {
		Qleft = stackPop();
		printf("\n값이 POP됨 : %d", Qleft);	
	}
	
	for(i=Qleft + 1; i<Qright; i++){
		if(quickSort[pivot] > quickSort[i]){
			j++;
			swap(&quickSort[j], &quickSort[i]);
		}
		if(i == Qright-1) {
			Qright = j;
			printf("for문 안에 들어있는 Qright : %d\n", Qright);
			stackPush(Qright);
			top++;
			
			if(Qleft == j) Qleft++;
			swap(&quickSort[pivot], &quickSort[j]);
		}
	}
	Qleft = stackPop();

	show(arrayLen);
	printf("\n--------------------------------\n");

	dlatl++;
	if(dlatl == 9)
		return 0;
	
	
//	printf("\n\n\n\n 함수의 마지막\n");
//	printf("\n Qleft 값: %d", Qleft);
//	printf("\n Qright 값: %d", Qright);
//	printf("\n Qright - Qleft : %d \n", Qright-Qleft);
	if(Qleft == 9) return 0;
	Qsort(Qleft, Qright);
}

void main(){
	left = 0;
	right = arrayLen;
	
	printf("처음 Qright값 : %d \n", arrayLen);
	show(arrayLen);
	
	printf("첫 배열임\n\n\n\n");
	Qsort(right, right);
}
