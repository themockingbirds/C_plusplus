//INPUT

#include<iostream>
using namespace std;
int main(void){
  cout<<"Hello,"<<endl;
  cout<<"Welcome to C++ World"<<endl;

  int a, b;
  cout<<"Input 2 no: "<<endl;
  cout<<"a  : ";
  cin>>a;

  cout<<"b  : ";
  cin>>b;

  cout<<a<<"+"<<b<<"="<<a+b<<endl;
  cout<<a<<"-"<<b<<"="<<a-b<<endl;
  cout<<a<<"*"<<b<<"="<<a*b<<endl;
  cout<<a<<"\\"<<b<<"="<<endl<<"\trem: "<<a%b<<endl<<"\tQuo: "<<a/b;

  return 0;
}
