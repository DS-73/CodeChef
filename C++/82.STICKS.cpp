#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        
        int64_t a = -1, b = -1;
        for(int i = 0; i < n - 1; i++){
            if(v[i] == v[i + 1]){
                if(a == -1){
                    a = v[i];
                    i++;
                }
                else{
                    b = v[i];
                    break;
                }
            }
        }
        if((a == -1) || (b == -1))
            cout << -1 << endl;
        else
            cout << a * b << endl;

    }


    return 0;
}
