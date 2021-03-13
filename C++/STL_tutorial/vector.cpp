#include <iostream>
#include <vector>
using namespace std;

struct strt{
  int a, b;

  bool operator<(const strt& st)const{
    if(a == st.a)
      return b < st.b;
    return a < st.a;
  }
};

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<pair<int, int>> vec(100, {0, 0});

  vec.push_back({1, 1});

  for(auto itr = vec.begin(); itr != vec.end(); itr++){
    (*itr).first;
    (*itr).second;
  }

  for(int i = 0; i < (int)vec.size(); ++i){
    vec[i].first;
    vec[i].second;
  }

  vec.front();
  vec.back();

  return 0;
}