#include<stdlib.h>
#include<stdio.h>


void path_c1_ab(){
	int next =0;
	printf("\nYour body hurts all over and you are out of breath the only thing keeping you going is your unwaverin will.\n ");
	printf("As you slow down and catch your breath you notice that the road splits into 4 paths\n");
	printf("you see a old sign post with arrows pointing in diferent directions\n");
//Decision ab1	
	printf("\nDECISION\n");
	printf("1)Lake Sulfur\n");
	printf("2)Graveyard\n");
	printf("3)Montgomery Farm\n");
	printf("4)Stein Manor\n");
	while(next==0){
        scanf("%d",&choices.path_choice);
                if(choices.path_choice==1){
			printf("\nThe path towards the lake is calm and quiet but for whatever reason you cannot get this itch of the back of your troat.\n");
			printf("It is very mild and you decide to continue on your path towards the lake.\n");
			printf("The itch contines to grow and under the blood moon your skin looks almost red \n ");
			printf("You scratch yourself but cannot get rid of the DAMM ITCH and you swear you can");
			printf("see blister on your skin but you are so close and can see the beautiful reflection");
			printf("of the moon on the lake\n");
			printf("You continue to walk...\n");
			printf("You are almost there when you cannot hold your stomach anymore and you empty");
			printf("your contents on to the dirt road.\nIs that blood?\n");
			printf("You struggle to breath and do not have enough strength to stay standing.\n");
		printf("Collapsed on the floor sitting on a pile of your own vomit you look up towards");
		printf("your destination so close and yet seems to be getting farther and farther away\n");
		printf("What is that coming out of the water?\n A giant pillar?\n ");
		printf("...As.....You...struggle...for...your...last...breath..you...could..swear...the....pillar...is......moving\n");
		printf("Wait are those eyes?\n");
		printf("\t\t\t\tG A M E  O V E R\n");	
                        choices.exit=0;
                        next=1;
                }else if(choices.path_choice<=4){
                    	choices.exit=2;
			next=1;
		}else{
                        choices.path_choice = (rand() %(3)) + 1;
                }
        }



}



void path_c1_a_1(){
	int next=0;
	printf("\nThe howling of distant wolves and strange sounds around you fill you with\n");
	printf("Fear, but you are tired so so tired and the damp hard ground feels\n");
	printf("more and more like a plushy cloud.");
	printf("ZZZZZZ..ZZZZ...ZZZ\n");
	printf("A loud Snap Jolts you awake. Someone or something is circling around \n");
	printf("you\n");
//decision b
	printf("\nDECISION\n");
	printf("1)Try to hide\n");
	printf("2)Run away\n");
	printf("3)get ready to fight\n");
	while(next==0){
        scanf("%d",&choices.path_choice);
                if(choices.path_choice==1){
                        printf("\nYou immidiatly jump into some bushes near by hoping that whatever was there\n");
			printf("is now gone.\nSilence you hear nothing but the sound of your own heart beating.\n");
			printf("Badump Badump.... badump you calm yourself down and take a deep breath and slowly");
			printf(" walk outside of the bushes.\n");
			printf("You see nothing hear nothing whatever it was is gone\n");
			printf("you calmly look around and as you turn around you notice it\n");
			printf("It is easily 8 feat tall with many scars on its face the smell of blood premeates the air.\n ");
			printf("You are filled with fear and try to make a run for it.\n");
                        printf("You do not even complete half the turn before you get knocked down\n");
			printf("you want to move but cannot your body is so just so heavy then you notice the others\n");
			printf("A whole pack of what can only be considered as some sort of wolf humanoids\n");
			printf("You see your blood trickling down the dirt in your face and slowly embrace\n");
			printf("the tireness that comes over you\n yes I will sleep and when i wake everything will be okay.\n");
			printf("\t\t\t\t G A M E  O V E R\n");
			choices.exit=0;
			next=1;
                }else if(choices.path_choice==2){
                        path_c1_ab();
                        next=1;
                }else if(choices.path_choice==3){
			printf("\nYou pick up a fallen branch and get ready to meet your foe.\n");
			printf("It appears. A giant dog standing on two legs, no not a dog but some grotesque\n ");
			printf("humanoid-canine creature. It towers over you and you know you have to strike first\n ");
			printf("your swing connects and it screams in pain. you swing again and it whines like\n");
			printf("the scared little bitch it is. Gaining confidence you swings again but just\n");
			printf("as your blow is about to hit it moves out the way and you find yourself flying backwards\n");
			printf("You smash into a tree behind you. Dazed you look towards your adversary\n ");
			printf("It walks out of the darkness and into the moonlight. Again that horrible whining. why?\n ");
			printf("Did you really cause that much damage. No you do not even see a bruise on its\n");
			printf("massive chest then why? As you look at its face a sudden realization dawns on you\n");
			printf("That fucker was not crying it is laughing at your poor excuse of an attack\n");
			printf("You get up you have to run away!!!\n Before you can react you get impaled\n");
			printf("You see its tree like limb going into what once was your stomach\n");
			printf("You struggle for your life, clawing,pounding,hitting, biting no matter what you do nothing helps\n");
			printf("You run out of energy and cannot hold your head up anymore as you look around\n");
			printf("for one last time you notice another one... wait not one but a whole pack\n you never even had a chance in hell\n");
			printf("As your vision grows dim you see your insides all over the ground\n");
			printf("Who would have thought you would end up as a dog food..\n");
			printf("\t\t\t\tG A M E  O V E R\n");
                        choices.exit=0;
                        next=1;
                }
                else{
                        choices.path_choice = (rand() %(3)) + 1;
                }
        }



}
void path_c1_a_2(){
	printf("\nYou struggle to get yourself up. Drowsy and light headed you walk down the the dirt road\n");
	printf("After walking for about half an hour your senses return and your vision begins to clear.\n");
	printf(" The rustling of the trees coupled with animal noises you cannot seem to quiet put a name on. Give the forest a suffacating auora. \n");
	printf("On you keep on walking but you could have sworn you have already seen this tree before.\n");
	printf("Again you walk. \"Am I going crazy? Why do keep on running into the exact same tree?\" \n");
	printf("\"No that cannot be but i must be sure\" You take of your shirt to mark the tree. You walk again\n");
	printf("This time you are sure your old shirt is haging right were you left it. There is no reason to leave your shirt anymore so you put it on and take a some time to think.\n");
	printf("\"is the road just a long loop? What can i do to get out of here? Should i choose a direction and walk into the forest?\" \n");
	printf(" You look around for anything that stands out to use as a marker. Nothing. \"SNAP\" jerking towards the sound you see what appears to be a pair of eyes in the bushes. NO not a pair. Many dozen pairs. RUN!!\n");
	printf("You do not know how long you have been running for or were you are going but you hear them behind you so you keep on running.\n");
	printf("\"Pant\" \"Pant\" out of breath and tired but you think you have lost them still you will not stop.\n");
	
	path_c1_ab();
	
}






