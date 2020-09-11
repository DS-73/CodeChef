#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    int min = 101, max = -1, max_index = -1, min_index = -1 ;
    for(int i = 0; i < n; i++){
        if( (*(arr + i)) > max){
            max = (*(arr + i));
            max_index = i;
        }

        if( (*(arr + i)) <= min){
            min = (*(arr + i));
            min_index = i;
        }
    }

    if(max_index == 0 && min_index == n-1){
        cout << 0;
    }
    else if(max_index == 0 && min_index != n-1){
        cout << n - 1 - min_index;
    }
    else if(max_index != 0 && min_index == n-1){
        cout << max_index;
    }
    else if(max_index != 0 && min_index != n-1){
        if(max_index < min_index){
            cout << max_index + (n - 1 - min_index);
        }
        else{
            cout <<  max_index + (n - 1 - min_index) - 1;
        }
    }



    return 0;
}

