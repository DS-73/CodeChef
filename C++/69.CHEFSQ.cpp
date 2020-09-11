#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> v1(n);
        for(int i = 0; i < n; i++){
            cin >> v1[i];
        }

        int m;  cin >> m;
        vector<int> v2(m);
        for(int i = 0; i < m; i++){
            cin >> v2[i];
        }

        int it = 0;
        for(int i = 0; i < n; i++){
            if(v1[i] == v2[it]){
                it++;
                if(it == m){
                    break;
                }
            }
        }
        if(it == m){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}
