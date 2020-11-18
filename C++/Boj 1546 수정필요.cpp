#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	string input;
	int i;
	cin >> input;
	
	int array[input*4];
	
	getline(cin, array);
	
//	for(i=0; i<sizeof(array) / sizeof(array[0]); i++){
//		cout << array[i];
////		if(isspace(array[i])
//	}

	for(i=0; i<sizeof(array) / sizeof(array[0]); i++) printf("%c", array[i]);
	
	 
}
