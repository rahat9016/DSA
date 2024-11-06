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
