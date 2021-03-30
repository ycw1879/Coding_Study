#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printResult(const int& cnt, const vector<int>& seq, const vector<int>& idx){
    for(int i=0; i<cnt; i++){
        cout << seq[idx[i]] << " ";
    }
    cout << "\n";
}

void makeidx(const int& k, const int& cnt, vector<int>& seq, vector<int>& idx, vector<bool>& visit, const int num, int start){
    if(cnt == num){
        printResult(cnt, seq, idx);

        return;
    }
    for(int i=start; i<k; i++){
        if(visit[i]) continue;
        idx.push_back(i);
        visit[i] = 1;
        makeidx(k, cnt, seq, idx, visit, num+1, i+1);
        idx.pop_back();
        visit[i] = 0;
    }
}

void input(int& k, int& cnt, vector<int>& seq){
    cin >> k >> cnt;
    for(int i=0; i<k; i++){
        int tp;
        cin >> tp;
        seq.push_back(tp);
    }
}

void solve(){
    int k, cnt;
    vector<int> seq, idx;
    input(k, cnt, seq);
    vector<bool> visit(cnt, false);
    sort(seq.begin(), seq.end());
    makeidx(k, cnt, seq, idx, visit, 0, 0);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();

    return 0;
}