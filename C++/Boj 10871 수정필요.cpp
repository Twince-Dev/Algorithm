#include <iostream>
#include <cstdio>

using namespace std;
int main(){
	int number, value;
	value = 0;
	
	cin >> number;
	char array[number];
	
	scanf("%[^\n]\n", array);
	cout << array;
}
