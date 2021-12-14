
/*
endl: It is defined in ostream. It is used to enter a new line and after
      entering a new line it flushes (i.e. it forces all the output written on the screen or in the file) the output stream.
*/
#include<iostream>
using namespace std;
int main(void){
  cout<<"Hello";
  cout<<"World";
  //endl:
  cout<<endl<<"Hello"<<endl;
  cout<<"World"<<endl;

  //ws:
  //cout<<endl<<"Hello World"<<ws;

  //use of flush...
  cout << endl <<"FLUSHING" <<flush;

  // Use of ends Manipulator
      cout << endl <<"a";

      // NULL character will be added in the Output
      cout << "b" << ends;
      cout << "c" << endl;
  return 0;
}
