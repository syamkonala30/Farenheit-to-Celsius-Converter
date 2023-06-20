#include <iostream>
#include <iomanip>
using namespace std;

double celsius(int);

int main()
{
	cout << "\nTable of Fahrenheit temperatures 0 - 20\n"
		<< "and their Celsius equivalents.\n\n"
		<< "------------------------------\n"
		<< "  Fahrenheit       Celsius\n"
		<< "------------------------------\n";

	for (int F = 0; F <= 10000; F++)
	{
		cout << "      " << setw(2) << F;
		cout << "          "
			<< setw(3) << celsius(F) << endl;
	}
	cout << endl;
	return 0;
}

double celsius(int F)
{

	return (5.0 * (F - 32)) / 9;
}
