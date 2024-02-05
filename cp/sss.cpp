#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    int n;
    string number[] = {"one","two","three","four","five","six","seven","eight","nine"};

    cin >>n;
    if (n>=1 && n<=9){
        cout << number[n-1];
    } else {
    cout << "Greater than 9";
    }

    
    

    return 0;
}