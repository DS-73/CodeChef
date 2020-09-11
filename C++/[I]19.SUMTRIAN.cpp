#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j > i){
                    arr[i][j] = 0;
                }
                else{
                    cin >> arr[i][j];
                }
            }
        }

        int res = 0;
        for(int i = 0; i < n; i++){
            int temp = i, temp_res = 0;
            for(int j = 0; j < n; j++){
                if(temp > 0){
                    temp_res = temp_res + arr[j][0];
                }
                else{
                    temp_res = temp_res + arr[j][j - i];
                }
                temp--;
            }
            if(res < temp_res){
                res = temp_res;
            }
        }

        cout << res << endl;
    }

    return 0;
}
