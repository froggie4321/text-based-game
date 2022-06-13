#ifndef _CHARACTER_H
#define _CHARACTER_H
#include <string>


/*
 * My class will need to hold classes Stats, Items,Equipment.
 * and store for ease of use. each character and enemy type will have there own stats, 
 * equipement and items.
 * 
*/	
	class Character;
	class Character{
		private:
		        std::string Name;			//name
			std::string Occupation;			//occupation
			int hp;					//current health
			int hpMax;				//ful health
		//	Items:: items;				//items
		//	Equipment:: equipments;			//equipment on character
		//	Attributes:: Attributes;		//attributes (strength,perception..ect)
		//	Stats:: Stats;				//Total stats summed up
			Character();				
			virtual ~Character();
		public:
			void getStats(){			//get current stats
				
			}
			void setStats(){			//set stats
			
			}
	};
	





#endif
