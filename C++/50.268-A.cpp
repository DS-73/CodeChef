#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][2];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    long long count = 0;
    for(int i = 0; i < n; i++){
        for(int i = 0; i < n; j++){
            if(arr[i][0] == arr[j][1] ){
                count++;
            }
        }
    }

    cout << count;
    return 0;
}