#include <iostream>
#include <map>

using namespace std;

int main(){
    string s;       cin >> s;
    map<char, int> mp;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'C'){
            mp[s[i]]++;
        }          
        else if(s[i] == 'H'){
            if(mp[s[i]] <= mp['C']){
                mp[s[i]]++;
            }
        }       
        else if(s[i] == 'E'){
            if(mp[s[i]] <= mp['H']){
                mp[s[i]]++;
            }
        }      
        else if(s[i] == 'F'){
            if(mp[s[i]] <= mp['E']){
                mp[s[i]]++;
            }
        }      
    }
    cout << mp['F'];
    
    return 0;
}
