#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

struct student{
  int roll;
  char name[30];
  char add[30];
};

int main () {
  system("clear");
  int size=30;
  struct student stu[3];
  for(int i=0;i<2;i++){
    cin.clear();
    cout<<"Enter Name : ";
    cin.getline((stu[i].name),size);

    cout<<"Enter Address : ";
    cin.getline((stu[i].add),size);

    cout<<"Enter Roll No : ";
    cin>>stu[i].roll;
    cin.ignore();

  }

  cout<<setw(15)<<setfill('-')<<"-"<<"Output";
  cout<<setw(15)<<setfill('-')<<"-"<<endl<<setfill(' ');
  cout<<setw(20)<<left<<"Full Name";
  cout<<setw(20)<<left<<"Address";
  cout<<left<<"Roll No"<<endl<<endl;
  cout<<setw(45)<<setfill('-')<<"-"<<setfill(' ')<<endl;
  for(int i=0;i<2;i++){
    cout <<setw(20)<<left<<stu[i].name;
    cout <<setw(20)<<left<<stu[i].add;
    cout <<setw(20)<<left<<stu[i].roll<<endl;
  }
  cout<<setw(45)<<setfill('-')<<"-"<<setfill(' ')<<endl;
  return 0;
}
