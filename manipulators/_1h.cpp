/*
fixed : Use fixed floating-point notation (function )
scientific : Use scientific floating-point notation (function )
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("clear");
    float fl1=432.23;
    float fl2=354;
    cout<<"fl1 :"<<fl1<<endl;
    cout<<"fl2 :"<<fl2<<endl;

    cout<<fixed<<"fixed"<<endl;
    cout<<"fl1: "<<fl1<<endl;
    cout<<"fl2: "<<fl2<<endl;
    cout<<scientific<<"scientific"<<endl;
    cout<<"fl: "<<fl1<<endl;
    cout<<"fl2: "<<fl2<<endl;

    return 0;
}
