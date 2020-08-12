#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int max_num=9,min_num=5,print_num=9,c=0,e=0;


    for (int loop_counter=0;loop_counter<min_num;loop_counter++){


        //cout << "max num = " << max_num << ", loop counter = " << loop_counter <<endl;
        //print leading spaces
        for(int i=0;i<loop_counter;i++) {
            cout << " ";
        }
        //print max to min
        for(int i=max_num;i>=min_num;i--){
            cout << i;
        }

        //print min+1 to max
        for(int i=min_num+1;i<=max_num;i++){
            cout << i;
        }
        cout << endl;
        max_num = max_num - 1;
    }
    return 0;
}

