#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;         cin >> t;
    while(t--){
        int n;      cin >> n;
        cin.get();
        string s;       getline(cin, s);
        int flag = 0;

        char prev_ch = 'A';
        for(int i = 0; i < n; i++){
            if(s[i] == 'H'){
                flag++;
            }
            else if(s[i] == 'T'){
                flag--;
            }

            if(flag > 1 || flag < 0){
                break;
            }
        }
        if(flag == 0){
            cout << "Valid" << endl;
        }
        else{
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
