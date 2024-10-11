#include <iostream>

using namespace std;

int num1;

int main()
{
    cout << "Enter a Number:";
    cin >> num1;

    if (num1 % 2==0){
        cout << "is even";
    }
    else {
        cout << "is odd";
    }
    return 0;
}
