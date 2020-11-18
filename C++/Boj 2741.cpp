#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int i, temp, value;
	value = 1;
	
	cin >> temp;
	for(i=1; i<=temp; i++){
		cout << value++;
		printf("\n");
	}
	return 0;
}
