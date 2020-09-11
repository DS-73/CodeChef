#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s1, s2;
        cin >> s1 >> s2;

        int flag = 0;
        for(int i = 0; i < s1.length(); i++){
            if( (s1[i] != '?') && (s2[i] != '?')  && (s1[i] != s2[i])){
                flag = 1;
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

    return 0;
}
