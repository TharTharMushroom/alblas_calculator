/**
* Name: Devin Flanders
* Program Name: C++ Calculator
* Date: 9/12/24
* Extra: program casts the numbers into ints for modulus
*/

#include <iostream>
using namespace std;
//initializing variables
//num1 and num2 are the numbers used in the equations
//fin is the variable that stores the output of the equations
float num1, num2, fin;
int main()
{
    //entering the numbers for the calculator
    cout << "Enter a number: \n";
    cin >> num1;
    cout << "Enter a number: \n";
    cin >> num2;
    //addition
    fin = ceil(100 * (num1 + num2)) / 100;
    cout << num1 << " + " << num2 << " = " << fin << endl;
    //subtraction
    fin = ceil(100 * (num1 - num2)) / 100;
    cout << num1 << " - " << num2 << " = " << fin << endl;
    //multiplication
    fin = ceil(100 * (num1 * num2)) / 100;
    cout << num1 << " * " << num2 << " = " << fin << endl;
    //division
    fin = ceil(100*(num1 / num2))/100;
    cout << num1 << " / " << num2 << " = " << fin << endl;
    //modulus
    //extra: program casts the numbers into ints for modulus
    fin = int(num1) % int(num2);
    cout << int(num1) << " % " << int(num2) << " = " << fin << endl;
    //increment
    ++num1;
    cout << "The first number incremented is " << num1 << endl;
    //decrement
    --num2;
    cout << "The second number decremented is " << num2 << endl;
}