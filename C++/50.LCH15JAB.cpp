#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        int max = -1;
        for(int i = 0; i < s.size(); i++){
            int max_temp = 1;
            for(int j = i + 1; j < s.size(); j++){
                if(s[i] == s[j]){
                    max_temp++;
                }
                else{
                    i = j - 1;
                    break;
                }
            }

            if(max_temp > max){
                max = max_temp;
            }
        }

        if( (max * 2) == s.size() ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}

