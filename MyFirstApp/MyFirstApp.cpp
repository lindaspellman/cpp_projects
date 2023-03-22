// MyFirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
using namespace std; // makes std:: command obsolete 

int main()
{
    // be meaningful with variable names
    // can't use operator/special symbols or blank spaces in variable names or use numerals at beginning of variable names
    // can use underscores
    // use camelCase
    // 
    // strings take double quotations
    cout << "Hello World!\n"; //this will output to the console
    cout << "My name is Linda." << endl; // either this or \n will create a new line
    cout << "Today is Thursday.\n";
    cout << "Have a nice day\n";

    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In ten years, you will earn: " << annualSalary * 10;

    // char must use single quotations
    char character = 'a';

    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    // float takes 4 bytes of memory
    float averageGrade = 4.5;
    // double takes 8 bytes of memory
    double balance = 3894723984;

    //cout << "Size of int is " << sizeof(int) << " bytes\n";
    // -1, -2, -3,..., -2147483648
    //cout << "Int min value is " << INT_MIN << endl;
    // 0, +1, +2, +3,..., +2147483647 
    //cout << "Int max value is " << INT_MAX << endl;
    // 4 bytes
    //cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    // 4294967295
    //cout << "UINT max value is " << UINT_MAX << endl;
    //cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    //cout << "Size of char is " << sizeof(char) << " bytes\n";
    //cout << "Size of float is " << sizeof(float) << " bytes\n";
    //cout << "Size of double is " << sizeof(double) << " bytes\n";

    // datatype overflow
    //int intMax = INT_MAX;
    //cout << intMAX << endl;
    // outputs the minimum negative value b/c datatype overflow works like a clock
    //cout << intMax + 1;

    // ASCII notes and casting
    cout << (int)'a' << endl; // casting operator - turns the letter into its ASCII number equivalent
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(65) << endl;

    //char c1; char c2; char c3; 
    // easier way to create multiple variables of the same type
    char c1, c2, c3, c4, c5;


    // need an empty space before system("pause>0");
    system("pause>0"); // gets rid of junk text which would appear without this line of code. Still, if you press a key, the junk code will appear. According to its instructions, you can press a key again to close the window

}


