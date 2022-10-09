#include <iostream>
using namespace std;

int main(){
	int a,b,c,d;
	string result;
	cout<<"Number 1: ";
	cin>>a;
	cout<<"Number 2: ";
	cin>>b;
	cout<<"Number 3: ";
	cin>>c;
	cout<<"Number 4: ";
	cin>>d;
	 
	result=((a>b && a>c && a>d)?"Number 1 is largest.":)((b>a && b>c && b>d)?"Number 2 is largest.":)((c>a && c>b && c>d)?"Number 3 is largest.":)((d>a && d>b && d>c)?"Number 4 is greatest.":);
	cout<<result;
	
	
	
	
	
	
	
	
	
	
		
	return 0;}
	
