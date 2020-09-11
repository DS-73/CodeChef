#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x, y, num;
        cin >> x >> y;

        num  = x + y + 1;
        while(true){
            int flag = 0;
            for(int i = 2; i <= (sqrt(num) + 1); i++){
                if(num % i == 0){
                    flag = 1;
                    break;
                }
            }

            if(flag == 0){
                break;
            }
        }
        cout << num - (x + y) << endl;

    }

    return 0;
}
