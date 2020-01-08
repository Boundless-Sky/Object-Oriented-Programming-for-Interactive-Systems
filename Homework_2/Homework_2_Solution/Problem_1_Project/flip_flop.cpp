/*Justin Ngo
ME EN 5250: Programming for Engineers
Homework 2: Problem 1 - Flip flops

Info: Seconds divisible by a = flips
	  seconds divisible by b = flops
	  seconds divisible by both = flipflop
	  no action then just print out the secons
	  
	  program input:
	  4 inputs: 
	  0 - number of cases
	  1 - seconds to start at
	  2 - number of seconds to simulate 
	  3 - value of a
	  4 - value of b*/

#include <vector>
#include <iostream>

int main() {
	int Number_of_cases;
	std::cin >> Number_of_cases;
	std::vector<int> start_second(Number_of_cases);
	std::vector<int> interval(Number_of_cases);
	std::vector<int> a(Number_of_cases);
	std::vector<int> b(Number_of_cases);

	//store variables
	for (int i = 0; i < Number_of_cases; i++) {
		std::cin >> start_second[i];
		std::cin >> interval[i];
		std::cin >> a[i];
		std::cin >> b[i];
	}//end storing variables

	//perform calculations and spit them out
	for (int i = 0; i < Number_of_cases; i++) {
		std::cout << "Case " << i << ":\n";
		//needed to have ending_second in the conditonal statmemt portion instead of
		//start_second[i] + interval[i] because start_second will always increase thus
		//the lessthan statement will never become false. infinte loop of doom. 
		int ending_second = interval[i] + start_second[i];
		for (start_second[i]; start_second[i] < ending_second; start_second[i]++) {
			if ((start_second[i] % a[i] == 0) && (start_second[i] % b[i] == 0)) {
				std::cout << "flipflop\n";
			} 
			else if (start_second[i] % a[i] == 0) {
				std::cout << "flip\n";
			}
			else if (start_second[i] % b[i] == 0) {
				std::cout << "flop\n";
			}
			else {
				std::cout << start_second[i] << "\n";
			}
		}//end calculations for a single case
	}//end case calculations
	
	return 0;
}//end main