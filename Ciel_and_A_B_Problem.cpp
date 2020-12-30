#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int a, b;       cin >> a >> b;
    int res = a - b;

    if(res % 10 == 9){
        res -= 1;
    }
    else{
        res += 1;
    }
    cout << res << endl;
}

int main(){

    solve();

    return 0;
}