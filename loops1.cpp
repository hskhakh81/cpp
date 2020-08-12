#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int max_num=9,min_num=5,print_num=9,c=0,e=0;


    while(c <= (max_num-min_num)) {
        //prints 98765
        while(print_num >= min_num){
            cout << print_num--;
        }

        print_num++;
        cout << endl << print_num <<endl;
        //print 6789
        while(print_num++ < (max_num-c)){
            cout << print_num;
        }
        print_num--;

        cout << endl; //control goes to next line

        c++;
        print_num=print_num-c;
        e=c;
        while(e-- > 0){
            cout << " ";
        }
    }

    return 0;
}


/**

987656789
 8765678
  76567
   656
    5

loop1   d   max   cout    new     max
1       9   5   9       8
2       8   5   8       7
3       7
4       6
5       5

loop2   d   d++ count   max   d++ <= max
1       5   6   6       9   1 (1-true, 0-fmaxlse)
2       6   7   7       9   1
3       7   8   8       9   1
4       8   9   9       9   1
5           10




*/
