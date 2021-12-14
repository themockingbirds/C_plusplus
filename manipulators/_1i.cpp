/*
internal : Adjust field by inserting characters at an internal
            position(function )
left : Adjust output to the left (function )
right : Adjust output to the right (function )
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    system("clear");
    int i=-7;
    string str="Hello";
    cout<<str<<endl;
    cout<<i<<endl;

    cout<<"cout.width(10)"<<endl;
    cout.width(10);
    cout<<str<<endl;
    cout.width(10);
    cout<<77<<endl;
    cout.width(10);
    cout<<77777<<endl;
    cout.width(10);
    cout<<7777777777<<endl;

    cout<<"cout.width(9) internal"<<endl;
    cout.width(9);
    
    cout<<internal<<7<<endl;
    cout.width(9);
    cout<<internal<<i<<endl;
    cout.width(9);
    cout<<internal<<str<<endl;

    int n = -77;
    cout.width(6);
    cout << internal << n << '\n';
    cout.width(6);
    cout << left << n;
    cout << left << n << '\n';
    cout.width(6);
    cout << right << n << '\n';
    return 0;
}
