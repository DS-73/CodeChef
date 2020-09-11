
#include <iostream>

using namespace std;

// GeeksForGeeks
int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
  
        // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 

int factorial(int res[], int n) 
{ 
    // Initialize result 
    res[0] = 1; 
    int res_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    return res_size;
} 

// My Implementation
int multiply_my(int arr[], int n, int max_index){
    int carry = 0;
    for(int i = 0; i < max_index; i++){
        arr[i] = (arr[i] * n) + carry;
        carry = 0;
        if(arr[i] > 9){
            if(i == max_index - 1){
                while(arr[max_index - 1] > 9 ){
                    arr[max_index] = arr[max_index - 1] / 10;
                    arr[max_index - 1] = arr[max_index - 1] % 10;

                    max_index += 1;
                }
                return max_index;
            }
            else{
                carry = arr[i] / 10;
                arr[i] = arr[i] % 10;
            }
        }
    }



    return max_index;
}

int factorial_my(int arr[], int n){
    int max_index = 1; 
    for(int i = 2; i <= n; i++){
        max_index = multiply_my(arr,i,max_index);
    }

    return max_index;
}


int main(){
    int i = 1;
    while(i < 101){
        int arr1[200] = {1,0}, arr2[200] = {1,0}, flag = 0;
        int index1 = factorial_my(arr1,i);
        int index2 = factorial(arr2,i);

        for(int j = 0; (j < index1) || (j < index2); j++){
            if(arr1[j] != arr2[j]){
                flag = 1;
            }
        }
        if(flag == 0){
            cout << endl << "Attempt Successful << " << i << "  >> ";
        }
        else {
            cout << endl << "Attempt Unsuccssful for - " << i;
            break;
        }
        i++;
    }

    return 0;
}