//Finding Average
//Project 1
// Header File
#include<iostream>
//standardization
using namespace std;
//This code is used to find average
//main function
int main(){
	int m1,m2,m3,m4,m5;
	cout<<"Enter marks of Student";
	cin>>m1>>m2>>m3>>m4>>m5;
	int sum = m1 + m2 +m3 +m4 +m5;
	float avg = (float)sum/5;
	cout<<"Average is : "<<avg;
	float avg1 = (float)((m1+m2+m3+m4+m5))/5;
	cout<<"Average is : "<<avg1;
	return 0;
}



