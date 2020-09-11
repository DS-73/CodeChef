
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int t;
    cin >> t;

    while(t--){
        int arr[3];

    // Inserting elements
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }

    // Sorting Array
        for(int i = 0; i < 2; i++){
            for(int j = i + 1; j < 3; j++){
                if(arr[i] > arr[j]){
                    arr[j] += arr[i];
                    arr[i] = arr[j] - arr[i];
                    arr[j] = arr[j] - arr[i];
                }
            }
        }

        cout << arr[1] << endl;
    }

    return 0;
}