/*
uppercase : Generate upper-case letters (function )
nouppercase : Do not generate upper case letters (function )
*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("clear");
    char str[]="Hello World";
    cout<<"str :"<<str<<endl;
    cout<<uppercase<<"uppercase"<<endl;
    cout<<"str :"<<str<<endl;

    cout<<nouppercase<<"nouppercase"<<endl;
    cout<<"str :"<<str<<endl;

    return 0;
}
