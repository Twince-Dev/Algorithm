#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int number, i, j, k,temp;
	
	cin >> number;
	
	for(i=0; i<number; i++){
		for(k=number; k>i+1; k--)
			cout << " ";
		for(j=0; j<i+1; j++){
			cout << "*"; 
		}
		printf("\n");
	}
}
