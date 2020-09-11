#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int64_t n, k, count = 0;
        cin >> n >> k;

        vector<int64_t> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        for(int i = 0; i < n; i++){
            int64_t temp = v[i] % k ;
            if(v[i] >= k){
                count += min(temp, k-temp);
            }
            else{
                count += k-temp;
            }
            
        }
        
        cout << count << endl;
    }

    return 0;
}
