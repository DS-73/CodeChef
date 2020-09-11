
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    float y;

    cin >> x >> y;
    if( (x % 5) || ( x > y)) {
        cout << fixed << setprecision(2) <<  y;
    }

    float res = (float) (y -x -0.5);
    cout << fixed << setprecision(2) << res ;

    return 0;
}