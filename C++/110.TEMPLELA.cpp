#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n;       cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        if(n & 1){
            int flag = 0;
            for(int i = 0; i < n / 2; i++){
                if((v[i]+1 != v[i+1]) || (v[i] != v[n-i-1])){
                    flag = 1;
                    break;
                }
            }
            
            if(v[0] != 1){
                flag = 1;
            }

            if(flag == 1){
                cout << "no" << endl;
            }
            else{
                cout << "yes" << endl;
            }
        }
        else{
            cout << "no" << endl;
        }


    }

    return 0;
}
