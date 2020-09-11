#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, i = 1, flag = 0;
        cin >> a >> b;

        while(a > -1 && b > -1){
            if(flag == 0){
                a -= i;
                i++;
                flag = 1;
            }
            else{
                b -= i;
                i++;
                flag = 0;
            }

            cout << i << " : " << a << " , " << b << endl;
        }

        if(a < -1){
            cout << "Bob" << endl;
        }
        else{
            cout << "Limak" << endl;
        }

    }

    return 0;
}
