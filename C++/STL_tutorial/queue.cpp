#include <iostream>
#include <queue>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  queue<int> q;

  q.push(1);
  int t = q.front();
  q.pop();

  q.empty();

  while(!q.empty()){
    int t = q.front();
    q.pop();
  }

  q.size(); // unsigned


  priority_queue<int> pq;

  pq.push(1);
  t = pq.top();
  pq.pop();


  pq.push(4);
  pq.push(1);
  pq.push(10);
  while(!pq.empty()){
    int t = pq.top();
    pq.pop();
    cout << t << endl;
  }

  priority_queue<int, vector<int>, greater<int>> pq2;

  pq2.push(4);
  pq2.push(1);
  pq2.push(10);
  while(!pq2.empty()){
    int t = pq2.top();
    pq2.pop();
    cout << t << endl;
  }

  return 0;
}