#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float a, b, c;        cin >> a >> b >> c;
    float x1 = (sqrt(pow(b, 2) - (4 * a * c)) - b) / (2 * a);
    float x2 = (sqrt(pow(b, 2) - (4 * a * c)) + b) / (2 * a);
    
    cout << fixed << setprecision(6) << x1 << endl;
    cout << fixed << setprecision(6) << x2 << endl;

    return 0;
}
