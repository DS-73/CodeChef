#include <iostream>

using namespace std;

long long gcd(int l, int b){
    if(b == 0){
        return l;
    }
    
    return gcd(b, (l % b) );
}

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long l, b, res, gcd_num;
        cin >> l >> b;

        gcd_num = gcd(l, b);
        res = (l / gcd_num) * (b / gcd_num);
        cout << res<< endl;
    }

    return 0;
}

