/** Program to print following pattern
987656789
 8765678
  76567
   656
    5

loop    min max spaces  cout
0       5   9   0       987656789
1       5   8   1        8765678
2       5   7   2         76567
3       5   6   3          656
4       5   5   4           5
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int max_num=9,min_num=5;
    int print_num=0;
    int spaces=0;
    int loop_counter=0;


    while(loop_counter<min_num) {
        //print spaces
        while(spaces++ <= loop_counter) {cout << " ";}
        //print max to min
        print_num=max_num;
        while(print_num >= min_num){cout<<print_num--;}
        //print min+1 to max
        print_num=min_num+1;
        while(print_num <= max_num){cout<<print_num++;}
        cout << endl;

        max_num--;      //decrement max_num
        loop_counter++; //increment loop counter
        spaces = 0;     //reset number of spaces needed
    }

    return 0;
}

int printNumbers(int minVal,int maxVal,int curVal){
    if(curVal == minVal){
        for(int i=0;i<minVal-1;i++){
            cout<<" ";
        }
        cout<<minVal;
    } else {
        while(curVal-- > 0){cout < " ";}
        int i=maxVal;
        while(i > minVal){cout << i--;}

    }

}


