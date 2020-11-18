#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int array[5] = { 0, };
	int i = 0, result = 0;
	cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];
	
	for(i=0; i<5; i++){
		array[i] = pow(array[i], 2);
		result += array[i];
	}
	cout << result%10;
}
