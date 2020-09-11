#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x, y;
        cin >> n >> x >> y;

        int *arr = new int[n];
        for(int i = 0; i < n; i++){
            cin >> *(arr + i);
        }

        sort(arr, arr + n);
        int min = (*(arr)) - (x * y), max = (*(arr)) + (x * y);
        int temp_min = min, temp_max = max, count = 0;

        for(int i = 1; i < n; i++){

            temp_min = (*(arr + i)) - (x * y);
            if(temp_min < min){
                min = temp_min;
            }
            if(temp_max < temp_min){
                count += temp_min - temp_max - 1;
            }

            temp_max = (*(arr + i)) + (x * y);
            if(temp_max > max){
                max = temp_max;
            }
        }

        if(min > 1){
            count += min - 1;
        }
        if(max < 100){
            count += (100 - max);
        }

        cout << count << endl;

    }

    return 0;
}
