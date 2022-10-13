#include <iostream>
using namespace std;

int main(){
	int number_of_inputs;
	string result;
	cout<<"No. of inputs(3 or 4): ";
	cin>>number_of_inputs;
	int a, b, c, d;
	cout<<"Number 1: ";
	cin>>a;
	cout<<"Number 2: ";
	cin>>b;
	cout<<"Number 3: ";
	cin>>c;
	cout<<"Number 4: ";
	cin>>d;

	result = (number_of_inputs == 3 && a>b && a>c) ?"Number 1 is largest.\n":(number_of_inputs == 3 && b>a && b>c)?"Number 2 is largest.\n" :(number_of_inputs == 3 && c>a && c>b )?"Number 3 is largest.\n":(number_of_inputs == 4 && a>b && a>c && a>d)? "Number 1 is largest\n":(number_of_inputs == 4 && a<b && b>c && b>d)? "Number 2 is largest\n":(number_of_inputs == 4 && c>b && a<c && c>d)? "Number 3 is largest\n":(number_of_inputs == 4 && d>b && d>c && a<d)? "Number 4 is largest\n":"Invalid Input\n";
	cout<<result;
return 0;}
