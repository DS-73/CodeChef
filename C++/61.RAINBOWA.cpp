#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> v(n);
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }

        int flag = 0;
        for(int i = 0; i < n/2; i++){
            if(v[i] != v[v.size() - i -1]){
                flag = 1;
                break;
            }
        }

        if(s.size() == 7){
            int i = 1;
            for(auto it = s.begin(); it != s.end(); it++, i++){
                if(*it != i){
                    flag = 1;
                    break;
                }
            }

        }
        else{
            flag = 1;
        }
        
        if(flag == 0){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }


    }

    return 0;
}

