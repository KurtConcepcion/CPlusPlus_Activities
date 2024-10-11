#include <iostream>

using namespace std;

int main(){
int num1, num2;
char operation;
int result;



    cout << "Enter First Number:";
    cin >> num1;
    cout << "Enter Second Number:";
    cin >> num2;

    cout << "Enter an Operator (+, -, *, /):";
    cin >> operation;


    switch (operation){
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        result = (num2 !=0);
        cout << "Error: Division by zero!" << endl;

        switch (operation){
    case '/':
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
}

    }
    return 0;
}
