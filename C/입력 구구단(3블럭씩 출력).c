#include <stdio.h>
#include <windows.h> 
int dan(int funtion_num) {
	int i, j;
	
	for(i=2; i<funtion_num+1; i=i+3){
		printf("\n");
		for(j=1; j<10; j++){
			printf("%d * %d = %2d  ",i ,j ,i*j);
			if(i+1 <= funtion_num){
				printf("%d * %d = %2d  ",i+1 ,j ,(i+1)*j);
			}
			if(i+2 <= funtion_num){
				printf("%d * %d = %2d",i+2 ,j ,(i+2)*j);		
			}
			printf("\n");
		}
	}
	
}
int main(){
	int num;
		
	printf("´Ü ÀÔ·Â : ");
	scanf("%d", &num);
	
	dan(num);	

	return 0;
}