void chapter_1(){
	int next=0;
	printf("\n\t\t\t\tC H A P T E R  1 \n\n");
	printf("\"Ughh my head feels like it is going to explode.\"");
	printf(" As you hold your head and your vision slowly comes into focus you");
	printf("see nothing but the blackness of night being lighted by a waning blood moon\n");
	printf("\"Where am I? What happend to me? And why the hell does my head hurt so much\"\n");
	printf("The only thing you seem to reacall is going out to get some groceries...\n");
	printf("and then, then , then , it started to rain so you took a short cut..\n");
	printf("Yes you cut through the old factory and as you went into the old abandoned\n");
	printf("building everything went black\n");

//decision a	
	printf("\nDECISION:\n");
	printf("1)Sleep some more\n");
	printf("2)Try to get up\n");
	printf("3)Curl up in a ball and cry\n");
	while(next==0){
	scanf("%d",&choices.path_choice);
		if(choices.path_choice==1){
			path_c1_a_1();
			next=1;
		}else if(choices.path_choice==2){
			path_c1_a_2();
			next=1;
		}else if(choices.path_choice==3){
			printf("\nStress overwhelmes you. Where are you? What can you do? Sombody will help me. Right?\n");
			printf("Who would come into this desolate place in the middle of the night? \n");
			printf("You want to get up but cannot so you just curl into a ball and cry\n");
			printf("You do not care how loud you are after all who will hear you out here.\n");
			printf("You feel a presence around you lifting up your head you see that the forest has closed in around you\n");
			printf("Wait do those trees have eyes?\"of course not\n");
			printf("trees do not have eyes\"YOu close your eyes agiain. As you are about to open your eyes you feel your limbs being pulled\n");
			printf("an extreme pain comes over you and is gone just as quickly\n");
			printf("You see in the shadows a pack of massive dogs eating your once attached limbs\n");
			printf("and notice what appears to be the alpha coming towards you. To get first dibs\n");
			printf("on your delicious insides\n your vision slowly fades and the last image you see is of your\n");
			printf("Guts being riped out of your body\n");
			printf("\t\t\t\tG A M E  O V E R\n");
			choices.exit=0;
			next=1;
		}
		else{
			choices.path_choice = (rand() %(3)) + 1;
		}
	}

	
	
}


