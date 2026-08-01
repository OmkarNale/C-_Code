#include <iostream>

using namespace std;

int main()
{
    cout << " This is the cout statement" << endl;

    int x;
    cout << "Enter the number: ";
    cin >> x;

    cout << "You entered: " << x << endl;

    cerr << "This is the cerr statement" << endl;

    clog << "This is the clog statement" << endl;
    
    return 0;
}