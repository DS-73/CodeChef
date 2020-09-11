#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        float q, p, res;
        cin >> q >> p;

        res = q * p;
        if(q > 1000){
            res -= ((q * p) * 0.1);
        }

        cout << fixed << setprecision(6) << res << endl;
    }


    return 0;
}
