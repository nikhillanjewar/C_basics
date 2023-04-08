#include<stdio.h>

int main(){
	
	//declaration of age
	int age;
	
	//main
	printf("Enter your age: \n");
	scanf("%d", &age);
	
	printf("Your age is %d as you enter your age\n", age);
	
	
	//if-else control statements
	if(age>=18){
		printf("you can vote");		
	}
	else{
		printf("you can not able to vote now, Sorry");
	}
	return 0;
}
