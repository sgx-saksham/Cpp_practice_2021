// here we will have switch statements
// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    int t;
    cout << "Enter how many times you want to use the calculator : ";
    cin >> t;
    while (t-- > 0)
    {
        cout << "\nEnter an operator (+, -, *, /): ";
        cin >> oper;
        cout << "\nEnter two numbers: " << endl;
        cin >> num1 >> num2;

        switch (oper)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
        }
    }
    return 0;
}