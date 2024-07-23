#include<iostream>
using namespace std;

//function
     void printArray(int arr[], int size){

        cout<<"Printing the array "<< endl;
        //print the array 
        for(int i=0; i<size ;i++){
            cout << arr[i]<< " ";
        }
        cout<<" Printing Done "<<endl;
     } 

int main (){
    int number[15];
    cout<<"value of 6th index "<<number[6] <<endl;
    cout<<"value of 15th index "<<number[14] <<endl;

     int sec[3] = {2,4,6};
     cout<<"value of 2nd index "<< sec[2] <<endl;

     int third[15] = {2,7};
     printArray(third,5);

     int forth[6]={0};
     
     printArray(forth,6);
     
 
     

     cout<<"every thing is fine "<<endl;

return 0;
}