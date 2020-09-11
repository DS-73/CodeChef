#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int64_t sum = 0;
        for(int i = k; i < n - k; i++){
            sum += v[i];
        }

        long double res = (double) (sum * 1.0 / (n - (2 * k)));
        cout << fixed << setprecision(6) << res << endl;
    }
    return 0;
}
