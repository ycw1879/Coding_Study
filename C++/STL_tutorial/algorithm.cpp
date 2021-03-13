#include <iostream>
#include <vector>
using namespace std;


bool cmp(int a, int b){
  return a < b;
}
int arr[100];
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> vec;

  
  min(1, 2);
  max(1, 2);

  sort(vec.begin(), vec.end());
  sort(vec.begin(), vec.end(), less<int>());
  sort(vec.begin(), vec.end(), cmp);

  sort(arr, arr + 10);

  lower_bound(vec.begin(), vec.end(), 10);
  upper_bound(vec.begin(), vec.end(), 10);
  lower_bound(arr, arr + 100, 10);

  return 0;
}