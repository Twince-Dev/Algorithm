#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

//a�� A ��32���� (a�� �ƽ�Ű�ڵ尡 ��ũ��. ��, A + 32 = a)
//a��65���� �����Ѵ�. 
int main(){
	int i, j;
	string input;
	int alpabet[26] = { 0, };	
	
	cin >> input;
	
	if(input.length() == 1 && (int)input[0] < 97){
		cout << input[0];
		return 0;
	}
	else if(input.length() == 1){
		cout << (char)((int)input[0]-32);
		return 0;
	}
	
	for(i=0; i<input.length(); i++){
		for(j=0; j<26; j++){
			if(((int)input[i]-65) == 0 + j || ((int)input[i]-65) == 32 + j){
				alpabet[j]++;
			}
		}
	}
	
	//for(i=0; i<26; i++) printf("[%d]", alpabet[i]);
	
	int max = 0, index = 0;
	for(i=0; i<26; i++){
		if(max < alpabet[i]){
			max = alpabet[i];
			index = i;
		}
	}
	
	j = 0;
	while(1){
		j++;
		if(j == index) j++;
	
		if(max == alpabet[j]) {
			cout << "?";
			return 0;
		}
	if(j == 26) break;
	}
	
	cout << (char)(index+65);
	//	cout << (int)input[0]-65;
}
