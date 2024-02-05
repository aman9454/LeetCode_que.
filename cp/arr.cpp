#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N[1000] = {};
    int sizeofN = sizeof(N)/sizeof(N[0]);
    cin>>sizeofN;
    N[sizeofN] = {};
    for(int i{0};i<=sizeofN; ++i){
        cin>>N[i];
    }
    
    for(int j = 1; j <=sizeofN; j++){
    cout<<N[sizeofN-j]<<" ";
}

     
    return 0;
}