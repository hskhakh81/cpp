#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int i,j,b=2,c;
    cout << "\nEnter composite number: ";
    cin>>c;
    cout << "Factors:";
    for(i=1; i<c/2; i++){
        if(c%i==0){
            cout << i << "\t";
            for (j=1;j<i;j++){
                if(i%j>0){
                    b=i;
                }
                if(b%3==0){
                    b=3;
                }else if (b%2==0){
                    b=2;
                }else if (b%5==0){
                    b=5;
                }

            }
        }
    }

    cout << c << endl << "Largest prime factor: "<<b;

    getch();
    return 0;
}
