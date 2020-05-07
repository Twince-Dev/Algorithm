#include <stdio.h>
int main()
{
	int a[28], i, k, none[2]={ 0,};
	int check, temp;
	
	for(i=0; i<28; i++){
		scanf("%d", &a[i]);
	}
	
//		for(i=0; i<28; i++){
//		printf("    %d", a[i]);}
	
	for(i=0; i<28; i++){
		for(k=0; k<27; k++){
			if(a[k] > a[k+1]){
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
	
		}	
	}
//		for(i=0; i<28; i++){
//		printf("    %d", a[i]);
//		}
	
	temp=0;		//변수를 다시 사용하기 위해 0으로 초기화 
	
	for(k=1; k<31; k++){
		for(i=0; i<28; i++){
		if(a[i]==k){
			check = 1;		
			break;
			}
			else check = 0;
		}
		if(check!=1){
			none[temp]=k;
			temp++;
		}
		//printf("  %d",check);
	}
	printf("%d\n%d", none[0], none[1]);
}
