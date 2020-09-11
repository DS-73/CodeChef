
#include <iostream>

using namespace std;

int multiply(int arr[], int n, int max_index){
    int carry = 0;
    for(int i = 0; i < max_index; i++){
        arr[i] = (arr[i] * n) + carry;
        carry = 0;
        if(arr[i] > 9){
            if(i == max_index - 1){
                while(arr[max_index - 1] > 9 ){
                    arr[max_index] = arr[max_index - 1] / 10;
                    arr[max_index - 1] = arr[max_index - 1] % 10;

                    max_index += 1;
                }
                return max_index;
            }
            else{
                carry = arr[i] / 10;
                arr[i] = arr[i] % 10;
            }
        }
    }



    return max_index;
}

void factorial(int n){
    int arr[200] = {1,0}, max_index = 1; 
    for(int i = 2; i <= n; i++){
        max_index = multiply(arr,i,max_index);
    }

    while(--max_index > -1){
        cout << arr[max_index];
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        factorial(n);
    }

    return 0;
}
