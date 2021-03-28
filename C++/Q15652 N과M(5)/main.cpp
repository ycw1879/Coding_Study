#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int arr[8];
int visit[8];
vector<int> vec;

void printSeq(const int& n, const int& m, const int cnt, const int start){
    if(cnt == m){
        for(int i=0; i<m; i++){
            cout << vec[arr[i]] << " ";
        }cout << "\n";
        return;
    }
    for(int i=start; i<n; i++){
        if(visit[i]) continue;
        arr[cnt] = i;
        visit[i] = 1;
        printSeq(n, m, cnt+1, 0);
        visit[i] = 0;
    }
}

void solve(){
    int n, m, k;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.begin()+n);
    printSeq(n, m, 0, 0);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
