#include<stdlib.h>
#include<stdio.h>
#include "chapter_1.c"
#include "chapter_2.c"
#include "chapter_3.c"
#include "chapter_4.c"
#include "chapter_5.c"


void story(){
//this will control the main story progression
	printf("game starts\n");
	
	if(choices.exit==1){
		 chapter_1(choices);
	}
	if(choices.exit==2){
		chapter_2(choices);
	}
	if(choices.exit==3){
		chapter_3(choices);
	}
	if(choices.exit==4){
		chapter_4(choices);
	}
	if(choices.exit==5){
		chapter_5(choices);
	}

	printf("%d\n",choices.exit);

	
}


