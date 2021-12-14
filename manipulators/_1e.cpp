/*
showpoint : Show decimal point (function )
noshowpoint : Do not show decimal point (function )
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("clear");
    float fl1=432.23;
    double fl2=354;
    cout<<"fl1 :"<<fl1<<endl;
    cout<<"fl2 :"<<fl2<<endl;

    cout<<showpoint<<"showpoint"<<endl;
    cout<<"fl1: "<<fl1<<endl;
    cout<<"fl2: "<<fl2<<endl;
    cout<<noshowpoint<<"noshowpoint"<<endl;
    cout<<"fl: "<<fl1<<endl;
    cout<<"fl2: "<<fl2<<endl;

    return 0;
}
