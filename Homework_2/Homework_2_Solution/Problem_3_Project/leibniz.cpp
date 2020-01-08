/*Justin Ngo
ME EN 5250: Programming for Engineers
Homework 2: Problem 3 - Estimating pi using leibniz's formula

Info: Estimate pi using leibniz's formula. 
input is between 1 and 10000000
print up to 8 digits of accuracy 

*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

int main() {
	int num_cases;
	std::cin >> num_cases;
	bool sign = true; // true = positve, false = negative
	std::vector<int> the_inputs(num_cases);

	for (int i = 0; i < num_cases; i++) {
		std::cin >> the_inputs[i];
	}

	for (int i = 0; i < num_cases; i++) {
		std::cout << "Case " << i << ":\n";
		double pi = 0;
		for (int j = 1; j < the_inputs[i]+1; j++) {
			double even_to_odd = (2 * j) - 1;

			/*this is one way to approach the problem
			if you don't want to deal with boolean switching
			and is more compact and awesome. But since
			I worked on the boolean switching first, I'm going
			to leave it at that. */

			/*if (j % 2 == 0) {
				pi = pi - 4.0 / even_to_odd;
			}
			else {
				pi = pi + 4.0 / even_to_odd;
			}*/
				
			if (sign == true) {
				pi +=  4.0 / even_to_odd;
			}
			else {
				pi -= 4.0/even_to_odd;
			}//end if
			sign = !sign;
		}//end computing for loop
		sign = true;
		std::cout << "Pi estimated as: " << std::fixed << std::setprecision(8)
			<< pi << "\n";
	}
	return 0;
}//end main