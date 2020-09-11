#include <iostream>

using namespace std;

int func1(int n , int arr[]){
    int small = arr[0];
    for(int i = 1; i < n; i++){
       if(arr[i] < arr[0]){
            small = arr[0];
        }
    }

    int res = 1;
    for(int j = 2; j <= small; j++){
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] % j != 0){
                flag = 1;
            }
        }

        if(flag == 0){
            res = j;
        }
    }
    return res;
}

int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    if(a>b)
    {
        return gcd(a%b, b);
    }
    else if(b>a)
    {
        return gcd(b%a, a);
    }
}

int func2(int n, int arr[]){

	int ans = 0,flag=0;
	for(int i=0; i<n; i++)
	{
	    ans = gcd(ans, arr[i]);
	    if(arr[i]%ans!=0)
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==0)
	{
	    return ans;
	}
    else
	{
	    return 1;
	}
}

int main(){
    while(1){
        int n = rand() % 50 + 2;
        int *arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = rand() % 1000 + 1;
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        
        
    }

    return 0;
}