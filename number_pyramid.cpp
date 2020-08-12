#include <iostream>
#include <conio.h>
using namespace std;

int main() {

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
