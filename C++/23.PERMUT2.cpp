#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t != 0){
        int *arr = new int[t];
        for(int i = 0; i < t; i++){
            cin >> *(arr + i);
        }

        int flag = 0;
        for(int i = 0; i < t; i++){
            int temp = arr[i];
            if(arr[temp - 1] != i + 1){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            cout << "not ambiguous" << endl;
        }
        else{
            cout << "ambiguous" << endl;
        }

        cin >> t;
    }

    return 0;
}



// 1 at pos == 1
// 1 at pos 1

// 4 at pos == 2
// 2 at pos 4