#include <iostream>
#include <string>
#include <map>

using namespace std;

void solve(){
    int n;      cin >> n;       cin.get();
    string s;       getline(cin, s);
    if(s.length() % 2 == 1){
        cout << "NO" << endl;
        return;
    }

    map<char, int> mp;
    for(int i = 0; i < s.length(); ++i){
        ++mp[s[i]];
    }
    for(auto it : mp){
        if(it.second % 2 == 1){  
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
