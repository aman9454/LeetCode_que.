#include <iostream>
using namespace std;
int max(int a, int b, int c, int d){
int maximum = max(a, max(b, max(c, d)));
return maximum;
}
int main(){
int a, b, c, d;
cin>>a>>b>>c>>d;
cout<<max(a,b,c,d);
return 0;
}
