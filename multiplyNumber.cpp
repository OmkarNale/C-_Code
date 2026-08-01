#include <iostream>

using namespace std;

int MultiPlytwoNumber(int firstNum, int secondNum)
{
	int multiplay = firstNum * secondNum;

	return multiplay;
}

int main()
{
	int first_Number = 20;
	int second_Number = 3;

	cout << "First Number is :" << first_Number << endl;
	cout << "Second Number is :" << second_Number << endl;

	int Multiplication = MultiPlytwoNumber(first_Number, second_Number);

	cout << "Multiplication of "<< first_Number << " and " << second_Number << " is  : " << Multiplication;

	return 0;
 }