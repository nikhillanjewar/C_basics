#include<stdio.h>
int main(){
	
	//declaration of a number
	int num;
	
	//code
	printf("Enter the number: \n");
	scanf("%d", &num);
	
	//switch case
	switch(num){
		case 1:
			printf("The number is 1", num);
			break;
			
		
		case 31:
			printf("The number is 31", num);
			break;
			
		
		case 21:
			printf("The number is 21", num);
			break;
		
		default:
			printf("The number is invalid", num);
			break;		
	}
	return 0;
}
