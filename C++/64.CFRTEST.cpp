#include <iostream>
#include <set>

using namespace std;

int main(){
    short t;    cin >> t;
    while(t--){
        short n;    cin >> n;
        set<char> s;
        for(short i = 0; i < n; i++){
            short d;    cin >> d;
            s.insert(d);
        }

        cout << s.size() << endl; 
    }

    return 0;
}

