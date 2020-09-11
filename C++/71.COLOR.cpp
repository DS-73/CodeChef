#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n;      cin >> n;
        string s;       cin >> s;
        int count[3] = {0, 0, 0};
        
        for(int i = 0; i < n; i++){
            if(s[i] == 'R'){
                count[0]++;
            }
            else if(s[i] == 'G'){
                count[1]++;
            }
            else{
                count[2]++;
            }
        }
        sort(count, count + 3);
        cout << n - count[2] << endl;

    }


    return 0;
}