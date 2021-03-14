#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    string strTp;
    int intTp;
    queue<int> q;
    for(int i=0; i < k; i++){
        cin >> strTp;
        if (strTp == "push"){
            cin >> intTp;
            q.push(intTp);
        }
        else if(strTp == "front"){
            if(q.empty()){
                cout << "-1\n";
            }
            else{
                cout << q.front() << "\n";
            }
        }
        else if(strTp == "back"){
            if(q.empty()){
                cout << "-1\n";
            }
            else{
                cout << q.back() << "\n";
            }
        }
        else if(strTp == "size"){
            cout << q.size() << "\n";
        }
        else if(strTp == "empty"){
            cout << q.empty() << "\n";
        }
        else if(strTp == "pop"){
            if(!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}
