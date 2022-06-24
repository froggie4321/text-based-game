#include<stdlib.h>
#include<stdio.h>

void path_c2_a_2(){
//jump into ravine	
	printf("The impact in the water is excruciating and you fall in and out of consciousness.\n");
	printf("The sky is slowly turning into a crimson blood and the land becomes more and more barren. \"GOD what is going on? Have i decensed into hell?\"\n ");
	choices.exit = 3;
}


void path_c2_a_1(){
//Graveyard crypt path	
	int next=0;
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
			next=1;
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



void path_c2_b_1(){
//Montgomery running path
	printf("\"Fuck this I have seen too many movies to know this shit is a red flag\" only this thought lingers in your mind and you do the only resonable thing. RUN!!\n ");
	printf("You accidently hit a lantern on the side of the farm and the whole place catches on fire.\n A few moments later you see the pissed of brute of a man chasing you down with a chainsaw wipping through out the air.\n");
	printf("You are fast and start gaining distance on the man. You are home free. Out of the corner of your eye you see that the ground seems to give way in front of you quikly you stop.\n");
	printf("where the ground once was is ravine that was carved by the raging river below over millenia.\n");
//Decision
	printf("DECISION:\n");
	printf("1) turn around and run another way\n");
	printf("2) jump into the river\n");
	scanf("%d",&choices.path_choice);
	if(choices.path_choice==1){
		printf("You turn around start to run back. The man with his chainsaw is about 3 meters away. Counting on your speed and the slowness that shuch a huge body must have you attempt to run past him. You are the running back and he is a defensive gaurd.\n ");
		printf("Faking a left and then running right you pass him. The air in your face and adrenaline rushing through your veins makes you fell alive. Then you fall. What happend? you did not stumble on a rock but your left leg is not listening to you. You try to get up but your limp leg will not let you balance.\n ");
		printf("Then you notice your tendon was severed. Damm that bastard was quick enough to get me when i passed him.\n");
		printf("The brute of a man comes closer and grabs you by the leg dragging you towards the farm. You scream and ask for help and hear nothing. You plead for forgiveness and mercy but the man says nothing. His face filled with stiches and skin streched from a vicious accident do not reveal any emotion.\n");
		printf("Almost like a mask....\n reaching the farm you notice the small fire had already died down. disappointed that the damm place was not asunder you last ray of hope is gone.\n");
		printf("He picks you up and hangs you from a meat hook you scream and struggle in pain to no avail. Obiously this bastard had done it many times as he missed any vital organs and got the hook right under your collar bone.\n");
		printf("You look around for anything to use to defend your self and see tool chest filled with varing weaponds just outside your reach eventually you give up your struggle and take a clear look around the room.\n");
		printf("The man went back to work on the cadaver almost religously ignores you for the time being and starts ripping the limbs of the pig. he rips out the organs and places them into one container. then rips of a hand.");
		printf("\"WAIT A FUCKIN MINUTE PIGS DO NOT HAVE HANDS\" as he leaves his post to get a new container you notice the human corpse laying on the table and then it dawns on you.\n");
		printf("All of these things around me are not animals but human corpses. This bastard is a cannibal and you are on the menu you try to struggle by cannot remove yoursef from the hook.\n");
		printf("The man returns and hits you on the head with a hammer and says \"Struggling only speeds up your death and everyone knows that sours the meat\". You fade into unconciouness. ");
		printf("When he is done with his current corpse you are next and you are only to blame for your inept decisions\n");
		printf("\t\t\t\tG A M E  O V E R\n");
		choices.exit=0;

	}else{
		path_c2_a_2();
	}


}
void path_c2_b_3(){
//montogomery/master dialouge
	printf(" Looking away from the corpse you say\" Ahh yes master sent me to get you to help me leave this place to get some more meat supply\"\n");
	printf("He looks at you surprised comptenplating your response. Finally he speaks \"You lie master has never once needed me to get supplies. Too stupid he says i am. Why would he send you to fetch me? But if it really was master...  going agaisnt him means that i will get diciplined.... I cannot go throught that again\" he whimpers.\n");	
	printf("Okay prove to me that master really sent you what is his name?\n");
//Decision
	printf("DECISION: \n");
	printf("1) sulfur\n");
	printf("2) Stein\n");
	printf("3) Montgomery\n");
	scanf("%d",&choices.path_choice);
	if(choices.path_choice==1){
		printf("\"Sulfur is his name.\" He looks at and put his arm around you like a brother. He then whispers in your ear \"Sulfur is the nickname we have given to one of the old gods since speaking his name is herasy, But for someone like you who has not been indoctrinated. Even speaking his nickname is a sin. FOR THIS SIN YOU WILL PAY\"\n");
		printf("You struggle to get away but you are like a child to this giant and he drags you to his tool chest where he gets some pliers and pulls your tongue out then with a swift motion rips it out. Your screams get drowned bythe choking on your own blood. He drags you into a dark room with strange symbols and places you onto of an altar of sorts.\n");
		printf("\"Here me all seeing ones i offer this heretics life as tribute to clense his sin\" He picks up a ceremonial knife and in a swift motion stabs your chest. The last thing you see is your beating heart being held up to the sky and a dark claw coming down from the absyss to feast on its prize\n");
		printf("\t\t\t\tG A M E  O V E R\n");
		choices.exit=0;
	}else if(choices.path_choice==2){
		printf("\"Stein is his name\" He looks at you with doubting eyes but then they are filled with fear. He says \"If master Stein has ordained it then lets get to it brother. I will take you to the end of our land and wait for you to send some more supplies. Remember i cannot cross over the border so you have to send them across.\"\n");
		printf("He does not say anything on the way and drops you off next to a red timber-truss bridge with a roof. \"Remember bring them to this side of the bridge\" You nod and walk across the brige As soon as you are on the other side you run and do not look back eventually you make it to small town\n");
		printf("You see the police station and tell them everything that has happend. They look at you with fear in there eyes and call you the anointed one. They give you a car and tell you are blessed to have escaped from that hell whole. A a feat that no one has ever done before.\n");
		printf("You drive away from that place, never to come back the only thing that remains is the memory of that night and even then you sometimes question its vadility.\n");
		printf("\t\t\t\tY O U  S U R V I V E D  G A M E  O V E R\n");	
		choices.exit=0;
	}else{
		printf("\"Montgomery is his name\" He looks at you and even though he shows no expression on his face his eyes light up. He comes towards you and says\" Yes yes Montgomery is your master\" he chokes you unconsicious and chains your arms and leg together and for safe measure he added a weight in the middle of your chest. You wake up and all you can do is drag yourself an all fours like a dog.\n");
		printf("The men noticed you getting up and speaks \"How does it feel to be my bitch?\" You try to speak but he has gagged you. \"I guess i should introduce myself since we will have a real close relationship from now on My name is Remina Montgomery and you are my slave. Really you have only yourself for this privilege\"\n");
		printf("You try to fight at first but the master is too strong even without chains, And slowly after continued torture and rape he breaks you. He is master and you his loyal bitch.\n");
		printf("\t\t\t\tY O U  S U R V I V E D  G A M E  O V E R\n");
			
		
		choices.exit=0;
	}



}
void path_c2_b_2(){
//Montgomery talking path
	printf("You slowly open the door and introduce yourself\" Hey i got lost in the forest and ended up on your farm is there a phone i could use or maybe directions to the nearest police station.\n\"");
	printf("The man turns, shuts off his chainsaw and walks towards you. As he leaves the table you notice that the cadaver is not of a pig but a human. \"You do not simply get lost on the forest. There are only two kinds of people here the cattle that is trespassing and the servents of the master. Now speak which are you.\"\n");
//decision	
	printf("DECISION:\n");
	printf("1) Attack\n");
	printf("2) i am just passing...\n");
	printf("3) Master sent me to do something\n");
	scanf("%d",&choices.path_choice);
	if(choices.path_choice==1){
		printf("Seeing the corpse on the table filled you rage and addrenaline.\"I will not be slaughtered like cattle you digusting creature\" You strike at his face. Your fist feels like it has hit a steel beam and the angered man strikes you back.\n");
		printf("The impact knocks you unconsious and you wake tied face down on a log with all your clothes missing.\n");
		printf("Sounds of items clanging and smashing can be heared. He is looking for something and whatever he is gathering is not good.\n");
		printf("Minutes later the man comes down the stairs and speaks \"Not only are you trespassing on my land you also have assalted me it is only fair i take some pay back.\"\n");
		printf("He lays his tools on a table just out of your field of vision. \"Lets see which hand was it that hit me lets start there.\"\n");
		printf("You feel something grab around your right's hand index finger and then a terrible crunch. Only pain remains where you finger used to be. You scream in pain \"AhhhG Im sorry please let go i did not mean any harm *Sob*\"\n");
		printf("SNAP SNAP SNAP SNAP the rest of the finger follow one by one. \"Your voice becomes corse with all your screaming\" and you hear him\" Moan in excitement\" he speaks \"Yes scream some more like the pig you are\"\n ");
		printf("You hear him remove some clothes and walk around you his errect penis is massive and you are afraid of what he is about to do.\n");
		printf("You feel your asshole being riped apart as he is raping you he snaps the toes one by one and your suffering and screams only further arouse him.\nAfter all the toes on your right foot are gone you can the trobbing of his dick is getting more and more intense he is about to climax.\n just as he is about to climax you feel a hammer dropped down in you right testicle and pain like you have never felt before goes throughout your body.\n");
		printf("His seed dripping from you asshole and down you leg as he gets dressed and says \"See you tommorrow bitch\" \n");
		printf("Crippled from your right side of your body and tide like a beast ready to be killed you cry like you have never cried before.\n");
		printf("You wake up from the noise of the door opening and him walking down the stairs \"Hellow darling ready for our next date.\" he says with a devilish grin.\n");
		printf("Today he starts working on your left side and just like yesterday he rapes you. After he is done and you are broken he says \"broken toy is no fun\"\n ");
		printf("He walks in front of you. You see his penis covered in blood and shit. You see him holding a hammer and a spike. the tools of your untimely distruction.\n");
		printf("he places the spike on your head and raises the hammer up in the sky. One quick blow to your head was your doom. You died just like the cattle you had become.\n");
		printf("\t\t\t\tG A M E  O V E R\n");
		choices.exit=0;
	}else if(choices.path_choice==2){
		printf("looking away from the corpse on the table you whimper out\"I was just passing by when\"you get inturrupted by  \"TRESSPASSOR!!\" and before you can react he smacks you in the face and you become dazed. You try to crawl away but he grabs you by the ankle and tosses you against a huge machine.\n");
		printf("You fall face down into a a pool of organs and blood  you hear a machine turn on. You claw and try to get yourself out but you cannot find a solid grip and just slip and slide in place. Then the whole world starts to shake and rumble. You are slowly falling farther and farther down this pit.\n");
		printf("You feel your leg get caught in between metallic teeth and slowly it gets crushed, and you get pulled down father and farther down. It finally dawns on you this is a grinder and you are about to become ground meat. You rip at you leg in an attempt to get away from this infernal machination. Your struggles are pointless and you slowly get pulled deeper and deeper into its mouth.\n");
		printf("\t\t\t\tG A M E  O V E R\n");
		choices.exit=0;
	}else{
		path_c2_b_3();
	}
}





void path_c2_b(){
//Montgomery Farm
	printf("A strong smell of shit, piss, and iron fills the air making you reactively gag. The further you travel up the path the stronger that putrid smell gets. \n");
	printf("You reach a clearing in the forest, you have final reached Montgomery farm. The building is covered in a rusted iron shell filled with gaps in the structure and its ceiling bukling under the weight of time.\n");
	printf("You walk toward the Farm and hear a roaring engine and the grinding of flesh. You find an opening in the wall and peer inside the Farm.\n");
	printf("You see corpse of what appears to be skinny pigs skewed by hooks and hanging from the ceiling.\"Well that would explain the stench\". Folowing sound you see him cutting into a corpse too dark to see.\n");
	printf("The hulking beast of a man is at least 8 feet tall and wide as an ox. Arms that could rip a tree stump of the ground using a surgeon precision to make short work of the cadaver. His tool of choice a chainsaw.\n");
	
//Decision	
	printf("DECISION:\n");
	printf("1) Run away\n");
	printf("2) Talk to him\n");
	scanf("%d",&choices.path_choice);
	if(choices.path_choice==1){
		path_c2_b_1();
	}else{
		path_c2_b_2();
	}
	
	
}

void path_c2_c_1(){
//Stay like a good little boy

	printf("You finsh your breakfast and get up to look at paintings and other antics decorating the room. The sounds have all died down now and you notice the sun peaking out over the horizen. Almost if timed Count Stein comes into the room and aplogizes for leaving you alone.\"I am sorry the wait and i can see you are a man of principle by staying here and not snooping around like some petty thief. I will in kind show that i am a man of my word and take you to the nearest airport.\".\n");
	printf("The drive takes about 2 hours and right before he drops you off he says \"We are probably never going to meet again and that might be for the best but do know that i consider you my friend and you are always welcomed to comeback to my humble abode.\"\n");
	printf("He drives off and you get on the earliest plane flight back to your home\n");
	printf("\t\t\t\tY O U  S U R V I V E D  G A M E  O V E R\n");	
	choices.exit=0;


}

void path_c2_c_2(){
// follow stein
	printf("You get up from your chair and sneaking around like a bandit of the night you follow closely to the Count. You finally reach a big metal door so cold and industrial that it almost feels out of place next to the rest of the house. you open the door and take the stairs down to basement level.\n");
	printf("You see many strange artifacts probably looted from accient sites around the world. There is also many high tech machines with many beeping and flahing lights Alternating in what appears to be random order. There are also strange humaniod species in clear pods filled with a green sustance wire to what appeared to be life support. \"What the hell is going on here?\" then you see it. On the middle of the room lies some sort of amalgamation of different creatures, some parts avian others crustacian, lizard, amphibian and even mammal. \" What in God's name is this miserable creature\" you think to yourself.\n");
	printf("\"It is beautiful is not. This is the culmination of all my years working on immoratlity a creature that has all the best qualities of every species and none of its weaknesses\" A voice from behind you says and before you can fully turn you fill a drug stabed into your back. Your limbs are not responding but you are still concious and you hear the count speak.\n");
	printf("\"There were many failed experiments to reach this point some did not even make it past a week before dying.  They were weak and not worthy of the gifts i gave them. And some others still live the residents of the forest which you without a doubt must have ran into. Still failures they were. All brawns and no brain. The residents in the near town called me a lunatic and daemond but what they do not know. I serve the old gods and we are the only things keeping the great evil away from the last free territory in the universe\"\n");
	printf("\"Well i do not expect you to understand either, just know you will become a great addition to our side. I was originally thinking of using Remina Montgomery to control my greatest master piece but the gods bless me with you. You are quite the fellow for having survived all my creatures and then sneaking around and avoiding my detection like a true creature of the night. I applaud you. now i it is time for me to compensate your curiosity.\"\n");
	printf("\" He puts a strange helmet on your head and then everything turns black. For a moment you believe you have died but then the lights come back on and you see your self lying on the ground in front of you. Where there was once a full set of hair is now an empty cavern and you look down at your body and you can see the distorted features of the creature laying on the table.\"\n ");
	printf("\"Count Stein screams from the top of its lungs \" It's alive I have done it created the greates creature to defy death MUAHAHAHA\"\n");
	printf("\t\t\t\tY O U  S U R V I V E D  G A M E  O V E R\n");
	choices.exit=0;



}



void path_c2_c(){
//Stein Manor
	printf("The forest slowly opens up to a well manacured lawn with a path of cobble stone that leads to a beautifull water fountain shadowed by a great manor.\n");
	printf("You notice that some of the lights are still on and muster up the courage to walk to the house to ask for help. When you reach the fountain you noticed that it has been weathered from what appears to be millenia but the original carftsmanship cannot be denied. More than likely the work of a master crafstman and not the junk that is sold today.\n");
	printf("You reach the massive doorbell perfectly barnished and made from what appears to be burl wood. The swirles reminesent of a two great streams chrashing,and churning against each other sparkle in the moonlight.\" This door alone is probably worth that fo a single family house\" you think to yourself and proceed to ring the doorbell by the side of the Mansion.\n");
	printf("A well groomed middle aged man easily towaring you opens the door and politely says\" Hello What brings you to my families humble aboved this fine morning?\". \" Morning? is it really that late? or early i should say. Well anyways it is a pleasure to meet you and i just happend to get lost in the forest near your house and was wondering if there was anyway for me to use your phone to call someone to come pick me up\" you answer. He looks at you for a moment trying to get a feel to your character.\n");
	printf("\"Unfortunately we do not have a cell tower and our phone line was knocked out a few weeks ago in the torrent of a passing storm. I can however offer you some breakfast and point you to the nearest town when the sun comes up.\" He signals you into his house and softly but firmly puts his palm on your back ever slightly pushing you into his home.\n");
	printf("He walks you towards the dining room table and you have never been in a home this refined and expertly crafted, everything oozed of class and deep history.\n");
	printf("\"The man gives you a seat to his right side and his maids bring you some tea with milk and some muffins to break fast with.\"\n");
	printf("\"OH where are my manners let me introduce myself. I am count Feynman Stein I was named after the physicist Richard Feynman, My father was always one to love the sciences and the arts not so much politics because in his own words. Those Damm blood sucker do not do anythign but steal money from the backbone of this country. A bunch of useless trash. You will excuse my tongue i will hope\"\n");
	printf("You respond with \"My name is ________ and my father did not put much thought to my name just whatever magazine was laying around that caught his gaze. Well cannot really be mad at the man as the name suits me perfectly. ");
	printf("So what is it exactly you do here Count Stein?\"\n");
	printf(" He responds \"I am a bioengineer,philosopher,doctor, and quite the business man. I am currently working on finding the cure for death. my pursuit has le---\". The conversation is interruped by loud banging and what could only be described as an animal in pain.\n");
	printf("\" Ahh it would seem that my work is calling for me. If you would excuse me i will be back in a few minutes after i check up on my work.\"\n");
	printf("Count Stein gets up and leaves the room.\n");

//Decision
	printf("DECISION: \n");
	printf("1) Wait for him to come back\n");
	printf("2) Folow him\n");
	printf("3) Run out of the house\n");
	scanf("%d",&choices.path_choice);
	if(choices.path_choice==1){
		path_c2_c_1();	
	}else if(choices.path_choice==2){
		path_c2_c_2();
	}else{
		printf("You do not know what he is working on in that basement but you are not about to stay to find out. You run out the back of the manner and hear some dogs chashing after you. You keep on running.\n");
		printf("The barks and growls are getting closer they are right on top of you. Then you hear it the crashing of water on the sides of a cliff. You speed towards the sound of the waves and without hesitation you jump into the abyss.\n");
		path_c2_a_2();
	}



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


