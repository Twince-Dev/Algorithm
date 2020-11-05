#include <stdio.h>
main()
{
	//1210 : 칼로리 계산하기 
	// Calculating Calories Using Arrangement
	int menu[5]={ 400, 340, 170, 100, 70};
	int input[2];
	
	scanf("%d %d", &input[0], &input[1]);
	
	if(menu[input[0]-1]+menu[input[1]-1] > 500)
		printf("angry");
	else
		printf("no angry");
}
