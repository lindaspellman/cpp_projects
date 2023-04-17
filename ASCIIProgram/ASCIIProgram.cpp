// ASCIIProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; // makes std:: command obsolete 

int main()
{ 
    //cypherLength;
    //cout << "How many letters long is the word you want to cypher? ";
    //cin >> cypherLength; 

    // can enter more than one variable in a line.
    //cin >> c1 >> c2 >> c3 >> c4 >> c5; 
    //cout << "ASCII message:" << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);

    // User enters integer number
    // Return whether that number is even or odd 
    //cout << 2 % 2; // = 0... 5 % 2 = 1

    int number; 
    cout << "Please enter whole number: ";
    cin >> number; 
    if (number % 2 == 0)
    {
        cout << "You have entered an even number." << endl;
    }
    else
    {
        cout << "You have entered an odd number." << endl;
    }
    cout << "Thanks. Bye.";

    // User enters side lengths of a triable (a,b,c)
    // Program should write out whether that triangle is equilateral, isosceles, or scalene
    float a, b, c;
    cout << "\na, b, c: ";
    cin >> a >> b >> c; 

    if (a == b && b == c)
        cout << "Equilateral triangle"; 
    else
    {
        if (a != b && a != c && b != c)
            cout << "Scalene triangle" << endl; 
        else
            cout << "Isosceles triangle" << endl; 
    }

    // Operators
    // // Binary
    // +,-,*,/,%

    // use / for integer division. One or both of the operands being decimals will result in a decimal quotient. Else, no decimal.

    cout << "\n" << 5 % 2; // = 1 Why????

    // // Unary
    // ++, -- 
    int counter = 7;
    counter++; // incrementing
    cout << counter << endl;
    counter--; // decrementing
    cout << counter << endl; 

    int counter = 7;
    cout << counter2++ << endl; // post-increment // prints before it increments
    cout << ++counter2 << endl; // pre-increment
    // same concept works with decrementing

    system("cls"); // clears console

    system("pause>0");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
