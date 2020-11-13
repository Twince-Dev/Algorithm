#include <iostream>
#include <cstdio>

using namespace std;
int main(){
	int array[9];
	int i, max, value;
	value = 1;
	
	for(i=0; i<9; i++)
		cin >> array[i];

	max = array[0];
	for(i=1; i<9; i++){
		if(max < array[i]){
			max = array[i];
			value = i + 1;	
		}
	}
	cout << max;
	printf("\n");
	cout << value;
}
