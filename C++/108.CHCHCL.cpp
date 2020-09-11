#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int64_t n, m, res;       cin >> n >> m;
        res = (n - 1) + ((m - 1) * n);
        if(res & 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}
