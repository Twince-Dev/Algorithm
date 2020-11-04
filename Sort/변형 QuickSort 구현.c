#include <stdio.h>
#define arrayLen 10
int quickSort[arrayLen] = {8, 5, 6, 2, 3, 7, 4, 9, 10, 1};
int end;
int left, right;
int top, stack[arrayLen];
	top = 0;
	
int dlatl = 0;

// pivot ������ ���� stack 
int stackPush(int pushData){
	printf("���� ���ÿ� PUSH ��-> ���� for���� ����  : %d", stack[top]);
	top++;
	stack[top] = pushData;
	
	
}
int stackPop(){
	return stack[top];
	printf("���� POP �� : %d", stack[top]);
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
	pivot = j = Qleft;
	if(Qright - Qleft <= 3) Qleft = stackPop();
	printf("\n Qright - Qleft : %d | POP�� ��: %d\n", Qright-Qleft, Qleft);
	
	for(i=Qleft + 1; i<Qright; i++){
		if(quickSort[pivot] > quickSort[i]){
			j++;
			swap(&quickSort[j], &quickSort[i]);
		}
		if(i == Qright-1) {
			Qright = j;
			stackPush(Qright + 1);
			top++;
			
			if(Qleft == j) Qleft++;
			swap(&quickSort[pivot], &quickSort[j]);
		}
	}
	Qleft = stackPop();

	printf("\n--------------------------------\n");
	show(arrayLen);

	dlatl++;
	if(dlatl == 9)
		return 0;

	printf("\n Qleft�� ��: %d", Qleft);
	printf("\n Qright�� ��: %d", right);
	if(Qleft == 9) return 0;
	Qsort(Qleft, Qright);
}

void main(){
	left = 0;
	right = arrayLen;
	
	printf("ó�� Qright�� : %d \n", arrayLen);
	show(arrayLen);
	
	printf("ù �迭��\n\n\n\n");
	Qsort(left, right);
}
