#include <stdio.h>
#include <math.h>
#include <string.h>
#define queueEnd 4

int Queue[5] = {0,};
int front, rear;

front = 0;
rear = -1;
// int �� �迭�� ũ�� : sizeof(Queue)/ sizeof(int) 
int push(int xinput){
	int i;
	
	
	printf("\n\n���� �Է��Ͽ� PUSH : ");
	scanf("%d", &xinput);

	if(rear != queueEnd) rear++;
	
	for(i=rear-1; i>=0; i--){
		Queue[i+1] = Queue[i];
	}
	Queue[front] = xinput;
	
	printf("\n\n\n���� ť : ");
		show();
	
	printf("\nfront : %d , rear : %d", front, rear);
	printf("\n\n_____________________________________________|\n\n");
	
}
int pop(){
	int i;
	printf("pop�� �� : [%d]", Queue[rear]); 
			Queue[rear] = 0;
			rear--;
			
			printf("\n\n\n���� ť : ");
				show();
		    printf("\nfront : %d ,rear : %d ,\n\n________________________|\n\n",front ,rear); 	
}

int show(){
	int i;
	
	for(i=0; i<sizeof(Queue) / sizeof(int); i++) {
		if(Queue[i] == 0)
			printf("[ ]");
		else
			printf("[%d]", Queue[i]);
		
	}
}

//int is_empty(s){}
//int is_full(s){}

void main(){
	int i, inputVal;
	
	int select;
	int command[50];
	
	printf("ť�� ������!(size : 5)\n\n"); 	
	
	printf("���� ť : ");
	show();
	
	while(1){
		printf("\n����� ��ɾ �Է��ϼ��� (1.Push | 2.Pop | 3.exit) : ");
		scanf("%d", &command[0]);
		
		if(command[0] == 1)
			push(inputVal);
		
		if(command[0] == 2)
			pop();
			
		if(rear == front-1 || queueEnd == front)
		    printf("\n ť(Queue)�� ����ֽ��ϴ�.\n\n");
		if(rear == queueEnd) printf("\n ť(Queue)�� Full ���� �Դϴ�");
		
		if(command[0] == 3) break;
		printf("�Էµ� Ŀ�ǵ� : %d", command[0]);
	}
	printf("\n\n\n\n���� :");
	show();
}
