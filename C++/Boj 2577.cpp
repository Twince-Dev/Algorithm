#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int A = 0, B = 0, C = 0;
	int i, j, temp;
	
	string calc;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	temp = A*B*C;
	calc = to_string(temp);

	int array[10] = { 0,};
	
	for(i=0; i<calc.length(); i++){
		for(j=0; j<10; j++){
			if(calc[i] == (char)j+48)
				array[j]++;
		}
	}
	
	for(i=0; i<10; i++)
		cout << array[i] << '\n';
}
