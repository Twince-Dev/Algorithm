#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]){
	//�ð� �ʰ��� ���� c ���� ��»�� 
	int input, value ,i;
	
	scanf("%d", &input);
	
	int array[input];
	
	for(i=0; i<input; i++){
		scanf("%d", &value);
		array[i]= value;
	}
	
	sort(array, array + input );
	for(i=0; i<input; i++) printf("%d\n", array[i]);
}
