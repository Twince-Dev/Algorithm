#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
	string array;
	int i, number;
	
	number = 1;
	
	getline(cin, array);	
	for(i=0; i<array.length(); i++){
		if(isspace(array[i]))
			number++;
	}
	if(isspace(array[0]) && isspace(array[array.length()-1])) number -= 2;
	else if(isspace(array[0]) || isspace(array[array.length()-1])) number--;
	//������ 0 ���� �����̹Ƿ� array[array.length()-1]; 
	
	cout << number;
}	
