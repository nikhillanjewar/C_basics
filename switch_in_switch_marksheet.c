#include<stdio.h>
int main(){
	
	//declaration
	int roll_no, marks;
	
	printf("Enter a roll_no of a student: \n");
	scanf("%d", &roll_no);
	
	printf("Enter a Marks of a student: \n");
	scanf("%d", &marks);
	
	//switch_statements

	switch(roll_no){
		case 01:
			switch(marks){
				case 78:
					printf("Your marks is 78 you are pass in this subject",marks);
					break;
					
			}
		
		case 02:
			switch(marks){
				case 95:
					printf("Your marks is 95 you are pass in this subject",marks);
					break;
		}		
	}
	return 0;
}
