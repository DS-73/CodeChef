#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void solve(){
    int n;      cin >> n;
    vector<pair<string, string>> vp(n);
    map<string, int> m;

    for(int i = 0; i < n; i++){
        string s;       getline(cin, s);
        vp[i].first = s;        
        
        int x = 0;
        while(s[x] != 0){
            x++;
        }
        s.erase(x);
        vp[i].second = s;

        m[s]++;
    }
    
    for(int i = 0; i < n; i++){
        if(m[vp[i].second] == 1){
            cout << vp[i].second << endl;
        }
        else{
            cout << vp[i].first << endl;
        }
    }
}

int main(){
    int t;      cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
