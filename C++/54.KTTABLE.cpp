#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n, count = 0;
        cin >> n;
        vector<long long> v(n + 1), v1(n + 1);
        v[0] = 0, v1[0] = 0;

        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }

        for(int i = 1; i <= n; i++){
            cin >> v1[i];
        }

        for(int i = 1; i <= n; i++){
            if( (v[i] - v[i-1]) >= v1[i]){
                count++;
            }
        }

        cout << count << endl;
        
    }

    return 0;
}
