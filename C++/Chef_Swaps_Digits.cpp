#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    int a, b;       cin >> a >> b;
    int sum = a + b;
    
    if(a > 9 && b > 9){
        int a1 = ((b % 10) * 10) + (a % 10);
        int b1 = ((b / 10) * 10) + (a / 10);

        int a2 = ((a / 10) * 10) + (b % 10);
        int b2 = ((a % 10) * 10) + (b % 10);

        cout << max (sum, max(a1 + b1, a2 + b2)) << endl;
    }
    else if(a < 10 && b < 10){
        cout << a + b << endl;
    }
    else{
        int a1 = max(a, b) / 10;
        int b1 = (min(a, b)* 10) + max(a, b) % 10;

        cout << max(sum, a1 + b1) << endl;

    }
}

int main(){
    int t;		cin >> t;
    while(t--){
        solve();
    }

    return 0;
}