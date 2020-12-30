#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int n, temp, res;      cin >> n >> temp;
    --n;                   res = temp;

    while(n--){
        cin >> temp;
        res = max(res, temp);
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