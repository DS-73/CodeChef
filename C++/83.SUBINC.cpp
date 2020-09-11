#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int64_t n;
        cin >> n;

        vector<int64_t> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int64_t count = 0, temp = 1;
        for(int i = 0; i < n - 1; i++){
            if(v[i] <= v[i + 1]){
                temp++;
            }
            else{
                count += (temp * (temp + 1)) / 2;
                temp = 1;
            }
        }
        count += (temp * (temp + 1)) / 2; 
        cout << count << endl;
    }

    return 0;
}
