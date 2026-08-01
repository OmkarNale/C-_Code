#include <iostream>

using namespace std;
int main()
{
    printf("MY code of cpp 20 !");

    auto result = (10 <=> 20) > 0; // Using the spaceship operator from C++20

    cout << "result is " << result << endl;
    
    return 0;
}