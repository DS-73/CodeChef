
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, temp, flag = 0, bal = 0, arr[3] = {0,0,0};
        cin >> n;

        for(int j = 0; j < n ; j++){
        // Taking element as element 
            cin >> temp;
            
            // If element is 5 then we will add one coin in 5 rs box
            if(temp == 5){
                arr[0] += 1;
            }

            // If element is 10 then we will add one coin in 10 rs box
            // We will also remove 1 coin from 5 rs box
            else if(temp == 10){
                arr[1] += 1;
                arr[0] -= 1;

                if(arr[0] < 0){
                    flag = 1;
                }
            }

            // If element is 15 then we will add coint to 15 rs box
            // We will all remove 1 coin from 10 rs box or 2 coins from 5 rs box
            else if(temp == 15){
                arr[2] += 1;

                if(arr[1] > 0){
                    arr[1] -= 1;
                }
                else{
                    arr[0] -=2;
                }

                if( (arr[0] < 0) || (arr[1] < 0) ){
                    flag = 1;
                }

            }

        }

        if(flag == 0){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }


    }

    return 0;
}
