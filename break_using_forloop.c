#include<stdio.h>
int main(){
	
	//variable_declaration
	int num, i;
	
	//code
	for(i=0;i<10;i++){
		printf("%d Enter the Number:  \n",i);
		scanf("%d", &num);
		if(num>10){
			break;
		}
	}
	return 0;
}
