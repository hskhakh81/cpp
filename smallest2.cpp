/**
    File: smallest.cpp
    Author:
    Date:
    Purpose: To print smallest value from three user given values


Change history-------------------------------------------

Date        User            Comments
--------    --------------  ------------------------------
07/13/20    Harpreet        Initial creation
07/27/20    Harpreet        1) Added code to pickup first value before the loop and assign it to smallest
                            2) change do loop to while loop, so cin is checked before going into the loop
*/

//imports
#include<iostream>
#include<conio.h>
using namespace std;

//main function
int main() {

    //define variables
    int input, smallest;
    const char newline = '\n';

    //prompt user to enter list of values
    cout << "Enter list of numbers separated by space: ";

    //get first input value and assign to smallest variable
    if (cin.peek() == newline) {
        cout << "No input !\n";
    } else {
        cin>>input;
        smallest = input;
        cout << "input: " << input << ", smallest: "<<smallest<<"\n";
    }

    //get rest of the input values and compare with smallest
    while(cin.peek() != newline) {
        //get new value from user input
        cin>>input;
        //compare values, store smallest in a variable
        if (input < smallest) { smallest = input; }
        cout << "input: " << input << ", smallest: "<<smallest<<"\n";

    }

    //print output with smallest value
    cout<<"Smallest number is: "<< smallest << "\n";

    //wait for user input so user can read program output
    getch();

    //return
    return 0;
}
