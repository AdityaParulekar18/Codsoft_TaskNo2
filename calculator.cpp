#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    double num1, num2, result;
    char op;

    
    cout << "Enter the first number: ";
    cin >> num1;

    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;


    
    switch (op) 
	{
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
            }
            else 
			{
                cout << "Division by zero is not allowed..." << endl;
                return 1; 
            }
            break;

        default:
            cout << "Invalid operator... Please enter a valid operator" << endl;
            return 1;  
    }

   
    cout << "Result: " << result << endl;

    return 0;  
}
