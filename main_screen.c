#include<stdlib.h>
#include<stdio.h>
struct Choices{
        int exit;
        int path_choice;
};
struct Choices choices;
#include"story.c"



int main_screen(){
	//this function has is the main menu	
        choices.exit=1;
	choices.path_choice=0;       
	while(choices.exit!=0){
		printf("\t\t\t\t1) New Game\n");
		printf("\t\t\t\t2) Chapter Select\n");
		printf("\t\t\t\t0) QUIT\n");
		printf("\t\t\t\tPlease Enter your choice");
		scanf("%d",&choices.exit);
		if(choices.exit==1){
			story();
		}else if(choices.exit==2){
			printf("\t\t\t\t1) Chapter 1\n");
			printf("\t\t\t\t2) Chapter 2\n");
			printf("\t\t\t\t3) Chapter 3\n");
			printf("\t\t\t\t4) Chapter 4\n");
			printf("\t\t\t\t5) Chapter 5\n");
			printf("\t\t\t\tPlease Enter your choice: ");
			scanf("%d",&choices.exit);
			story();
		}	
	
	}
	
	
	return 0;
}

