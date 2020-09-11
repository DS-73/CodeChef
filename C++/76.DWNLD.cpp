#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int arr[n][2];
        for(int i = 0; i < n; i++){
            cin >> arr[i][0] >> arr[i][1];
        }
        int i = 0;
        while(k > 0 && i < n){
            if(k - arr[i][0] >= 0){
                k -= arr[i][0];
            }
            else{
                arr[i][0] -= k;
                k = 0;
                i--;
            }
            i++;
        }
        int64_t count = 0;
        while(i < n){
            count += (arr[i][0] * arr[i][1]);
            i++;
        }
        cout << count << endl;

    }

    return 0;
}
