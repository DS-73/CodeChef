#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;

    double root = sqrt(2);
    while(t--){
        int n, v1, v2;
        cin >> n >> v1 >> v2;

        double ele = (double)(2 * n) / v2;
        double stair = (double) (root * n) / v1;

        if(ele > stair){
            cout << "Stairs" << endl;
        }
        else{
            cout << "Elevator" << endl;
        }

    }

    return 0;
}
