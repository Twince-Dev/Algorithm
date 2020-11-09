#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string input;
	int i, situation;
	
	while(1){
		situation = 1;
		cin >> input;
		if(input == "0")
			return 0;
	
		for(i=0; i<input.length()/2; i++) {
			if(input[i] != input[(input.length())-i-1]){
	//			printf("input[0] :%c", input[0]);
	//			printf("\ninput[length end] :%c \n\n\n", input[(input.length()-i-1)]);
	//			if(i == input.length()/2)
	//			Debug
				situation = 0;
				break;
			}
		}
		if(situation == 1) printf("yes\n");
		else printf("no\n");
		//situation : 0 = no
		//situation : 1 = yes
	}
}
