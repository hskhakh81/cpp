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

    if (gpf == 1 || num == div) {
        //base case
        cout << "base case reached, num=" << num << ", div=" << div << ", gpf=" << gpf <<endl;
        return div;
    } else {
        //calcualte new values (i.e. make problem smaller as per recursion)
        if (num % div == 0) {
            gpf = num / div;
            num = gpf;
            div = 2;
        } else {
            div++;
        }
        cout << "Num=" << num << ", Div=" << div << ",GPF=" << gpf << endl;
        //call self as per recursion (notice parameters values have changed with above calculations)
        return find_gpf(num, div, gpf);

    }

}

/***
Example
NUM     DIV     GPF     NUM % DIV   NUM / DIV
----    ----    ----    ---------   ----------
120     2       120     0           60
60      2       60      0           30
30      2       30      0           15
15      2       30      1           -
15      3       15      0           5
5       2       5       1           -
5       3       5       2           -
5       4       5       1           -
5       5       5       0           1       <---- div resets to 2 here
1       2       1                           <--- this is why 2 is returned .. when GPF is 1, base case is reached

---changes to be made
5       5       5       0           1       <---- change base case to add num = div condition, so this becomes base case
1       2       1                           <---- this will never be reached if above is base case

-- also keep base case value for return



*/
