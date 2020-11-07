#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]){
	int input, value ,i;
	
	cin >> input;
	
	int array[input];
	
	for(i=0; i<input; i++){
		cin >> value;
		array[i]= value;
	}
	
	sort(array, array + input );
	for(i=0; i<input; i++) cout << array[i] << endl;

	
	
	
}
