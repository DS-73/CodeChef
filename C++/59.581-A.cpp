#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a > b){
        a -= b;
        a = a / 2;
        cout << b << " " << a;
    }
    else{
        b -= a;
        b = b / 2;
        cout << a << " " << b;
    }


    return 0;
}
