#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    long long l, b, area, peri;
    cin >> l >> b;

    area = l * b;
    peri = 2 * (l + b);
    
    if(area == peri){
        cout << "Eq" << endl;
        cout << peri;
    }
    else if(area > peri){
        cout << "Area" << endl;
        cout << area;
    }
    else{
        cout << "Peri" << endl;
        cout << peri;
    }

    return 0;
}

