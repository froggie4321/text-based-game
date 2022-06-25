#include<stdlib.h>
#include<stdio.h>


void path_c3_a(){
// Free them
	printf("They are master and you their loyal retainer. Bewitched by their words you walk towards the the center of the room where you see 3 smaller orbs whose essance is slowy being sucked into a lager darker force. You look around and find a strange blade with no handle on the middle of an altar. The blade digs deep in your flesh until it strikes bone. You cut the connection between the 3 smaller orbs and the larger orb. The Large orb fluctuates and some of the energy escapes and it becomes smaller. Quickly the 3 orbs absorb the energy and grow in size.\n");
	printf("The once old and weakend beings  grow stronger and break free from their cage.\n");
	printf("The earth begins to grow with life and over the following decades new species grow and the life force of the planet grows. You offer their lives to your masters. Slowly they grow stronger eventually becoming strong enough to send you to other worlds to liberate.\n");
	printf("Every world you free from the clutches of the advesary makes your lords stronger and slowly but surely you push back its curropt presence\n");
	printf("\t\t\t\tY O U  A R E  C O N Q U E R O R  G A M E   O V E R\n");

}
void path_c3_b(){
//Kill them
	printf("Their words fell in deaf ears and you walk towards the center of the room where you find a strange ceremonial blade with no handle. Your blood soaks into the very core of the strange alloy. You take the blade and walk towards the three imprisoned beings. They plead for forgiveness and tell you stop, that you are making a grave mistake that will mean destruction to the whole universe.\n");
	printf("Fuck them and fuck this world you are tired of it all. You strike the first and their very being gets sucked into the blade. \"Please stop have mercy you hear them welp and cry \" So much for almighty beings. You continue on your pilgrimage and kill the remainning two.\n");
	printf("then the sky opens up and a being who morphs and fluctuates with every passing moment manifest in the opening. His speaks in his Xeno tongue but you understand everything \"You who have done me this favor today will forever be my loyal subject you shall lead  my slave army to conquer new realms of existance. You will never have needs or wants. Everything you desire shall be yours.\"\n");
	printf("His words are ambrosia and you feel your very soul and being quivering in adoration towards him. You drop to your knees and offer your new lord the sword with the power of his slayne foes.\n");
	printf("\t\t\t\tY O U  A R E  C O N Q U E R E D  G A M E  O V E R\n");

}
void path_c3_c(){
//Sacrifice yourself
	printf("You walk to the center of the room and see 3 small orbs whose essance is being sucked into a larger orb. You look around and find a blade with no handle laying on top of an altar.\n");
	printf("The blade digs deep into your flesh and the pain you feel snaps you of the trance you were in. \"What the fuck was i about to do? Those damm bastards where using me like pawn in their loosing game\" You are nobodies slave you take the blade and stab into one of the smaller orbs. it's screams fill your head and you feel it struggling to take over your very being. You see that one of the 3 beings shrivels up and dies but his voice still rings in your very soul.");
	printf("YOu struggle to strike another one of the smaller orbs and again you hear it inside of you more intense then before you can feel you mind starting to break\n");
	printf("A second being shrivels up and dies. You force yourself to walk towards the third orb and stab it. The pain is unbearable and your soul is being pulled apart. You struggle to hold yourself together\n");
	printf("The third being shrivel up and dies. Your every step toward the last and largest orb is excrutiating and you muster up the final bit of your strength and stab into it.\n");
	printf("The very world shakes and fluctuates... No not the world the whole of the universe. Xeno symbols fill you head and you almost loose yourself for a second. their is a war going on inside your being. On one side the three beings on the other a strange foe. your torment is never ending and the strain on your body causes you to fall to the ground. You can no longer stand up so you crawl to the altar. There is one final thing to be done. laying on the altar you hold the blade to the sky and in one swift motion stab into your chest. the cold blade strikes in between your ribs and into heart the world become hot and then cold again and you feel them dying with you. As you look to the sky for one final time the darness that was enveloping the world disappears and the universe fluctuates with different colors celebrating you and their new found freedom.\n");
	printf("\t\t\t\tY O U  A R E  M A R T Y R  G A M E  O V E R\n");


}

void chapter_3(){
	printf("\t\t\t\tC H A P T E R  3\n");
	printf("You wake up in a desolate land where there is nothing but emptyness. Where the river once raged only its erosion remains. The Earth is gray like the ash left from the coals of a fire it is as if the very earth is devoid of life.\n");
	printf("Dirt blowing in your eyes you squint looking for any refuge where you weather the storm. You see nothing so you walk And you walk. Day turns into night and night turns into day. Your skin and lips are parched while your troat screams for any of the sweet substance of life. You start to become delusional and begin see mirages on the distances but you are so thristy that you do not care if they are fake. You walk to them hopeful; Always to be disapointed.\n");
	printf("You see a distant glimmer of light so black that you have to but to wonder if it is really light being reflected. \"Damm i was always told it would be a bright light at the end of the tunnel Not the quite what i expected but hell anything is better than this suffering\" You begin to walk towards the light.\n");
	printf("The closer you get the darker the world seems to become. Not because the day is turning into night, no It feels almost like the very life of the world is being sucked away towards the black light. You continue to walk ever getting closer to the Abyss.\n");
	printf("You arrive at structure whose geometry is all wrong the Obtuse angles are Acute. Acute are obtuse and everything seems to shift and change.This is definetly not of euclidian design and your small monkey brain cannot grasp the true size or shape of its design. You proceed to an opening on the structure and walk inside.\n");
	printf("Inside you see Three massive beings dried up like mummies and on the edge of death. \"Hear us. He who has traveled to the end of days. The last of the free people the last sliver of life in this universe. We speak to you in your communis lingua to ordain you the task of freeing the universe of his clutches. He who could not kill us so he weakens us and bids his time to consume all. All you have to do is go to the center of the room where you will find a control panel that imprisons us here\"\n");
//Decision
	printf("DECISION:\n");	
	printf("1) Free Them\n");
	printf("2) Kill Them\n");
	printf("3) Lay on the sacrifice alter\n");
	scanf("%d",&choices.path_choice);
	
	if(choices.path_choice==1){
		path_c3_a();
	}else if(choices.path_choice==2){
		path_c3_b();
	}else{
		path_c3_c();
	}



	choices.exit=0;
}


