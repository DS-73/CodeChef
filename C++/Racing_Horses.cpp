#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n;      cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    int res = v[1] - v[0];
    for(int i = 2; i < n; ++i){
        res = min(res, v[i] - v[i - 1]);
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