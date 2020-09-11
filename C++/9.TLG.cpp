#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int n, diff = 0, sum1 = 0, sum2 = 0, lead, leader, diff_final = 0, leader_final;
    cin >> n;

    while(n--){
        int si, ti;
        cin >> si >> ti;

        sum1 += si;
        sum2 += ti;

        if(sum1 - sum2 > 0){
            diff = sum1 - sum2;
            leader = 1;
        }
        else{
            diff = sum2 - sum1;
            leader = 2;
        }

        if(diff_final < diff){
            diff_final = diff;
            leader_final = leader;
        }
    }
    cout << leader_final << " " << diff_final;

    return 0;
}