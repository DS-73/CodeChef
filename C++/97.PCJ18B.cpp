#include <iostream>

using namespace std;

int main(){
    int t;          cin >> t;
    while(t--){
        int64_t n, res = 0;      cin >> n;
        for(int i = n; i > 0; i -= 2){
            res += i * i;
        }
        cout << res << endl;
    }
    return 0;
}
