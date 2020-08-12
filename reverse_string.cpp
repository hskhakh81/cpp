#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){

    string s;
    char c[20];
    char a;
    char b;
    char d;
    int counter=0;
    cout<<"Enter your first name: ";
    cin>>s;

    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }

    cout<<"Enter your last name: ";
    cin>>c;
    while((a=c[counter])!='\0'){
        if(counter == 0){
            b=a;
        }
        cout << c[counter++] <<endl;
        d=a;
    }
    cout <<"First character: "<<b <<endl;
    cout <<"Last character: "<<d <<endl;

    return 0;
}


