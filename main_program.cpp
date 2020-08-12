#include <iostream>
#include <conio.h>
using namespace std;

//just function signature here to program knows that this function is implemented later in file
void smallest();
void number_pyramid();
void greatest_prime_factor();

int main() {

    int choice = 0;

    cout << "Select from below programs:" <<endl;
    cout <<"1 - Smallest" << endl;
    cout <<"2 - Number pyramid" << endl;
    cout <<"3 - Greatest prime factor" << endl;
    cout << "Enter number to run appropriate program: ";
    cin >> choice;

    if (choice == 0) {
        cout << "Appropriate number not selected to run a program, exiting.";
    } else if (choice == 1) {
        smallest();
    } else if (choice == 2) {
        number_pyramid();
    } else if (choice == 3) {
        greatest_prime_factor();
    }


    getch();    //wait for user input before closing output window
    return 0;
}

void smallest() {
    int x,y,z,smallest;
    cout << "Enter three numbers: ";
    cin>>x>>y>>z;
    smallest=x;
    if(y<smallest)      //indented 4 spaces from left, means its within main()
        smallest=y;     //indented 8 spaces from left, means its within if above it
    if(z<smallest)
        smallest=z;
    cout<<"the smallest number is: ";
    cout<<smallest;
}

void number_pyramid() {

    int maxNum = 9;
    int minNum = 0;
    int spaces = 0;
    int printNum = maxNum;

    for(int loopCounter=0; loopCounter <= maxNum; loopCounter++){

        for(int i=minNum; i<=printNum;i++){
            cout << " " << i;
        }
        //cout << endl << "spaces expected " << loopCounter << endl;
        for(int i=0;i<loopCounter+(loopCounter-1);i++){
                cout << " " << " ";
        }
        if(loopCounter==0){printNum--;}
        for(int i=printNum; i>=minNum;i--){
            cout<<" "<<i;
        }
        if(loopCounter==0){printNum++;}
        printNum--;
        cout << endl;
    }
}

void greatest_prime_factor() {
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
}
