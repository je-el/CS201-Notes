/**
 * Sample program for demonstrating for an vector
 *
 * @authro Jewel Maldonado
 * @date Sep 21 2022
 * @file for_vector
 * @brief demostrate use of for and vector
 */

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	
	string prompt {"Please enter a number: "};
	int user_input;
	
	vector<int> numbers;


	for ( int i = 0; i < 5; i++ ){
	//for loop that iterates 5 times and grabs user input that goes into a vector
		cout << prompt;
		cin >> user_input;

		numbers.push_back(user_input);

	}

	//for (INIT : daat_structure)
	for (int n : numbers){
		cout << n << endl;
	}


	return 0;
}
