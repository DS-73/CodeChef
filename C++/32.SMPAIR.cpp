#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        long long int *arr = new long long int[n];
        for(int i = 0; i < n; i++){
            cin >> *(arr + i);
        }

        sort(arr, arr+n);

        cout << arr[0] + arr[1] << endl;

    }

    return 0;
}
