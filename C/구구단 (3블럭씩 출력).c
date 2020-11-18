#include <stdio.h>
#include <windows.h> 
int main(){
int i, j, k; 
   for(i=1; i<9; i=i+3){
      for(j=2; j<10; j++){
        for(k=0; k<3; k++){
        	printf("%d * %d = %2d ",i+k ,j ,(i+k)*j);
		}
        printf("\n");
		}
		printf("\n");
    }
   return 0;
}
