#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, res = 0;
        cin >> n;

        while(n > 0){
            if(n % 10 == 4)
                res ++;
            n = n / 10;
        }

        cout << res << endl;
    }

    return 0;
}