/*
setprecision (val): It sets val as the new value for the precision of floating-point values.

setbase(val): It is used to set the numeric base value for numeric values.
*/

#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main(){

  system("clear");
  float fl=342.2352352;
  double dl=433.453453;

  cout<<"fl: "<<fl<<endl;
  cout<<"dl: "<<dl<<endl;

  cout<<"-------------"<<endl;
  cout<<setprecision(4)<<"fl: "<<fl<<endl;
  cout<<"dl: "<<dl<<endl;

  cout<<"-------------"<<endl;
  cout<<setbase(8)<<"setbase(8) 100: "<<100<<endl;
  cout<<setbase(16)<<"setbase(16) 100: "<<100<<endl;
  cout<<setbase(16)<<"setbase(16) 0100: "<<0100<<endl;
  cout<<setbase(10)<<"setbase(10) 100: "<<100<<endl;
  cout<<setbase(10)<<"setbase(10) 0144: "<<0144<<endl;
  cout<<setbase(10)<<"setbase(10) 0x64: "<<0x64<<endl;

  return 0;
}
