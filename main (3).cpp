#include <iostream>

using namespace std;

int num1, num2, num3, num4, num5, num6, num7, num8, num9;
int sum;

int main()
{
    cout << "Enter a Grade:";
    cin >> num1;
    cout << "Enter a Grade:";
    cin >> num2;
    cout << "Enter a Grade:";
    cin >> num3;
    cout << "Enter a Grade:";
    cin >> num4;
    cout << "Enter a Grade:";
    cin >> num5;
    cout << "Enter a Grade:";
    cin >> num6;
    cout << "Enter a Grade:";
    cin >> num7;
    cout << "Enter a Grade:";
    cin >> num8;

    num9 = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
    num9 = (num9 /8);

    if (num9 >=90){
        cout << num9 << ":Excellent";
    }
    else if (num9 >= 80){
        cout << num9 << ":Very Good";
    }
    else if (num9 >= 70){
    cout << num9 << ":Good";
    }
    else if (num9 >= 60){
        cout << num9 << ":Need Improvement";
    }
    else if (num9 <= 60){
        cout << num9 << ":Failing Grade";
    }    else{
            cout << "Invalid Grade";
        }

    return 0;
}
