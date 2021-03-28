#include <iostream>

using namespace std;

int arr[9];
int visit[9];

void backTracking(const int& n, const int& m, const int cnt, const int start){
    if(cnt == m){
        for(int i=0; i<m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=start; i<n; i++){
        if(visit[i] == 1) continue;
        arr[cnt] = i+1;
        visit[i] = 1;
        backTracking(n, m, cnt+1, i);
        visit[i] = 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    int n, m;
    cin >> n >> m;
    backTracking(n, m, 0, 0);
    return 0;
}