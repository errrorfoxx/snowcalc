#include <iostream>
using namespace std;

int main()
{
	double first, second;
	int operation;

	cout << '\n' << "SnowCalc v1.2.1 2022 RU" << '\n' << endl;

	cout << "===================================" << '\n' << endl;

	cout << "Какую операцию нужно выполнить?" << '\n' << endl;
	cout << "1. Сложение" << endl;
	cout << "2. Вычитание" << endl;
	cout << "3. Умножение" << endl;
	cout << "4. Деление" << endl;
	cout << "5. О программе" << endl;
	cout << "6. Выход" << '\n' << endl;
	cout << "Введите номер оперции: ";
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
		cout << '\n' << "SnowCalc - до тупости простой калькулятор с открытым исходным кодом написаный" << endl;
		cout << "на языке программирования C++. Программу создал errrorfoxx. По всем вопросам" << endl;
		cout << "и предложениям обращаться на почту truebluefox8@gmail.com." << '\n' << endl;
		return 0;
	case 6:
		return 0;
	case 292:
		cout << '\n' << "И помните: порода Махо - чёрный пудель!" << '\n' << endl;
		return 0;
	default:
		cout << '\n' << "Нет подобной операции. Ввеите номер от 1 до 4" << '\n' << endl;
		return main();
	}

	cout << '\n' << "Введите первое число: ";
	cin >> first;
	cout << '\n' << "Введите второе число: ";
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