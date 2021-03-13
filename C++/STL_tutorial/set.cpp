#include <iostream>
#include <set>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  set<int> s;

  s.insert(1);
  auto itr = s.find(1);
  if(itr != s.end()){
    int value = (*itr);
  }
  s.erase(1);
  if(s.find(1) != s.end())
    s.erase(s.find(1));

  itr = s.lower_bound(1);
  itr = s.upper_bound(1);

  for(auto itr = s.rbegin(); itr != s.rend(); ++itr){
    cout << (*itr) << endl;
  }

  multiset<int> ss;
  for(auto itr = ss.begin(); itr != ss.end(); ++itr){
    cout << (*itr) << endl;
  }
  if(ss.find(1) != ss.end())
    ss.erase(ss.find(1));


  return 0;
}