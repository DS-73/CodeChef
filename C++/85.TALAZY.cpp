#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int64_t n, b, m, count = 0;
        cin >> n >> b >> m;

        while(n){
            if(n == 1){
                count += m;
                n = 0;
            }
            else if(n % 2){
                int64_t temp = (n + 1) / 2;
                count += temp * m;

                m *= 2;
                n = n - temp;
            }
            else{
                int64_t temp = n / 2;
                count += temp * m;

                m *= 2;
                n = n - temp;
            }
        }
        cout << count << endl;
    }

    return 0;
}
