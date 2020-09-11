#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.length() == 26){
        short n;    cin >> n;
        while(n--){
            string s1;   cin >> s1;
            cout << "Yes" << endl;
        }
    }
    else{
        short n; cin >> n;
        while(n--){
            string s1;   cin >> s1;
            short flag = 1;
            for(int i = 0; s1[i] != '\0' ; i++){
                flag = 1;
                for(int j = 0; s[j] != '\0'; j++){
                    if(s1[i] == s[j]){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1){
                    break;
                }
            
            }
    
            if(flag == 1){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}
