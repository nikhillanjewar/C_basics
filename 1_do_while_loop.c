#include<stdio.h>
int main(){
	
	//declaration of a variable
	int num, i = 0;
	
	printf("Enter a number: \n");
	scanf("%d",&num);
	do{
		printf("%d", i);
		i = i + 1;
	}while(i<num);
	return 0;	
}
