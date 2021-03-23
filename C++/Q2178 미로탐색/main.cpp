#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <string>
#include <memory.h>

using namespace std;

int arr[101][101];
int visit[101][101];
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

class point{
public:
    int x, y;
};

void bfs(int raw, int col){
    queue<point> q;
    q.push({0, 0});
    visit[0][0] = 1;
    while(q.size()){
        point pTemp = q.front();
        q.pop();
        int r = pTemp.x;
        int c = pTemp.y;
        if(r == raw-1 && c == col-1) return;
        for (int i=0; i<4; i++){
            int nr = r + dir[i][0];
            int nc = c + dir[i][1];
            if(nr < 0 || nc < 0 || nr >= raw || nc >= col || visit[nr][nc] > 0 || arr[nr][nc] != 1) continue;
            q.push({nr, nc});
            visit[nr][nc] = visit[r][c] + 1;
        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    static int raw, col;
    cin >> raw >> col;
    for(int r=0; r < raw; r++){
        string strTemp;
        cin >> strTemp;
        for (int c=0; c < col; c++){
            arr[r][c] = strTemp[c] - '0';
        }
    }
    bfs(raw, col);
    cout << visit[raw-1][col-1] << "\n";
    return 0;
}
