#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your name and age separated by space : " << endl;
    getline(cin, name);
    cin >> age; 

    cout << "Hello " << name << " your age is " << age << " Welcome in Team !" << endl;
}