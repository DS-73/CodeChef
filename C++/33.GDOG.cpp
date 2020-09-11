#include <iostream>

using namespace std;

int main(){ 
    int t;
    cin >> t;

    while(t--){
        int64_t n, k, res = 0;
        for(int i = 2; i <= k + 1; i++){
            if( (n % i) > res){
                res = n % i;
            }
        }

        cout << res << endl;
    }

    return 0;
}
