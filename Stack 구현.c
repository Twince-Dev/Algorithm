#include <stdio.h>
#define stackEnd 4
int stack[5] = { 0, };	// 스텍 
int sp = -1;		//스텍 포인터 

int push(int xinput){
	int i;
	
	sp++;
	stack[sp] = xinput;
	show();
}

int pop(){
	printf("\n\npop된 값 : [%2d]", stack[sp]);
	stack[sp] = 0;
	sp--;
	if(sp < -1)
		sp++;
	show();
	
}

int show(){
	int i;
	
	printf("\n\n< 현재 stack 상태 >\n");	
	for(i=stackEnd; i>=0; i--){
		if(stack[i] == 0)
			printf("\n	  [  ]");
		else
			printf("\n	  [%2d]", stack[i]);
			
		if(i == sp) printf(" < (sp pointer : %d)", sp);
	}
	printf("\n\n");
}

int check(){
	if(sp == stackEnd)
		printf("\n\nStack의 Full입니다.(값을 더 추가할 수 없습니다)\n\n");
	if(sp == -1)
		printf("\n\nStack이 비었습니다.(스택 포인터 : %d)\n\n", sp);
}

void main(){
	int i;
	int inputNum, command;
	
	while(1){
//		system("cls");
		printf("------------------------");
		printf("\n명령어를 입력하세요 : ");
		scanf("%d", &command);
		printf("------------------------");
		
		if(command == 1){
			printf("\n선택된 명령어 -> PUSH\n\nPUSH할 갑 입력 : ");
			
			scanf("%d", &inputNum); 
			push(inputNum);
		}
		
		if(command == 2){
			printf("\n선택된 명령어 -> POP");
			pop();
		}
		
		if(command == 3){
			printf("프로그램이 종료되었습니다.");
			break;
		}
		check();
//		Sleep(1000);
	}	
	return 0;
}
