#include <iostream>

using namespace std;

int main()
{

    double firstNumber, secondNumber;
    char operation;

    // firstNumber
    cout << "Enter the first number: ";
    cin >> firstNumber;

    // secondNumber
    cout << "Enter the second number: ";
    cin >> secondNumber;

    // operation
    cout << "Enter the operation you want to perform: ";
    cin >> operation;

    if (operation == '+')
    {
        cout << "The addition of the given two numbers is " << firstNumber + secondNumber << endl;
    }
    else if(operation == '-')
    {
        cout << "The subtraction of the given two numbers is " << firstNumber - secondNumber << endl;
    }
    else if(operation == '*')
    {
        cout << "The Multiplication of the given two numbers is " << firstNumber * secondNumber << endl;
    }
    else if(operation == '/')
    {
        if (secondNumber == '0')
        {
            cout << "The Division of the two numbers is " << firstNumber / secondNumber << endl;
        }
        else
        {
            cout << "Cannot divide by zero" << endl;
            return 1;
        }
    }
    else
    {
        cout << "Invalid Operation" << endl;
        return 1;
    }
    return 0;
}

