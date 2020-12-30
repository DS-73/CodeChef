#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void solve(){
    int n;      cin >> n;       cin.get();

    map<string, int> mp;
    for(int i = 0; i < n; ++i){
        string s;       cin >> s;
        ++mp[s];
    }

    int r1 = -1, r2 = -1;
    for(auto it : mp){
        if(r1 == -1){
            r1 = it.second;
        }
        else{
            r2 = it.second;
        }
    }

    if(r1 == r2){
        cout << "Draw" << endl;
        return;
    }

    int res = max(r1, r2);
    for(auto it : mp){
        if(it.second == res){
            cout << it.first << endl;
            return;
        }
    }
    
}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
