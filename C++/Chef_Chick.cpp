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
    int Min = v[0];
    for(int i = 0; i < n; ++i){
        if(Min > v[i]){
            Min = v[i];
        }
    }
    cout << Min << endl;
}

int main(){
    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}