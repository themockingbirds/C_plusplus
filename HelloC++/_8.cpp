#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  string fullname,add,dob;
  cout<<"Enter Full Name : ";
  getline(cin,fullname);
  cout<<"Enter Address : ";
  getline(cin,add);
  cout<<"Enter DOB : ";
  getline(cin,dob);


  cout<<setw(10)<<setfill('-')<<"-";
  cout<<"Output";
  cout<<setw(10)<<"-"<<endl;
  cout<<setfill(' ');

  cout<<setw(15)<<left<<"Name"<<" : "<<fullname<<endl;
  cout<<setw(15)<<left<<"Address"<<" : "<<add<<endl;
  cout<<setw(15)<<left<<"DOB"<<" : "<<dob<<endl;

  return 0;
}
