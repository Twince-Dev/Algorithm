#include <stdio.h>
#include <math.h>
#include <string.h>
#define queueEnd 4
/* int �� �迭�� ũ�� : sizeof(Queue)/ sizeof(int) 
int push(int xinput){}
int pop(int xinput){}
int is_empty(s){}
int is_full(s){}
*/
void main(){
	int Queue[5] = {0,};
	int front, rear;	//front, rear : ť ������
//	int Queue[25] = {10, 20, 30, 50};
	int i, j;
	int inputVal;
	
	int select;
	int command[50];
	
	front = 0; 
	rear = -1;	//Queue ������ Push�ҋ� �� ���� 
	
	printf("ť�� ������!(size : 5)\n\n"); 
	
	
	printf("���� ť : ");
	for(i=0; i<sizeof(Queue) / sizeof(int); i++) {
		if(Queue[i] == 0){
			printf("[ ]");
		}
		else
			printf("[%d]", Queue[i]);
	}
	
	//strcmp(command, "push") != 1
	while(1){
		printf("\n����� ��ɾ �Է��ϼ��� (1.Push | 2.Pop | 3.exit) : ");
		scanf("%d", &command);
		
		if(command[0] == 1)
		{	
			printf("\n\n���� �Է��Ͽ� PUSH : ");
			scanf("%d", &inputVal);
		
			if(inputVal == 500)
				break;
		
			if(rear != queueEnd) rear++;
		
		/*	�־ �Ǳ� ��� ��. 
			else if(rear == queueEnd){
			rear = queueEnd;
				front = 0;	
			}
		*/		
			//Push
			
			//���� push�Ǹ� rear++;
			//���� rear�� queueEnd�� ���� ���·� push�Ǹ� ���� rear���� pop. 
			
			for(i=rear-1; i>=0; i--){
				Queue[i+1] = Queue[i];
			}
			Queue[front] = inputVal;
			
			printf("\n\n\n���� ť : ");
			for(i=0; i<sizeof(Queue) / sizeof(int); i++) {
				if(Queue[i] == 0){
					printf("[ ]");
				}
				else
					printf("[%d]", Queue[i]);
			}
			printf("\nfront : %d , rear : %d", front, rear);
			printf("\n\n_____________________________________________|\n\n");
		}
		//pop
		if(command[0] == 2){
			printf("pop�� �� : [%d]", Queue[rear]); 
			Queue[rear] = 0;
			
			rear--;
			
			printf("\n\n\n���� ť : ");
				for(i=0; i<sizeof(Queue) / sizeof(int); i++) {
					if(Queue[i] == 0){
						printf("[ ]");
					}
					else
						printf("[%d]", Queue[i]);
				}	
		    printf("\nfront : %d ,rear : %d ,\n\n________________________|\n\n",front ,rear); 	
			}
			
		if(rear == front-1 || queueEnd == front){
		        printf("\n ť(Queue)�� ����ֽ��ϴ�.\n\n");
		if(rear == queueEnd) printf("\n ť(Queue)�� Full ���� �Դϴ�");
		
		}
		if(command[0] == 3) break;
	}
	
	printf("���� :");
	for(i=0; i<sizeof(Queue) / sizeof(int); i++) {
		if(Queue[i] == 0){
			printf("[ ]");
		}
		else
			printf("[%d]", Queue[i]);
	}
}
