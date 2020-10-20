#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h> 
int main(){
	char array[30] = "abc123";
	int i, j, n, output, temp;
	
	temp = strlen(array);
	
	
	printf("생성된 문자열 : %s", array);
	printf("\ntemp의 길이 : %d \n", temp);
	
	for(i=0; i<strlen(array); i++){
		if((int)array[i] < 48 || (int)array[i] > 57){
			printf("\n\n일반문자 검출 : %c", array[i]);
			temp = i;
			break;
		}
	}
	printf("바뀐 temp의 길이: %d", temp);
	
	for(i=0; i<strlen(array); i++){			
		n = 1; 
//		if(array[i] == '\0') -> 사용한 배열까지만 for문 작동 : 사용안해도 됨 
		n *= 1;
		for(j=1; j<temp; j++){
			n *= 10;
		}
		printf("\nn 값 : %d  ", n);
		printf("\n----------");
		temp--;
		
		if(temp < 0 || ((int)array[i] < 48 || (int)array[i] > 57)) break;
		printf("더해지는 문자열 : %d",(((int)(array[i]))-48)*n);
		output += (((int)(array[i]))-48)*n;
	}
	
	printf("\n\nint형으로 변환된 문자열 : %d", output-3);
	
	//temp값을 가져서 for문을 반복할수록 10씩 곱해지게 만들기.
	//문자열 길이를 구해서 10의 n승곱. 
	//null값 만나면 break; 
	// 이중for문으로
	
	// 48(int) = 0(char)
	// 49(int) = 1(char)
}
