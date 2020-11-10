#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int number, i, j, temp;
	
	cin >> number;
	
	for(i=0; i<number; i++){
		for(j=0; j<i+1; j++){
			cout << "*"; 
		}
		printf("\n");
	}
}
