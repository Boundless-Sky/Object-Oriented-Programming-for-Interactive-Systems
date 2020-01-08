/*Justin Ngo
September 5, 2016
ME EN 5250: Programming for Engineers
Homework 1:Problem 2:game_development.cpp

Info: Using type short to store "health" and making so it doesn't overflow
which basically in a boss battle in the 80's, healing it could kill it.
attacks will be negative numbers
heals will be positive numbers
with boss health starting at 32000*/

#include <iostream>
#include <vector>

int main() {
	int number_test_cases = 0;
	std::cin >> number_test_cases;
	std::vector<short> attack_heal(number_test_cases);
	short boss_health = 32000;

	//storing inputs
	for (int i = 0; i < number_test_cases; i++) {
		std::cin >> attack_heal[i];
	}//end for

	for (int j = 0; j < number_test_cases; j++) {
		std::cout << "Case " << j << ":\n";
		short old_boss_health = boss_health;
		boss_health += attack_heal[j];
		if (((32767 - old_boss_health) < attack_heal[j]) || (boss_health > 32767)) { //the second portion of this condition ((boss_health > 32767)) 
			std::cout << "no healing the boss to kill it!\n";						 //redundant and WRONG. This allows overflow to happen already
			boss_health = 32767;												     //but the purpose of the homework was to prevent any overflow
			std::cout << "boss health is " << boss_health << "\n";
			boss_health = 32000;
		}
		else if (boss_health <= 0) {
			boss_health = 0;
			std::cout << "boss health is " << boss_health << "\n"; 
			std::cout << "the boss is dead!\n";
			boss_health = 32000;
		}
		else {
			std::cout << "boss health is " << boss_health << "\n";
			boss_health = 32000;
		}
	}// end for
	return 0;
}//end main