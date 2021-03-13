#include <iostream>
#include <stack>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  stack<int> stk;

  stk.push(1);
  int t = stk.top();
  stk.pop();

  while(!stk.empty()){
    stk.pop();
  }

  return 0;
}