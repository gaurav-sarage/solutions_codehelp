#include <iostream>
using namespace std;


void reverse(int num[], int n){
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        swap(num[start], num[end]);
        start++;
        end--;
    }
}

// data type is void since we are not returning a value
void printArray(int num[], int n){
    for(int i=0; i<n; i++){
        cout << num[i] << " ";
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int arr1[9] = {1,2,3,4,5,6,7,8,9};
    
    reverse(arr, 6);
    reverse(arr1, 9);
    
    printArray(arr, 6);
    cout << endl;
    printArray(arr1, 9);
}