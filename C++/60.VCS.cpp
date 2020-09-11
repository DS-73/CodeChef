#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n, m, k;
        cin >> n >> m >> k;

        vector<int> v(n + 1), v1(m), v2(k);
    
        for(int i = 0; i <= n; i++){
            v[i] = 0;
        }
    // Input vectors
        for(int i = 0; i < m; i++){
            cin >> v1[i];
            v[v1[i]] += 1;
        }
        for(int i = 0; i < k; i++){
            cin >> v2[i];
            v[v2[i]] += 1;
        }

        long long count0 = 0, count2 = 0;
        for(int i = 1; i <= n; i++){
            if(v[i] == 2){
                count2++;
            }
            else if(v[i] == 0){
                count0++;
            }
        }

        cout << count2 << " " << count0 << endl;

    }

    return 0;
}
