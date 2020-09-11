#include <iostream>
#include <string>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long count0 = 0, count1 = 0;
        string s;
        cin >> s;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        if( (count1 == 0 || count0 == 0) && (s.size() != 1)){
            cout << "No";
        }
        else if(count1 > 1 && count0 > 1){
            cout << "No";
        }
        else{
            cout << "Yes";
        }
        
        cout << endl;
    }

    return 0;
}
