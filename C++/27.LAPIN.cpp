/*

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int flag = 0;
        if(s.length() % 2){
            sort(s.begin(), (s.end() - (s.length() / 2) - 1) );
            sort((s.end() - (s.length() / 2)), s.end());

            auto it1 = s.begin(), it2 = (s.end() - (s.length() / 2));
            while(it2 < s.end()){
                if(*it2 != *it1){
                    flag = 1;
                }
            }

            if(flag == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
            
        }
        else{
            sort(s.begin(), (s.end() - (s.length() / 2)) );
            sort((s.end() - (s.length() / 2) ), s.end());

            auto it1 = s.begin(), it2 = (s.end() - (s.length() / 2) );
            while(it2 < s.end()){
                if(*it2 != *it1){
                    flag = 1;
                }
            }

            if(flag == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
            
        }

        cout << s << endl;
    }

    return 0;
}


*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s.length() % 2){
            s.erase(s.begin() + s.length()/2);
        }
        
        sort(s.begin(), (s.end() - (s.length() / 2)) );
        sort((s.end() - (s.length() / 2) ), s.end());

        int flag = 0;
        for(int i = 0, j = s.length() / 2; i < s.length()/2; i++, j++){
            if(s[i] != s[j]){
                flag = 1;
                break;
            }
        }
        
        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;
}