#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    while(true){
        int x;      cin >> x;
        if(x == 42){
            break;
        }
        cout << x << endl;
    }

    return 0;
}