#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int swap(int *a, int *b){
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, const char * argv[]){
	//�ð� �ʰ��� ���� c ���� ��»�� 
	int input, value ,i, j;
	
	scanf("%d", &input);
	
	int array[input];
	
	for(i=0; i<input; i++){
		scanf("%d", &value);
		array[i]= value;
	}


	// ù�� �ε������� �迭, 
	// �Ѥ� �ε��������� �迭ũ�� + 1 ���� �־��ش�.
	sort(array, array + input);  

//��������(ä���ҽ� �ð��ʰ� ��) 
/*	for(i=input; i>0; i--){
		for(j=0; j<i-1; j++){
			if(array[j] > array[j+1]) 
				swap(&array[j], &array[j+1]);
		}
	}
*/
	for(i=0; i<input; i++) printf("%d\n", array[i]);
}
