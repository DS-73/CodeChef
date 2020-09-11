#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int n;
    cin >> n;

    if(n % 4 == 0){
        n += 1;
    }
    else{
        n -=1;
    }

    cout << n;

    return 0;
}
