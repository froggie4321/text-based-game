#include<stdlib.h>
#include<stdio.h>

void path_c2_a_2(){
	printf("The impact in the water is excruciating and you fall in and out of consciousness.\n");
	printf("The sky is slowly turning into a crimson blood and the land becomes more and more barren. \"GOD what is going on? Have i decensed into hell?\"\n ");
	choices.exit = 3;
}


void path_c2_a_1(){
	printf("The crypt walls are covered with spider webs and recesses in the walls are fille with corpse in varying discomposition states.\n");
	printf("A thick layer of dust covers most of the floor except from what seems footprints of what you assume to be the care taker\n");
	printf("Ripping the cloth and a femur from an old skeleton you make a makeshift torch and dip into a container filled with oil.\n");
	printf("after several attemps to light the torch you finally succeed and decide to explore deeper into the crypt.\n");
	printf("The age on the tomb vary anywhere from a few years to millenia. and the the engravings on them are from all over the world Egyptian?Greek?Latin?Mesopotamia? \" who the hell has the resources to bring tombs from all over the world and why?\"\n ");
	printf("As you take a closer look you notice that they could not be moved since they carved straight into the walls. What the hell is going on?\n");
	printf("You hear animal like sounds coming from behind you \"Shit what was that? Did those things in the fores follow me all the way here? Shit i have to get out of here.\" You drop your torch and break out into a sprint\n");
	printf("The path reaches what a appears to be a cave with a huge crevice running through the side and two openings on the wall ahead.\n");
//decsion
	printf("DECISION:\n");
	printf("1) go left\n");
	printf("2) go right\n");
	printf("3) fuck it jump down\n");


	 while(next==0){
        	scanf("%d",&choices.path_choice);
                if(choices.path_choice==1){
                      	printf("You turn left and run faster than you have ever ran before. The path on the is clear and has not been used from what appears decades.\n");
			printf("You hear them behind you and cannot slow down as look to the end of the hall you see moonlight coming into the crypt. \"Light that means i can get out and find somewhere to hide to get away.\" You push yourself to run faster your almost there you feel like you are flying. Wait why is the ceiling getting farther away?\n");
			printf("your body is impaled and by a rusted spike and you slowly bleed out.breathing heavily your last words are\"Damm i was almost out\" \n");
			printf("\t\t\t\tG A M E  O V E R\n");
		
		
			choices.exit=0;
                        next=1;
                }else if(choices.path_choice==2){
                        printf("You take a right and dive into the room.\n");
			printf("Whatever was following you seems to be right outside the door but is hesitant to come in. After a few seconds the pack of beast let out an angry growl and you hear their footsteps get farther and farther away.\n");
			printf("You let out a sigh of relief and clumsively feel around the room\n");
			printf("\"Damm i cannot see anything and why the hell are there so many spider webs?\" Struggling you slowly make your way deeper and deeper into the room.\n");
			printf("The farther in you go the more this dam webs get all over you struggle to remove the dam things to no avail.\n");
			printf("you feel the webs get tighter and tighter around you and before you know it you cannot even lift a finger.\n");
			printf("Slowly a dark figure desends from the darkness. its six eyes look at you like another piece of meat like any other.\n");
			printf("You struggle to break free but only up tiring yourself out and you flinch as its pincers get closer to your chest.\n");
			printf("STAB a sharp hot pain feels your body and you feel the blood draining out of you... wait not draining out but filling in?\n");
			printf("Your insides are on fire and you feel like you are melting.\n");
			printf("Several Hours have passed and your brain has numbed the pain. Who would have thought you would become smoothy to that spider thing.\n");
			printf("\t\t\t\tG A M E  O V E R\n");


			choices.exit=0;
                        next=1;
                }else if(choices.path_choice==3){
			path_c2_a_2();
		}
	}


}
void path_c2_a(){
//GraveYard path
	int next=0;
	printf("inside Graveyard path\n");
	printf("As you get closer to graveyard a thick fog slowly begins to envelope you from all sides.\n ");
	printf("you look down to stay on the road and a eventually arrive at 2 giant opened gates with the name on the sign corroded with time only living graveyard behind.\n");
	printf("behind the gates you can barely make out a what appears to be hill and you begin your ascent towards the top.\n ");

	printf("As you climb up the hill the fog begins slowly fall behind you.The visage of a what appears to be a building is slowly coming into view.\n");
	printf("What you believe to be a building at first turned out to be crypt. you look around and no nothing else in sight.\n");
	printf("\"Uggghhh.....arrgggg....agggg\" Sounds like someone in pain is walking towards you.\n");

//Decision	
	printf("DECISION:\n");
	printf("1) wait to see who is coming\n");
	printf("2) go into the crypt\n");
	
	while(next==0){
        	scanf("%d",&choices.path_choice);
                if(choices.path_choice==1){
                        path_c2_a_1();
                        next=1;
                }else{

			printf("A old man with tattered clothes comes toward you. I appears he might be the gravekeeper.\n");
			printf("The stench of death permeates from him, it seems he has not showered in months.\n");
			printf("As he get closer you notice a yellow tone on his face and the look of disease about him.\n");
			printf("\"Hey how is it going\" you ask him. He continues to walk towards you. \"I seem to have some how ended up on the forest below and after walking for several hours i ended up in your neck of the woods.\"\n");
			printf("You get not response but he approaches for a hug\n");
			printf("His stench is unverable and reluctantly you let him hug you\n");
			printf("\"Hey nice to meet you..as i was saying....I need help and was....wondering..if you could help...point me in the right...directions \" You say trying not to vommit.\n");
			printf("\"Buddy have you been lisTEN-Aggghh\" Your conversation is interupted by his teeth sinking into you troat.\n ");
			printf("You struggle to pull away ripping his arms of you reactively your hand goes towards were he bit your troat.");
			printf("Your hand finds a hole squirting blood out where your adams apple used to be.\n");
			printf("You panick trying to keep pressure on the wound but to no avail, the blood will not stop.\n");
			printf("As you lay on the ground dying you see the limb less body coming towards looking to take another bite of your flesh.\n");
			printf("You try to put up a fight but do not have enough strenth to hold him back his rancid-rotting mouth goes in to take another bite.\n ");
			printf("\t\t\t\tG A M E  O V E R\n");
		
			

                        choices.exit=0;
                        next=1;
		}
	}

}

void path_c2_b(){
//Montgomery Farm
	printf("Inside Montgomery Farm\n");

}

void path_c2_c(){
//Stein Manor
	printf("inside default path Stein Manor\n");


}



void chapter_2(){
	printf("\t\t\t\tC h a p t e r  2\n");
	if(choices.path_choice==2){
		path_c2_a();		
	}else if(choices.path_choice==3){
		path_c2_b();
	}else{
		path_c2_c();
	}
	
}


