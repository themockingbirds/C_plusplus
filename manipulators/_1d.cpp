/*

  showbase : Show numerical base prefixes (function )
  noshowbase : Do not show numerical base prefixes (function )

*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void){

  system("clear");
  int n = 652;

  cout<<"n: "<<n<<endl;

  cout<<"-------------------"<<endl;
  cout<<hex<<"hex -> n: "<<n<<endl;
  cout<<oct<<"oct -> n: "<<n<<endl;
  cout<<dec<<"dec -> n: "<<n<<endl;

  cout << showbase<<"showbase"<<endl;
  cout<<"-------------------"<<endl;
  cout<<hex<<"hex -> n: "<<n<<endl;
  cout<<oct<<"oct -> n: "<<n<<endl;
  cout<<dec<<"dec -> n: "<<n<<endl;

  cout<<noshowbase<<"noshowbase"<<endl;
  cout<<"-------------------"<<endl;
  cout<<hex<<"n: "<<n<<endl;
  cout<<oct<<"n: "<<n<<endl;
  cout<<dec<<"n: "<<n<<endl;

return 0;
}
