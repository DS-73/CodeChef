#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void solve(){
    int n;      cin >> n;       cin.get();
    vector<string> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    
    vector<bool> v1(5, false);
    for(int i = 0; i < n; ++i){
        if(v[i] == "cakewalk"){
            v1[0] = true;
        }
        else if(v[i] == "simple"){
            v1[1] = true;
        }
        else if(v[i] == "easy"){
            v1[2] = true;
        }
        else if(v[i] == "easy-medium" || v[i] == "medium"){
            v1[3] = true;
        }
        else if(v[i] == "medium-hard" || v[i] == "hard"){
            v1[4] = true;
        }
    }

    for(int i = 0; i < 5; ++i){
        if(!v1[i]){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    
}

int main(){

    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
