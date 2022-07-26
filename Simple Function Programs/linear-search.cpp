#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    cout << "Enter the element you want to search for: ";
    int key;
    cin >> key;
    
    bool found = linearSearch(arr, 10, key);
    
    if(found){
        cout << "Key is present";
    }
    else{
        cout << "Key is not present";
    }
}

