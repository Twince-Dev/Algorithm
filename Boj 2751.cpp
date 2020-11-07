#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]){
	//시간 초과로 인한 c 문법 출력사용 
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
