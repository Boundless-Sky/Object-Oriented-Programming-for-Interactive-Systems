/*Justin Ngo
ME EN 5250: Programming for Engineers
Homework 2: Problem 2 - worth every penny

Info: n = 1 - 30000000
	  start at 0.25 and add 10 $ each. 
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdint>

int main() {
	int case_quantity;
	std::cin >> case_quantity;
    std::vector<int> inputs(case_quantity);

	//save inputs
	for (int i = 0; i < case_quantity; i++) {
		std::cin >> inputs[i];
	}//end input saving

	for (int i = 0; i < case_quantity; i++) {
		//Bill's calculations using doubleb
		double bill = 0;
		//Correct calculations
		long long correct = 0;
		long long correct_change = 0;
		std::cout << "Case " << i << ":\n";
		for (long long sold = 0; sold < inputs[i]; sold++) {
			bill = 10*sold + 0.25 + bill;
			correct = 10*sold + correct;
			correct_change = 25*sold + 25
;
		}
		/*floating-point numbers loses precision even though 
		they can represent that number. Thus if you want to do math
		do it in interger then cast it back*/
		double correct_final = static_cast<double>(correct) + (static_cast<double>(correct_change) / 100);
		std::cout << inputs[i] << " rings were sold\n";
		std::cout << std::fixed << std::setprecision(2) << "Bill's program outputs " << bill << "\n";
		std::cout << std::fixed << std::setprecision(2) << "The exact profit is    " << correct_final << "\n";
	}
	return 0;
}//end main