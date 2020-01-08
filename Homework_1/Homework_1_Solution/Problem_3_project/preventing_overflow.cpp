/*Justin Ngo
September 5, 2016
ME EN 5250: Programming for Engineers
Homework 1:Problem 3: preventing_overflow.cpp

Info: Prgoram checks if casting a double to a flow would cause 
overflow to infinity. Program checks the range of number a float can store. */

#include <iostream>
#include <vector>
#include <limits>

int main() {
	int number_of_cases = 0;
	std::cin >> number_of_cases;
	std::vector<double> dbl_number(number_of_cases);
	
	for (int j = 0; j < number_of_cases; j++) {
		std::cin >> dbl_number[j];
	}

	for (int i = 0; i < number_of_cases; i++) {
		std::cout << "Case " << i << ":\n";
		if ((dbl_number[i] <= std::numeric_limits<float>::max()) && (dbl_number[i] >= std::numeric_limits<float>::lowest())) {
			float float_number = (float)dbl_number[i];
			std::cout << float_number 
					  <<" won't overflow a float, float = " 
				      << float_number << "\n";
		}
		else {
			std::cout << dbl_number[i]
					  << " will overflow a float\n";
		}
	}//end for
	return 0;
}// end main