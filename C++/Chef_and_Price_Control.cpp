#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n, k;       cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    long int sum = 0;
    for(int i = 0; i < n; ++i){
        if(k < v[i]){
            sum += v[i] - k;
        }
    }
    cout << sum << endl;
}

int main(){

    int t;		cin >> t;
    while(t--){
 
        solve();
    }

    return 0;
}