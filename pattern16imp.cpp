#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //1st triangle
        int j=1;
        while (j<=row)
        {   
            
            cout<<n-row;
            j=j+1;
        }
        cout<<endl;
        row=row+1;
    }
}

