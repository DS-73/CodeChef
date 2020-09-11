#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main(){
    long double m, n , a;
    cin >> m >> n >> a;
 
    long double res =  ceil(m/a) * ceil(n/a);
    long long res1 = res;
    cout << res1;
    
    return 0;