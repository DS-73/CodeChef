#include <iostream>

using namespace std;

int func_gcd(int a, int b){
    if(b == 0){
        return a;
    }
    func_gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int gcd = func_gcd(a,b);

        long long int = (a * b) / gcd;
        cout << gcd << lcm;
    }

    return 0;
}

