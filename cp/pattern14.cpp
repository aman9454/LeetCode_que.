#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
        while (row<=n){
       int col=1;
        while (col<=row)
        {   
            cout<<" ";
            col=col+1;
        }
        int k=1;
        while(k<=n-row){
            cout<<"*";
            k=k+1;
        }
        cout<<endl;
        row=row+1;
        
    }
}