#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n, k, rem = 0;       cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    for(int i = 0; i < n; ++i){
        rem = rem + v[i] - k;
        if(rem < 0){
            cout << "NO " << i + 1 << endl;
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