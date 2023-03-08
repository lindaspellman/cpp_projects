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
    cout << "Hello World!\n"; //this will output to the console
    cout << "My name is Linda."<<endl; // either this or \n will create a new line
    cout << "Today is Thursday.\n";
    cout << "Have a nice day"; 

    float annualSalary = 50000.99;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary;



    // need an empty space before system("pause>0");
    system("pause>0"); // gets rid of junk text which would appear without this line of code. Still, if you press a key, the junk code will appear. According to its instructions, you can press a key again to close the window

}


