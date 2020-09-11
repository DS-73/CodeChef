
#include <iostream>

using namespace std;

int main(){

    int n, k, temp, res = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> temp;
        if( !(temp%k) ){
            res++;
        }
    }
    
    cout << res;


    return 0;
}