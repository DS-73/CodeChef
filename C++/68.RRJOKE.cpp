#include <iostream>

using namespace std;

int main(){
    int t;    cin >> t;
    while(t--){
        int n;      cin >> n;
        for(int i = 0; i < 2*n; i++){
            int x;    cin >> x;
        }
        int res = 1;
        for(int i = 2; i <= n; i++){
            res ^= i;
        }
        cout << res << endl;
    }
    return 0;
}
