#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, size = 0, arr[20], ini = 0;
        cin >> n;

        ini = n / 2048;
        n = n % 2048;

        while(n !=0){
            arr[size] = n % 2;
            n = n / 2;
            size++;            
        }

        int res = 0;
        for(int i = 0; i < size; i++){
            if(arr[i] == 1){
                res++;
            }
        }
        cout << res + ini << endl;

    }

    return 0;
}