#include <stdio.h>
#define stackEnd 4
int stack[5] = { 0, };	// ���� 
int sp = -1;		//���� ������ 

int push(int xinput){
	int i;
	
	sp++;
	stack[sp] = xinput;
	show();
}

int pop(){
	printf("\n\npop�� �� : [%2d]", stack[sp]);
	stack[sp] = 0;
	sp--;
	if(sp < -1)
		sp++;
	show();
	
}

int show(){
	int i;
	
	printf("\n\n< ���� stack ���� >\n");	
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
		printf("\n\nStack�� Full�Դϴ�.(���� �� �߰��� �� �����ϴ�)\n\n");
	if(sp == -1)
		printf("\n\nStack�� ������ϴ�.(���� ������ : %d)\n\n", sp);
}

void main(){
	int i;
	int inputNum, command;
	
	while(1){
//		system("cls");
		printf("------------------------");
		printf("\n��ɾ �Է��ϼ��� : ");
		scanf("%d", &command);
		printf("------------------------");
		
		if(command == 1){
			printf("\n���õ� ��ɾ� -> PUSH\n\nPUSH�� �� �Է� : ");
			
			scanf("%d", &inputNum); 
			push(inputNum);
		}
		
		if(command == 2){
			printf("\n���õ� ��ɾ� -> POP");
			pop();
		}
		
		if(command == 3){
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
		}
		check();
//		Sleep(1000);
	}	
	return 0;
}
