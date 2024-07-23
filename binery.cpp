#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }

        // go to right part 
        if(key > arr[mid]) {
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
    
}
    int main() {
        int even[6] = {2,8,5,7,12,18};
        int odd[5] = {3,8,11,14,16};

        int evenIndex = binarySearch(even,6,7);

        cout << "Index of 7 is "<<evenIndex << endl;

        int oddIndex = binarySearch(odd,5,16);

        cout<< " Index of 16 is "<<oddIndex << endl;

        return 0;
    }
