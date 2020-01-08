/*Justin Ngo
September 5, 2016
ME EN 5250: Programming for Engineers
Homework 1:Problem 0:testing_cases.cpp

Info: This program first takes in a number
(the first line input is number of tests) and creates an array 
of type string. It then prints out each string*/

#include <iostream>
#include <string>
#include <vector>

int main() {
	
	int number_of_test_cases = 0;
	std::cin >> number_of_test_cases;
	std::vector<std::string> cases(number_of_test_cases);
	
	//store the amount of inputs into the string variable cases.
	for (int j = 0; j < number_of_test_cases; j++) {
		std::cin >> cases[j];
	}//end for
	
	//send to terminal the case # and echos what was stored in variable cases.
	for (int i = 0; i < number_of_test_cases; i++) {
		std::cout << "Case " << i << ":\n";
		std::cout << "Echo: " << cases[i] << "\n";
	}//end for

	return 0;
}//end main