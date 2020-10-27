#include <stdio.h>
void main(){
	int array[5] = {7, 4, 5, 1, 3};
	int i, j, temp;
	
	for(i=0; i<5; i++) printf("\n정렬전 - array[%d] : %2d", i, array[i]);
	printf("\n");
	
	for(i=4; i>=0; i--){
		for(j=0; j<i; j++){
			if(array[j] >= array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				printf("\nswap!");
			}
		}
	}
	printf("\n");
	for(i=0; i<5; i++) printf("\n정렬전 - array[%d] : %2d", i,array[i]);
}
