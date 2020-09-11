#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        int flag = 0;
        cin >> n;
        while(n > 0){
            if( !(flag == 0 && n % 10 == 0) ){
                cout << n % 10;
                flag = 1;
            }
            n = n / 10;
        }
        cout << endl;
    }
    return 0;
}