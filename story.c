#include<stdlib.h>
#include<stdio.h>
#include "chapter_1.c"
#include "chapter_2.c"
#include "chapter_3.c"
#include "chapter_4.c"
#include "chapter_5.c"


int story(){
//this will control the main story progression
	printf("game starts\n");
	int result;
	result = chapter_1();
	result = chapter_2();
	result = chapter_3();
	result = chapter_4();
	result = chapter_5();


	return 0;
}


