#include<stdlib.h>
#include<stdio.h>
#include "chapter_1.c"
#include "chapter_2.c"
#include "chapter_3.c"
#include "chapter_4.c"
#include "chapter_5.c"


int story(struct Choices choices){
//this will control the main story progression
	printf("game starts\n");
	
	if(choices.exit==1){
		choices.exit = chapter_1(choices);
	}
	if(choices.exit==2){
		choices.exit = chapter_2(choices);
	}
	if(choices.exit==3){
		choices.exit = chapter_3(choices);
	}
	if(choices.exit==4){
		choices.exit = chapter_4(choices);
	}
	if(choices.exit==5){
		choices.exit = chapter_5(choices);
	}

	return choices.exit;
}


