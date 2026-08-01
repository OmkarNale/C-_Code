#include <iostream>

using namespace std;

int sumoftwoNumber( int firstNumber, int secondNumber)
{

    int sum = firstNumber + secondNumber;
    return sum;
}
int main()
{
    cout<< "Example of sum of two numbers !" << endl;

    int firstNumber = 10;
    int secondNumber = 200;

    
    cout << "First number is :" << firstNumber << endl;
    cout << "Second number is :" << secondNumber << endl;
    
    int sum;

    sum = sumoftwoNumber(firstNumber, secondNumber);

    cout << "Sum of two numbers is " << sum << endl;

    cout << "sum of 100 and 29 number is : " << sumoftwoNumber(100, 29) << endl;
    return 0;
}

