#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n, len0 = 0, len1= 0;      cin >> n;
        string s, r;    cin >> s >> r;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                len0++;
            }
            else{
                len1++;
            }
            
            if(r[i] == '0'){
                len0--;
            }
            else{
                len1--;
            }
        }

        if(len0 == 0 && len1 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
