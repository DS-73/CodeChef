#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n, m;       cin >> n >> m;
    cin.get();
    vector<string> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    int res = 0;
    for(int i = 0; i < m; ++i){
        int temp = 0;
        for(int j = 0; j < n; ++j){
            if(v[j][i] == '1'){
                ++temp;
            }
        }
        if(temp >= 2){
            res += (temp * (temp - 1))/2;
        }
    }
    cout << res << endl;

}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}