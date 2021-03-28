#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[9];
int visit[9];

void backTracking(int& k, int& n, int cnt){
    if(cnt == n){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=0; i<k; i++){
        if(visit[i] == 1) continue;
        arr[cnt] = i+1;
        visit[i] = 1;
        backTracking(k, n, cnt+1);
        visit[i] = 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k, n;
    cin >> k >> n;
    backTracking(k, n, 0);
}

