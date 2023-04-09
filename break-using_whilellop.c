#include<stdio.h>
int main(){
	
	//varaible_declaration
	int i=0, height;

	//code
	while(i<10){
		printf("%d\n Enter your Height :\n",i);
		scanf("%d\n",height);
		
		if(height>50){
			break;
		}	
	}
	return 0;
}
