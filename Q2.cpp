#include <iostream>
using namespace std;

int main(){
	int day,mon;
	cout<<"Month number:(1 for January, 2 for February, and so on):\n";
	cin>>mon;
	cout<<"Day of the Month: \n";
	cin>>day;
	if (day<1 || day> 31 || mon<1 || mon >12){
		cout<<"Invalid Input\n";}
	else if ( mon==2){
		if (day>29)
			cout<<"Invalid Input\n";}
			
	else if ((mon==4||mon==6||mon==9||mon==11)&& (day>30))
			cout<<"Invalid Input\n";
	
	
	else{
		switch (mon){
			case(1):
			case(2):
				cout<<"Winter\n";
				break;
			case(3):
				if (day <=15)
					cout<<"Winter\n";
				else if (day >15)
					cout<<"Spring\n";
				break;		
			case(4):
			case(5):
				cout<<"Spring\n";
				break;
			case(6):{
				if (day==15 || day < 15)
					cout<<"Spring\n";
				else if (day >15)
					cout<<"Summer\n";
				break;}				
			case(7):
			case(8):
				cout<<"Summer\n";
				break;
			case(9):
				if (day <=15)	
					cout<<"Summer\n";
				else if (day >15)
					cout<<"Fall\n";
				break;	
			case(10):
			case(11):
				cout<<"Fall\n";
				break;
			case(12):
				if (day <=15)
					cout<<"Fall\n";
				else if (day <=15)
					cout<<"Winter\n";
				break;}}
return 0;}					
			
			
			
			
			
					
		
