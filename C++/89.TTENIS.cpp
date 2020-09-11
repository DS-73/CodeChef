#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int count1 = 0, count0 = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
            if(count1 == 10 && count0 == 10){
                count1--;
                count0--;
            }
            else if(count1 == 11 || count0 == 11){
                break;
            }
        }

        if(count1 == 11){
            cout << "WIN" << endl;
        }
        else{
            cout << "LOSE" << endl;
        }

    }


    return 0;
}
