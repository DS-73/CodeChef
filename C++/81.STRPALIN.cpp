#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        
        int flag = 0;
        for(int i = 0; s1[i] != '\0'; i++){
            for(int j = 0; s2[j] != '\0'; j++){
                if(s1[i] == s2[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                break;
            }
        }
        
        if(flag == 1){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }


    return 0;
}
