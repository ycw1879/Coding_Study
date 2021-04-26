#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int findIndex(const vector<string>& key, const string value){
    for(int i=0; i<key.size(); i++){
        if(key[i] == value) return i;
    }
}

string find(map<string, string>& djset, vector<int>& djsetCnt, vector<string>& key, const string& str1){
    if(djset[str1] == str1)
        return str1;
    string str2 = find(djset, djsetCnt, key, djset[str1]);
    djset[str1] = str2;
    return str2;
}

void unionFind(map<string, string>& djset, vector<int>& djsetCnt, vector<string>& key, const string& str1, const string& str2){
    string r1 = find(djset, djsetCnt, key, str1);
    string r2 = find(djset, djsetCnt, key, str2);
    if(r1 == r2) return;
    int r1Idx = findIndex(key, r1);
    int r2Idx = findIndex(key, r2);
    if(djsetCnt[r1Idx] < djsetCnt[r2Idx]){
        djset[r1] = r2;
        djsetCnt[r2Idx] += djsetCnt[r1Idx];
    }
    else{
        djset[r2] = r1;
        djsetCnt[r1Idx] += djsetCnt[r2Idx];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int testCases, t, i;
    cin >> testCases;
    while(testCases--){
        map<string, string> djset;
        vector<int> djsetCnt;
        vector<string> key;
        cin >> t;
        for(i=0; i<t; i++){
            string a, b;
            cin >> a >> b;
            if(!djset.count(a)){
                key.push_back(a);
                djsetCnt.push_back(1);
                djset[a] = a;
            }
            if(!djset.count(b)){
                key.push_back(b);
                djsetCnt.push_back(1);
                djset[b] = b;
            }
            unionFind(djset, djsetCnt, key, a, b);
            string answer = find(djset, djsetCnt, key, a);
            cout << djsetCnt[findIndex(key, answer)] << "\n";
        }
    }
    return 0;
}