#include <iostream>

using namespace std;

int func1(int n){
	int a=n%10;
	int b=0;
	while(n!=0)
	{
	    b=n%10;
	    n=n/10;
	}
	    
	return (a+b);
}

int func2(int n){

    int  res;
    res = n % 10;
    while(n > 9){
        n = n / 10;
    }
    res = res + n;
  
    return res;
}

int main(){
    int i = 1;
    while(i <= 1000000){
        int res1 = func1(i);
        int res2 = func2(i);

        if(res1 != res2){
            cout << endl << "Unsuccessful Attemt << " << i << "  >> ";
            cout << endl << "Res 1 : " << res1 << " Res 2 : " << res2;
            return 0;
        }
        cout << endl << "Successful Attemt << " << i << "  >> ";
        i++;
    }

    return 0;
}


