#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    getchar();

    while(t--){
        string s;
        getline(cin, s);

        int flag = 0;
        vector<int64_t> v;
        for(int i = 0; s[i] != NULL; i++){
            if(s[i] == ' '){
                flag = 0;
            }
            else{
                if(flag == 0){
                    v.push_back(s[i] - 48);
                }
                else{
                    v[v.size() - 1] = (v[v.size() - 1] * 10) + (s[i] - 48);
                }
                flag = 1;
            }
        }

        flag = 0;
        int64_t max = -1;
        for(int i = 0; i < v.size(); i++){
            if((flag == 0) && (v[i] == v.size() - 1)){
                flag = 1;
                continue;
            }
            else if(max < v[i]){
                max = v[i];
            }
        }
        cout << max << endl;

    }
    return 0;
}
