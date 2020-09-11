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
            if(temp == 0){
                continue;
            }
            else if(v[i] < k){
                count += k - temp;
            }
            else if(temp < k/2){
                count += temp;
            }
            else{
                count += k/2;
            }
            
        }
        
        cout << count << endl;
    }

    return 0;
}
