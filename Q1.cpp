#include <iostream>
using namespace std;

int main(){
	int input;
	string result;
	cout<<"No. of inputs(3 or 4): ";
	cin>>input;
	if (input==4){
		int a,b,c,d;
		cout<<"Number 1: ";
		cin>>a;
		cout<<"Number 2: ";
		cin>>b;
		cout<<"Number 3: ";
		cin>>c;
		cout<<"Number 4: ";
		cin>>d;
		result=(a>b && a>c && a>d)?"Number 1 is largest.\n":(b>a && b>c && b>d)?"Number 2 is largest.\n":(c>a && c>b && c>d)?"Number 3 is largest.\n":(d>a && d>b && d>c)?"Number 4 is greatest.\n":"Invalid Input\n";}
	else if (input==3){
		int a,b,c,d;
		cout<<"Number 1: ";
		cin>>a;
		cout<<"Number 2: ";
		cin>>b;
		cout<<"Number 3: ";
		cin>>c;
		result=(a>b && a>c)?"Number 1 is largest.\n":(b>a && b>c)?"Number 2 is largest.\n":(c>a && c>b )?"Number 3 is largest.\n":"Invalid Input\n";}
	else
		cout<<"Invalid Input\n";
	cout<<result;
return 0;}
	
