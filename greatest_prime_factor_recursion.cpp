/*  File: greatest_prime_factor.cpp
    Purpose: to find greatest prime factor of number entered by user
    History:
    Date        User        Comments
    ----------  ----------- ---------------------------------------
    08/17/20    Harpreet    1) Copied from file greatest_prime_factor.cpp
                            2) Created function "int find_gpf(int num, int gpf)"
                            3)
*/

#include <iostream>
#include <conio.h>
using namespace std;

int find_gpf(int , int);

int main(){
    int num;
    int prime_flag = 1; //0=not prime, 1=prime
    int largest_prime_factor=0;
    //prompt user
    cout << "Enter a number to find greatest prime factor for: ";
    //read input input num variable
    cin >> num;

    //check if number if prime
    for (int i=1; i <= num; i++) {  //outer loop
        //check if number is divisible by i
        if (num % i == 0) {
            cout << i <<" x "<<num/i<<", ";

            for (int j=2; j<=i/2;j++) {     //inner loop
                //cout << ", check if " << i << " is prime ... ";
                if (i % j == 0) {
                    cout << " but " << i << " is not prime";
                    cout << ", Greatest Prime factor still is " << largest_prime_factor;
                    prime_flag = 0;
                }
            }
            if (prime_flag) {
                cout << " and " << i <<" is prime ";
                if (largest_prime_factor < i) {
                    cout << ", Greatest Prime factor now is " << i;
                    largest_prime_factor = i;
                } else {
                    cout << ", Greatest Prime factor still is " << largest_prime_factor;
                }
            } //end prime flag condition
            cout << "\n";
        }   //end modulus condition

        //reset prime_flag
        prime_flag = 1;
    } //end for loop

    if (largest_prime_factor > 0) {
        cout << "Greatest prime factor of " << num << " is " << largest_prime_factor << "\n";
    }

    getch();    //wait for user to press a key
    return 0;
}

int find_gpf(int num, int gpf) {

    if (gpf <= num) {
        //recursion
        find_gpf(num,gpf+1);
    } else {
        //base case

    }
}


