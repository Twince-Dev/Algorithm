#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]){
	int x, y, w, h;
	int i, array[4];
	int min;
	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	array[0] = x;
	array[1] = w-x;
	array[2] = h-y;
	array[3] = y;
	
//	cout<<array[0]<<endl;
//	cout<<array[1]<<endl;
//	cout<<array[2]<<endl;
//	cout<<array[3]<<endl;
	
	min = array[0];
	for(i=1; i<4; i++){
		if(min > array[i])
			min = array[i];	
	}

	cout <<min<< endl;
	return 0;
}
