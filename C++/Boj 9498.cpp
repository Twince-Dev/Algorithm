#include <iostream>
#include <cstdio>

using namespace std;
int main(){
	int input, i;
	
	cin >> input;
	
	if(input > 89) cout << "A";
	else if(input > 79) cout << "B";
	else if(input > 69) cout << "C";
	else if(input > 59)cout << "D";
	else cout << "F";
}
