#include <iostream>
#include <map>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  map<int, int> m;
  m.insert({1, 1});
  m[1] = 1;

  for(auto itr = m.begin(); itr != m.end(); ++itr){
    cout << (*itr).first << endl;
    cout << (*itr).second << endl;
  }

  if(m.find(2) != m.end()){
    int t = m[2];
  }

  if(m.find(10) != m.end())
    m.erase(m.find(10));

  multimap<int, int> mm;


  return 0;
}