/*Justin Ngo
September 5, 2016
ME EN 5250: Programming for Engineers
Homework 1: Problem 1: celsius_fahrenheit.cpp

Info: Conversts Fahrenheit to Celius using int and double.
The first line of input is number of tests*/

#include <iostream>
#include <vector>

int main() {
	int number_test_cases = 0;
	std::cin >> number_test_cases;
	std::vector<int> temperature_F(number_test_cases);

	for (int i = 0; i < number_test_cases; i++) {
		std::cin >> temperature_F[i];
	}//end for

	for (int j = 0; j < number_test_cases; j++) {
		std::cout << "Case " << j << ":\n";
		int int_temp_c = (temperature_F[j] - 32)*5/9;
		double dbl_temp_c = (temperature_F[j] - 32)*5.0/9;
		std::cout << temperature_F[j] << "F = " << int_temp_c << "C\n";
		std::cout << temperature_F[j] << "F = " << dbl_temp_c << "C\n";
	}//end for

	return 0;
}//end main