#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

struct student{
  int roll;
  string name;
  string add;
};

int main () {
  system("clear");
  struct student stu[3];
  for(int i=0;i<2;i++){
    cin.clear();
    cout<<"Enter Name : ";
    getline(cin, (stu[i].name));

    cout<<"Enter Address : ";
    getline(cin, (stu[i].add));

    cout<<"Enter Roll No : ";
    (cin>>stu[i].roll).get();

  }

  cout<<setw(15)<<setfill('-')<<"-"<<"Output";
  cout<<setw(15)<<setfill('-')<<"-"<<endl<<endl<<setfill(' ');
  cout<<setw(20)<<left<<"Full Name";
  cout<<setw(20)<<left<<"Address";
  cout<<left<<"Roll No"<<endl<<endl;
  for(int i=0;i<2;i++){
    cout <<setw(20)<<left<<stu[i].name;
    cout <<setw(20)<<left<<stu[i].add;
    cout <<setw(20)<<left<<stu[i].roll<<endl;
  }

  return 0;
}
