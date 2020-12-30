#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n, x;       cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    if(*max_element(v.begin(), v.end()) >= x){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}