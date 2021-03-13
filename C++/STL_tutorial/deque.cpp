#include <iostream>
#include <deque>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  deque<int> dq;

  dq.push_back(1);
  dq.push_front(1);

  dq.pop_front();
  dq.pop_back();

  return 0;
}