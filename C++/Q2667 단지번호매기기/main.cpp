#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class point{
public:
    int x, y;
};

int dfs(int k, int cnt, vector<vector<int>>& arr, vector<vector<int>>& visit, int r, int c){
    if(r<0 || c<0 || r>=k || c>=k || visit[r][c] > 0 || arr[r][c] == 0) return 0;
    visit[r][c] = 1;
    return 1 + dfs(k, cnt, arr, visit, r+1, c) + dfs(k, cnt, arr, visit, r-1, c) + dfs(k, cnt, arr, visit, r, c+1) + dfs(k, cnt, arr, visit, r, c-1);

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    vector<vector<int>> arr(k, vector<int>(k, 0));
    string strTemp;
    vector<point> p;
    for(int r=0; r<k; r++){
        cin >> strTemp;
        for(int c=0; c<k; c++){
            arr[r][c] = strTemp[c] - '0';
            if (arr[r][c] == 1){
                p.push_back({r, c});
            }
        }
    }
    vector<vector<int>> visit(k, vector<int>(k, 0));
    int cnt = 0;
    vector<int> result;
    while(p.size()){
        point pTemp = p.back();
        p.pop_back();
        int r = pTemp.x;
        int c = pTemp.y;
        if(visit[r][c] != 0) continue;
        cnt += 1;
        result.push_back(dfs(k, cnt, arr, visit, r, c));
    }
    cout << cnt << "\n";
    sort(result.begin(), result.end());
    for(int i=0; i<result.size(); i++){
        cout << result[i] << "\n";
    }
    return 0;
}