/*
Fix  : -> #include <bits/stdc++.h> not found

The headers are located at : /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1

go  to this location create a dir with name "bits"
then copy any header file  to this dir and rename file with stdc++.h, then copy the content from given link and open stdc++.h file clear all previous content and paste the new one.

//not working...
*/

#include <bits/stdc++.h>
using namespace std;

int main(void){
  cout<<"Hell World";
  cout<<setw(10)<<"welcome";
  cout<<sqrt(5)<<endl;
  return 0;
}
