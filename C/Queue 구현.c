#include <stdio.h>
#include <math.h>
#include <string.h>
#define queueEnd 4
/* int 형 배열의 크기 : sizeof(Queue)/ sizeof(int) 
int push(int xinput){}
int pop(int xinput){}
int is_empty(s){}
int is_full(s){}
*/
void main(){
	int Queue[5] = {0,};
	int front, rear;	//front, rear : 큐 포인터
//	int Queue[25] = {10, 20, 30, 50};
	int i, j;
	int inputVal;
	
	int select;
	int command[50];
	
	front = 0; 
	rear = -1;	//Queue 생성후 Push할떄 값 증가 
	
	printf("큐가 생성됨!(size : 5)\n\n"); 
	
	
	printf("이전 큐 : ");
	for(i=0; i<sizeof(Queue) / sizeof(int); i++) {
		if(Queue[i] == 0){
			printf("[ ]");
		}
		else
			printf("[%d]", Queue[i]);
	}
	
	//strcmp(command, "push") != 1
	while(1){
		printf("\n사용할 명령어를 입력하세요 (1.Push | 2.Pop | 3.exit) : ");
		scanf("%d", &command);
		
		if(command[0] == 1)
		{	
			printf("\n\n값을 입력하여 PUSH : ");
			scanf("%d", &inputVal);
		
			if(inputVal == 500)
				break;
		
			if(rear != queueEnd) rear++;
		
		/*	있어도 되구 없어도 됨. 
			else if(rear == queueEnd){
			rear = queueEnd;
				front = 0;	
			}
		*/		
			//Push
			
			//만약 push되면 rear++;
			//만약 rear가 queueEnd와 같은 상태로 push되면 기존 rear값은 pop. 
			
			for(i=rear-1; i>=0; i--){
				Queue[i+1] = Queue[i];
			}
			Queue[front] = inputVal;
			
			printf("\n\n\n현재 큐 : ");
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
			printf("pop된 값 : [%d]", Queue[rear]); 
			Queue[rear] = 0;
			
			rear--;
			
			printf("\n\n\n현재 큐 : ");
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
		        printf("\n 큐(Queue)가 비어있습니다.\n\n");
		if(rear == queueEnd) printf("\n 큐(Queue)가 Full 상태 입니다");
		
		}
		if(command[0] == 3) break;
	}
	
	printf("최종 :");
	for(i=0; i<sizeof(Queue) / sizeof(int); i++) {
		if(Queue[i] == 0){
			printf("[ ]");
		}
		else
			printf("[%d]", Queue[i]);
	}
}
