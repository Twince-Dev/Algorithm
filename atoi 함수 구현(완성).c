#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h> 
int main(){
	char array[30] = "abc123";
	int i, j, n, output, temp;
	
	temp = strlen(array);
	
	
	printf("������ ���ڿ� : %s", array);
	printf("\ntemp�� ���� : %d \n", temp);
	
	for(i=0; i<strlen(array); i++){
		if((int)array[i] < 48 || (int)array[i] > 57){
			printf("\n\n�Ϲݹ��� ���� : %c", array[i]);
			temp = i;
			break;
		}
	}
	printf("�ٲ� temp�� ����: %d", temp);
	
	for(i=0; i<strlen(array); i++){			
		n = 1; 
//		if(array[i] == '\0') -> ����� �迭������ for�� �۵� : �����ص� �� 
		n *= 1;
		for(j=1; j<temp; j++){
			n *= 10;
		}
		printf("\nn �� : %d  ", n);
		printf("\n----------");
		temp--;
		
		if(temp < 0 || ((int)array[i] < 48 || (int)array[i] > 57)) break;
		printf("�������� ���ڿ� : %d",(((int)(array[i]))-48)*n);
		output += (((int)(array[i]))-48)*n;
	}
	
	printf("\n\nint������ ��ȯ�� ���ڿ� : %d", output-3);
	
	//temp���� ������ for���� �ݺ��Ҽ��� 10�� �������� �����.
	//���ڿ� ���̸� ���ؼ� 10�� n�°�. 
	//null�� ������ break; 
	// ����for������
	
	// 48(int) = 0(char)
	// 49(int) = 1(char)
}
