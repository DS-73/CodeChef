#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<string> sn(n);
        vector<int> s(n);
        for(int i = 0; i < n; i++){
            cin >> sn[i];
        }

        for(int i = 0; i < k; i++){
            int l;
            cin >> l;
            vector<string> sk(l);
            for(int j = 0; j < l; j++){
                cin >> sk[j];
                for(int k = 0; k < n; k++){
                    if( sn[k].compare(sk[j]) == 0){
                        s[k] = 1;
                    }
                }
            }            
        }
        for(int i = 0; i < n; i++){
            if(s[i] == 1){
                cout << "Yes" << " ";
            }
            else{
                cout << "NO" << " ";
            }
        }
        cout << endl;

    }

    return 0;
}
