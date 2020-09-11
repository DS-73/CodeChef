#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    set<char> s;
    string str;
    getline(cin, str);

    for(int i = 1; i < str.size(); i += 3){
        if( str[i] != '}'){
            s.insert(str[i]);
        }
    }
    
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << s.size();


    return 0;
}
