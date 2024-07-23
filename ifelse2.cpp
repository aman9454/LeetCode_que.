#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"enter the character ";
    cin>>ch;
    
    if(islower(ch)){
        cout<<"LOWER CASE";
    }
   else if(isupper(ch)){
        cout<<"HIGHER CASE";
    }
    else if(isdigit(ch)){
        cout<<"DIGIT";
    }
    else{
        cout<<"other character";
    }
    
}