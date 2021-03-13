#include <iostream>
#include <string>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  string str = "hello, world!";
  string str2 = "tmp";

  str += str2;

  str += '1';

  cout << str << endl;

  str = "Z";

  cout << str[0] - 'A' << endl;

  str.find("o");

  return 0;
}