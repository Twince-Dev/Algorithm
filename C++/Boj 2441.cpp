#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int i, j, k, input;
	
	cin >> input;
	for(i=input; i>0; i--){
		for(k=i; k<input; k++){
			printf(" ");		
		}
		for(k=0; k<i; k++){
			printf("*"); 
		}
		printf("\n");
	}
}
