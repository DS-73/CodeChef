#include <iostream>

using namespace std;

int main(){
    int t, r;       cin >> t >> r;
    while(t--){
        int num;        cin >> num;
        if(num < r){
            cout << "Bad boi" << endl;
        }
        else{
            cout << "Good boi" << endl;
        }
    }
    return 0;
}