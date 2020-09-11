#include <iostream>

using namespace std;

int main(){
    long long int t;
    cin >> t;

    while(t--){
        long long int n, res;
        cin >> res;

        res = ((n / 2) * ( (n / 2) - 1) )/ 2;
        cout << res;
    }
    return 0;
}
