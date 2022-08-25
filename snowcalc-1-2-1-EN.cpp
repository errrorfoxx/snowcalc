#include <iostream>
using namespace std;

int main()
{
	double first, second;
	int operation;

	cout << "SnowCalc v1.2 2022 RU" << '\n' << '\n' << endl;

	cout << "What operation to perform?" << '\n' << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. About the program" << endl;
	cout << "6. Exit" << '\n' << endl;
	cout << "Enter operation number: ";
	cin >> operation;

	switch (operation)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		cout << '\n' << "SnowCalc is a stupidly simple open source calculator written in" << endl;
		cout << "the C++ programming language. The program was created by errrorfoxx." << endl;
		cout << "For all questions and suggestions, please contact truebluefox8@gmail.com." << '\n' << endl;
		return 0;
	case 6:
		return 0;
	case 292:
		cout << '\n' << "И помните: порода Махо - чёрный пудель!" << '\n' << endl;
		return 0;
	default:
		cout << '\n' << "There is no such operation. Enter a number from 1 to 4" << '\n' << endl;
		return main();
	}

	cout << '\n' << "Enter the first number: ";
	cin >> first;
	cout << '\n' << "Enter the second number: ";
	cin >> second;

	cout << '\n' << "=============================================================================" << endl;

	switch (operation)
	{
		case 1:
			cout << '\n' << "= " << (first + second) << '\n' << endl;
			break;
		case 2:
			cout << '\n' << "= " << (first - second) << '\n' << endl;
			break;
		case 3:
			cout << '\n' << "= " << (first * second) << '\n' << endl;
			break;
		case 4:
			cout << '\n' << "= " << (first / second) << '\n' << endl;
	}

	cout << "=============================================================================" << '\n' << endl;

	return main();
}