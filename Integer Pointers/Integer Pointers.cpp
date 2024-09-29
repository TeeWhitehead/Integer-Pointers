#include <iostream>
using namespace std;

int main()
{
    // Number variables
    int num1;
    int num2;
    int num3;

    // Prompt user for first number
    cout << "Enter first number: ";
    cin >> num1;
    // Create pointer for first number
    int* pNum1 = &num1;

    // Prompt user for second number
    cout << "Enter second number: ";
    cin >> num2;
    // Create pointer for second number
    int* pNum2 = &num2;

    // Prompt user for third number
    cout << "Enter third number: ";
    cin >> num3;
    // Create pointer for second number
    int* pNum3 = &num3;

    // Display Results using pointers
    cout << "You enter the numbers: " << *pNum1 << " " << *pNum2 << " " << *pNum3 << "\n" << endl;
    cout << "Memory Addresses:" << endl;
    cout << "Num 1: " << &num1 << endl;
    cout << "Num 2: " << &num2 << endl;
    cout << "Num 3: " << &num3 << endl;
    
    return 0;
}
