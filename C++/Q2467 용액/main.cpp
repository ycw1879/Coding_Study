#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int k, i, start, end, absDis = 2000000000, answerS, answerE;
    vector<int> vec;
    cin >> k;
    for(i=0; i<k; i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    start = 0;
    end = k-1;
    while(true){
        if(start == end) break;
        int temp = vec[end] + vec[start];
        if(temp == 0){
            answerS = start;
            answerE = end;
            break;
        }
        if(abs(temp) < absDis){
            answerS = start;
            answerE = end;
            absDis = abs(temp);
        }
        if(temp < 0) start++;
        else end--;
    }
    cout << vec[answerS] << " " << vec[answerE];
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}