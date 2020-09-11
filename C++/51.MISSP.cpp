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
    
        int last;
        sort(v.begin(), v.end());
        for(int i = 1; i < n ; i += 2){
            if(v[i] != v[i - 1]){
                cout << v[i - 1] << " ";
                last = v[i - 1];
                i--;
            }
        }
        
        if(last != v[n - 1]){
            if(v[n - 1] != v[n - 2]){
                cout << v[n - 1];
            }   
        }
        cout << endl;

    }

    return 0;
}
