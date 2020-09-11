#include <iostream>

using namespace  std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        int *arr = new int[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        int small = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[0]){
                small = arr[0];
            }
        }

        int res = 1;
        for(int j = 2; j <= small; j++){
            int flag = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] % j != 0){
                    flag = 1;
                }
            }

            if(flag == 0){
                res = j;
            }
        }
        
        for(int i = 0; i < n; i++){
            arr[i] = arr[i] / res;
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

    }

    return 0;
}
