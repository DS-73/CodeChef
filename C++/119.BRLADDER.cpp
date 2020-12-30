#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
    int64_t a, b, a_temp, b_temp;       cin >> a >> b;
    a_temp = min(a, b);
    b_temp = max(a, b);

    if(a_temp == 1 && (b_temp == 3 || b_temp == 2)){
        cout << "YES" << endl;
        return;
    }
    else if(a_temp == 2 && (b_temp == 1 || b_temp == 4)){
        cout << "YES" << endl;
        return;
    }
    else if(a_temp != 1 && a_temp != 2){
        if(a % 2 == 0 && ((b >= (a - 2)) && (b <= (a + 2)))){
            cout << "YES" << endl ;
        }
        
    }

}

int main(){
    int t;      cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

