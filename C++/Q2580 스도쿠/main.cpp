#include <iostream>
#include <vector>

using namespace std;

class Point{
public:
    int x, y;
};

#define SIZE 9
vector<Point> vec;
vector<vector<int>> grid(SIZE, vector<int>(SIZE, 0));
bool flag = false;

bool checkRaw(int r, int cur){
    for(int i=0; i<SIZE; i++){
        if(i == cur) continue;
        if(grid[r][i] == grid[r][cur]) return false;
    }
    return true;
}

bool checkCol(int cur, int c){
    for(int i=0; i<SIZE; i++){
        if(i == cur) continue;
        if(grid[i][c] == grid[cur][c]) return false;
    }
    return true;
}

bool checkSquare(int r, int c){
    int rd = r / 3;int cd = c / 3;
    for(int i=3*rd; i<3*(rd+1); i++){
        for(int j=3*cd; j<3*(cd+1); j++){
            if(r==i && c==j) continue;
            if(grid[i][j] == grid[r][c]) return false;
        }
    }
    return true;

}

void detectSdoku(int idx){
    if(idx == vec.size()) {
        for(int r=0; r<SIZE; r++){
            for(int c=0; c<SIZE; c++) {
                cout << grid[r][c] << " ";
            }
            cout << "\n";
        }
        flag = true;
        return;
    }
    Point p = vec[idx];
    int r = p.x, c = p.y;
    for(int i=1; i<SIZE+1; i++){
        grid[r][c] = i;
        if(!checkRaw(r, c) or !checkCol(r, c) or !checkSquare(r, c)) continue;
        detectSdoku(idx+1);
        if(flag == true) return;
    }
    grid[r][c] = 0;
}

int main(){
    int temp;
    for(int r=0; r<SIZE; r++){
        for(int c=0; c<SIZE; c++){
            cin >> temp;
            if(temp == 0){
                vec.push_back({r, c});
                continue;
            }
            grid[r][c] = temp;
        }
    }
    detectSdoku(0);
    return 0;
}