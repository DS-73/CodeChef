#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int64_t a, b;
        cin >> a >> b;
        
        vector<int> v;
        while(a != 0 || b != 0){
            v.push_back(((a % 10) + (b % 10)) % 10);
            a = a / 10;
            b = b / 10;
        }
        int flag = 0;
        for(int i = v.size() - 1; i > -1; i--){
            if(v[i] != 0){
                flag = 1;
            }
            if(flag != 0){
                cout << v[i];
            }
        }
        if(flag == 0){
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}
