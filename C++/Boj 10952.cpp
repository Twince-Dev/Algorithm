#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int A, B, result;
	
	while(1){
		A = B = result = 0;
		cin >> A >> B;
		if(A == 0 && B == 0) return 0;
		cout << A+B << '\n';
	}
}
