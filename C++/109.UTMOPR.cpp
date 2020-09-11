#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int64_t n, k, sum = 0;       cin >> n >> k;
        vector<int64_t> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(k == 1){
            if(sum % 2 == 0){
                cout << "odd" << endl;
            }
            else{
                cout << "even" << endl;
            }
        }
        else{
            cout << "even" << endl;
        }
        
    }

    return 0;
}
