#include <iostream>
#include <stack>
#include <set>
#include <string>
#include <vector>
#include <deque>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    string strTp;
    int intTp;
    deque<int> dq;
    for(int i=0; i < k; i++){
        cin >> strTp;
        if (strTp == "push_back"){
            cin >> intTp;
            dq.push_back(intTp);
        }
        else if(strTp == "push_front"){
            cin >> intTp;
            dq.push_front(intTp);
        }
        else if(strTp == "size"){
            cout << dq.size() << "\n";
        }else if(strTp == "front"){
            if(!dq.empty()) {
                cout << dq.front() << "\n";
            }
            else{
                cout << "-1\n";
            }
        }else if(strTp == "back"){
            if(!dq.empty()) {
                cout << dq.back() << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
        else if(strTp == "empty"){
            cout << dq.empty() << "\n";
        }
        else if(strTp == "pop_front"){
            if(!dq.empty()) {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else{
                cout << "-1\n";
            }
        }
        else if(strTp == "pop_back"){
            if(!dq.empty()) {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}