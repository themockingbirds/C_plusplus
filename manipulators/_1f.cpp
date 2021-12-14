/*
showpos : Show positive signs (function )
noshowpos : Do not show positive signs (function )
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("clear");
    float fl1=432.23;
    int fl2=354;
    cout<<"fl1 :"<<fl1<<endl;
    cout<<"fl2 :"<<fl2<<endl;

    cout<<showpos<<"showpoint"<<endl;
    cout<<"fl1: "<<fl1<<endl;
    cout<<"fl2: "<<fl2<<endl;
    cout<<noshowpos<<"noshowpoint"<<endl;
    cout<<"fl: "<<fl1<<endl;
    cout<<"fl2: "<<fl2<<endl;

    return 0;
}
