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
	//시간 초과로 인한 c 문법 출력사용 
	int input, value ,i, j;
	
	scanf("%d", &input);
	
	int array[input];
	
	for(i=0; i<input; i++){
		scanf("%d", &value);
		array[i]= value;
	}


	// 첫쨰 인덱스에는 배열, 
	// 둘쨰 인덱스에서는 배열크기 + 1 값을 넣어준다.
	sort(array, array + input);  

//버블정렬(채점할시 시간초과 뜸) 
/*	for(i=input; i>0; i--){
		for(j=0; j<i-1; j++){
			if(array[j] > array[j+1]) 
				swap(&array[j], &array[j+1]);
		}
	}
*/
	for(i=0; i<input; i++) printf("%d\n", array[i]);
}
