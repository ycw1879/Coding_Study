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
    vector<int> vec;
    for(int i=0; i < k; i++){
        cin >> strTp;
        if (strTp == "push"){
            cin >> intTp;
            vec.push_back(intTp);
        }
        else if(strTp == "top"){
            if(vec.empty()){
                cout << "-1\n";
            }
            else{
                cout << vec.back() << "\n";
            }
        }
        else if(strTp == "size"){
            cout << vec.size() << "\n";
        }
        else if(strTp == "empty"){
            cout << vec.empty() << "\n";
        }
        else if(strTp == "pop"){
            if(!vec.empty()) {
                cout << vec.back() << "\n";
                vec.pop_back();
            }
            else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}