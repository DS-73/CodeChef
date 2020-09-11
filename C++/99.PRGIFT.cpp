#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n, k;       cin >> n >> k;
        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int counter = 0, flag = 0;
        for(int i = 0; i < n; i++){
            if(!(v[i] & 1)){
                counter++;
            }
        }
        if(k == 0 && counter == n){
            cout << "NO" << endl;
        }
        else if(k == 0 && counter != n){
            cout << "YES" << endl;
        }
        else if(k <= counter){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
