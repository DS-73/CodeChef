#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int64_t c, d, l;
        cin >> c >> d >> l;
        
        int64_t max;
        if(l % 4){
            cout << "no" << endl;
        }
        else{
            max = 4 *(c + d);

            if(l<= max){
                cout << "yes" << endl;
            }
            else{
                cout << "no" << endl;
            }
        }
    }

    return 0;
}
