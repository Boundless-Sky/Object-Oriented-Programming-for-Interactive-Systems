/*Justin Ngo
ME EN 5250: Programming for Engineers
Homework 2: Problem 4 - Root finding using newton method

Info: using root finding on 
f(x) = x^5 + 6x^4 + 3x^3 - x - 50
f'(x) = 5x^4 + 24x^3 + 9x^2 - 1
we want relative error to reach some threshold or run out of number of n
intputs guess value:x, iterations:n, tolerance e, 
*/

#include <cmath>
#include <iostream>
#include <vector>
#include <iomanip>

int main() {
	int number_of_cases;
	std::cin >> number_of_cases;
	std::vector <double>guess(number_of_cases);
	std::vector <double>iterations(number_of_cases);
	std::vector <double>tolerance(number_of_cases);
	double f = 0;
	double fprime = 0;
	double new_guess = 0;
	int total_iterations = 0;

	for (int i = 0; i < number_of_cases; i++) { 
			std::cin >> guess[i];
			std::cin >> iterations[i];
			std::cin >> tolerance[i];	
	}

	for (int i = 0; i < number_of_cases; i++) {
		std::cout << "Case " << i << ":\n";
		double calc_tolerance = tolerance[i] + 10; //this is just to initialize the variable so at start it is never less than the tolerance. 
		for (int j = 0; (j < iterations[i] ) && (calc_tolerance > tolerance[i]); j++) {
			f = pow(guess[i], 5) + 6 * pow(guess[i], 4) + 3 * pow(guess[i], 3) - guess[i] - 50;
			fprime = 5 * pow(guess[i], 4) + 24 * pow(guess[i], 3) + 9 * pow(guess[i], 2) - 1;
			new_guess = guess[i] - f / fprime;
			calc_tolerance = abs((new_guess - guess[i]) / new_guess);
			guess[i] = new_guess;
			total_iterations = j + 1;//too account for j starting at 0
		}
		std::cout << "root at x = " << new_guess 
			<< " with error " << calc_tolerance 
			<< " after " << total_iterations 
			<< " iterations\n";
	}

	return 0;
}// end main