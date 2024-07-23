#include<iostream>
using namespace std;

int main() {

    /* 
    int *p =0;
    cout << *p <<endl; 
    
   int i=5;

   int *p =0;
   p = &i;
    
    cout<< p <<endl;
    cout<< *p <<endl;
*/
    int num = 5;
    int a= num;
    cout << "a before "<< num << endl;
    a++;
    cout << "a after "<< num << endl;


    int *p =&num;
    cout <<" before "<< num <<endl;
    (*p)++;
    cout<< "after "<< *p <<endl;


    //copying a pointer
    int *q = p;
    cout << p <<" - "<<q <<endl;
    cout << *p <<" - " << *q <<endl;

    //inp concept

    int i = 3;
    int *t = &i;

    *t= *t +1;
    cout << *t <<endl;
    cout<< "before t "<<t <<endl;
    t= t+1;
    cout<< " after t "<< t <<endl;

}