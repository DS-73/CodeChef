#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int64_t a, b;
    cin >> a >> b;

    char c;
    cin >> c;

    if(c == '+'){
        cout << a + b;
    }
    else if(c == '-'){
        cout << a - b;
    }
    else if(c == '*'){
        cout << a * b;
    }
    else if (c == '/' ){
        long double res = a / b;
        cout << fixed << setprecision(1) << res;
    }

    return 0;
}
