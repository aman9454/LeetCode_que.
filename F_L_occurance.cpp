#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key ){

    int s= 0, e= n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while(s<=e){

        if (arr[mid]== key){
            ans = mid;
            e = mid - 1;
        } 
        else if(key >arr[mid]) {   //Right me jsao
             s = mid+1;
        }
         else if(key < arr[mid]) {   //left me jsao
             s = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
} 

int lastOcc(int arr[], int n, int key) {

    int s=0, e=n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if (key >arr[mid]) {
            s= mid+1;
        }
        else if (key < arr[mid]) {
            s= mid-1;
        }

        mid = s + (e-s/2);
    }
    return ans;
}

int main(){

    int even[11] = {1,2,2,3,4,3,3,3,3,4,5};

    cout<<" First Occurance of 3 is at Index "<< firstOcc(even,11,3) <<endl;
     cout<<" First Occurance of 3 is at Index "<< lastOcc(even,11,3) <<endl;

return 0;
}

