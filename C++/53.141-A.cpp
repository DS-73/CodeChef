#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    s1.insert(0,s2);
    sort(s1.begin(), s1.end());
    sort(s3.begin(), s3.end());

    int i = 0, flag = 0;
    while(s1[i] != '\0' || s2[i] != '\0'){
        if(s1[i] != s2[i]){
            flag  = 1;
            break;
        }
        i++;
    }
    if(flag  == 1){
        cout << "NO";
    }
    else{
        cout << "YES";
    }

    return 0;
}

