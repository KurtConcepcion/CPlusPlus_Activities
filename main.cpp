#include <iostream>

using namespace std;

float num1, num2, num3;
float sum;
int subtract;
int main()
{
    cout << "Enter the First Number:";
    cin >> num1;
    cout << "Enter the Second Number:";
    cin >> num2;

    sum = num1 + num2;
    cout << "sum is:" << sum << endl;

    cout << "Enter a Number to Subtract:";
    cin >> num3;

    subtract = num1 + num2 - num3;
    cout << "Subtract is:" << subtract;
    return 0;
}
