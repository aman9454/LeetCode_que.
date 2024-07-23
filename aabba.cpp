#include<iostream>
using namespace std;
int main (){
	int marks [5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter the value of marks of student :"<<i+1;
		cin>>marks[i];
	}
	{
		for(int i=0;i<5;i++)
		{
			cout<<"the value of marks for student is \n"<<i+1<<marks[i];
			
		}
	}
}