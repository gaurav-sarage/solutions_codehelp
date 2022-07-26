#include <iostream>
using namespace std;

int arraySum(int num[], int size){
    int sum = 0;
    
    for(int i=0; i<size; i++){
        sum += num[i];
    }
    return sum;
}


int main(){
    int arr[100];
    
    int size;
    cout << "Enter the size of the array: " << " ";
    cin >> size;
    
    cout << "Enter array elements: " << " ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    cout << "Array elements are: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    cout << "Sum of all elements present in the array is: " << arraySum(arr, size);
    cout << endl;
}