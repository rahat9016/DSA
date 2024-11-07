// 2. Linear Search 
#include <iostream>
using namespace std;

int linearSearchAlgorithom(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}
int main() {

    int arr[] = {1,3,5,6,6};
    int target = 55;
    int size = 5;
    
    int target_value = linearSearchAlgorithom(arr, size, target);
    cout<<target_value;
    
    return 0;
}

// 2. Reverse  Linear Search 
#include <iostream>
using namespace std;
int main() {
    
    
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int start =0, end = size - 1;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
