/*
  boolalpha : Alphanumerical bool values (function )
  noboolalpha : No alphanumerical bool values (function )
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void){

  system("clear");
  bool a=true;
  bool b=false;

  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;
  cout<<boolalpha;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;

  cout<<noboolalpha;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;

  return 0;
}
