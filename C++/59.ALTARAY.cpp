#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> v(n);
        for(long long i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<long long> dp(n);
        dp[n - 1] = 1;

        for(int i = n - 2;  i >= 0; i--){
            if(((v[i] < 0) && (v[i + 1] > 0)) || ((v[i] > 0) && (v[i + 1] < 0))){
                dp[i] = dp[i + 1] + 1;
            }
            else{
                dp[i] = 1;
            }
        }
        
        for(int i = 0; i < n; i++){
            cout << dp[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
