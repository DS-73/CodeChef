#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long double salary, res ;
        cin >> salary;

        if(salary < 1500){
            res = (double) (salary + (salary * 0.1) + (salary * 0.9));
        }
        else{
            res = (double) (salary + 500 + (salary * 0.9));
        }

        cout << fixed << setprecision(2) <<  res << endl;
    }

    return 0;
}
