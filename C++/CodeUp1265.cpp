#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int i, input;
	
	cin >> input;
	
	for(i=1; i<10; i++){
		printf("%d*%d=%d\n", input, i, input*i);
	}
	printf("\b ");
}
