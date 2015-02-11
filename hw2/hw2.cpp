/*****************************************************
**hw2.cpp
**Object Ratio
**Patrick Xie, (01/22/2010)
*****************************************************/

#include <iostream> //Iostream Library
#include <string> //String Library
#include <iomanip> //Iomanip Library
using namespace std;

int main() {
	
	int number_one;
	int number_two;
	double ratio_one_by_two;
	double ratio_two_by_one;
	string object_one;
	string object_two;

	cout << "How many in the first category? ";

	cin >> number_one >> object_one;
	
	cout << "How many in the second category? ";

	cin >> number_two >> object_two;

	cout << "\n";

	ratio_one_by_two = ( (double) number_one / number_two);
	ratio_two_by_one = ( (double) number_two / number_one);
	int nameLengthOne = object_one.length();
	int nameLengthTwo = object_two.length();
	string object_one_noS = object_one.substr(0, (nameLengthOne - 1));
	string object_two_noS = object_two.substr(0, (nameLengthTwo - 1));

	cout << fixed << setprecision(2);

	cout << setw(nameLengthOne + nameLengthTwo + 8) <<object_one;
	cout << setw(20) << number_one << "\n";

	cout << setw(nameLengthOne + nameLengthTwo + 8) << object_two;
	cout << setw(20) << number_two << "\n";

	cout << object_one_noS << "-to-" << object_two_noS << " ratio";
	cout << setw(20) << ratio_one_by_two << "\n";

	cout << object_two_noS << "-to-" << object_one_noS << " ratio";
	cout << setw(20) << ratio_two_by_one << "\n\n";

	return 0;
}