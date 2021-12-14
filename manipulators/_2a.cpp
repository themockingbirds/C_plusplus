/*
cout.wdith()
setw()
setflill()
*/
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main(){
  int i=7;
  string str="Hello";
  system("clear");
  cout<<"i: "<<i<<endl;
  cout<<"str: "<<str<<endl;

  //setw()

  cout<<"setw(10)"<<endl;
  setw(10);
  cout<<str<<endl;
  setw(10);
  cout<<77<<endl;
  setw(10);
  cout<<77777<<endl;
  setw(10);
  cout<<7777777777<<endl;
  cout<<"==============="<<endl;
  cout<<"setw(10)<<right"<<endl;
  cout<<setw(10)<<right<<str<<endl;
  cout<<setw(10)<<right<<77<<endl;
  cout<<setw(10)<<right<<77777<<endl;
  cout<<setw(10)<<right<<7777777777<<endl;

  cout<<"==============="<<endl;
  cout<<"setw(10)<<right"<<endl;
  cout<<setw(10)<<left<<str;
  cout<<"Ujjawal"<<endl;
  cout<<setw(10)<<left<<77;
  cout<<"Ujjawal"<<endl;
  cout<<setw(10)<<left<<77777;
  cout<<"Ujjawal"<<endl;
  cout<<setw(10)<<left<<7777777777;
  cout<<"Ujjawal"<<endl;

  cout<<"------------------------"<<endl;
  cout<<setw(10)<<setfill('*')<<"helllo"<<endl;
  cout<<setw(10)<<setfill('*')<<right<<"helllo"<<endl;
  cout<<setw(10)<<setfill('*')<<left<<"helllo"<<endl;
}
