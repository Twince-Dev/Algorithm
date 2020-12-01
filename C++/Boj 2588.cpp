#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	string temp_number1;
	string temp_number2;
	int number1[3];
	int number2[3];
	int i;
	
	cin >> temp_number1;
	cin >> temp_number2;
	
	for(i=0; i<3; i++){
		number1[i] = (int)temp_number1[i]-48;
		number2[i] = (int)temp_number2[i]-48;
	}
	
	for(i=0; i<3; i++){
		cout << number1[i] << "\n";
		cout << number2[i]	<< "\n";
	} 
	
	

	
		
}
