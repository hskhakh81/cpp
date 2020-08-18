/*  File: greatest_prime_factor.cpp
    Purpose: to find greatest prime factor of number entered by user
    History:
    Date        User        Comments
    ----------  ----------- ---------------------------------------
    08/17/20    Harpreet    1) Copied from file greatest_prime_factor.cpp
                            2) Created function "int find_gpf(int num, int div, int gpf)"
                            3)
*/

#include <iostream>

using namespace std;

int find_gpf(int , int, int);

int main(){
    int num;
    int prime_flag = 1; //0=not prime, 1=prime
    int largest_prime_factor=0;
    //prompt user
    cout << "Enter a number to find greatest prime factor for: ";
    //read input input num variable
    cin >> num;

    int gpf = find_gpf(num,2,num);

    cout << " GPF for " << num << " is " << gpf << endl;
    getchar();    //wait for user to press a key
    return 0;
}

int find_gpf(int num, int div, int gpf) {

    if (gpf = 1) {
        //base case
        return div;
    } else {
        //calcualte new values (i.e. make problem smaller as per recursion)
        if (num % div == 0) {
            gpf = num / div;
            num = gpf;
        } else {
            div++;
        }
        //call self as per recursion (notice parameters values have changed with above calculations)
        find_gpf(num, div, gpf);

    }
}


