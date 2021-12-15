#include  <iostream>
#include<iomanip>
using namespace std;

int main () {
  const  int MAX_NAME_LEN =60,MAX_ADDRESS_LEN=20,MAX_ABOUT_LEN=30;
  char y_name[MAX_NAME_LEN], y_address[MAX_ADDRESS_LEN], about_y[MAX_ABOUT_LEN];

  cout << "Enter your name: ";
  cin.getline (y_name, MAX_NAME_LEN);

  cout << "Enter your City: ";
  cin.getline (y_address, MAX_ADDRESS_LEN);

  cout << "Enter your profession:";
  cin.getline (about_y, MAX_ABOUT_LEN);    //$ is a delimiter

  cout<<setw(10)<<setfill('-')<<"-"<<"Output"<<setw(10)<<"-"<<endl;
  cout<<setfill(' ');

  cout << "Name: " << y_name << endl;
  cout << "Address: " << y_address << endl;
  cout << "Profession is: " << about_y << endl;

  cout<<setw(30)<<setfill('-')<<"-"<<endl;
  cout<<setfill(' ');

  return 0;
}
