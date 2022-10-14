#include <iostream>
using namespace std;

int main(){
	int num1,num2;
	//Taking Inputs
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	//Input Validation
	if (num1<1 || num1>36 || num2<1 ||	num2>36){
		cout<<"Invalid Input"<<endl;}
	
	else	
		switch (num1){// If number 1 is green
			case(1):
			case(6):
			case(7):
			case(12):
			case(17):
			case(20):
			case(28):
			case(33):
				switch(num2){// If number 2 is green
					case(1):
					case(6):
					case(7):
					case(12):
					case(17):
					case(20):
					case(28):
					case(33):
						cout<<"Same Color(Green)\n";
						break;
					default://otherwise
						cout<<"Different Color\n";
						break;}
				break;
			
			case(2):// If number 1 is red
			case(11):
			case(13):
			case(18):
			case(19):
			case(24):
			case(29):
			case(32):
				switch (num2){// If number 2 is red
					case(2):
					case(11):
					case(13):
					case(18):
					case(19):
					case(24):
					case(29):
					case(32):
						cout<<"Same Color(Red)\n";
						break;
					default://otherwise
						cout<<"Different Color\n";
						break;}
				break;
			
			case(3):// If number 1 is blue
			case(10):
			case(14):
			case(23):
			case(25):
			case(30):
			case(31):
			case(36):
				switch (num2){// If number 2 is blue
					case(3):
					case(10):
					case(14):
					case(23):
					case(25):
					case(30):
					case(31):
					case(36):
						cout<<"Same Color(Blue)\n";
						break;
					default://otherwise
						cout<<"Different Color\n";
						break;}
				break;
						
			case(4):// If number 1 is orange
			case(9):
			case(15):
			case(22):
			case(26):
			case(35):
				switch(num2){// If number 2 is orange
					case(4):
					case(9):
					case(15):
					case(22):
					case(26):
					case(35):
						cout<<"Same Color(Orange)\n";
						break;
					default://otherwise
						cout<<"Different Color\n";
						break;}
				break;		
			
			case(5):// If number 1 is grey
			case(8):
			case(16):
			case(21):
			case(27):
			case(34):
				switch (num2){	// If number 1 is grey
					case(5):
					case(8):
					case(16):
					case(21):
					case(27):
					case(34):			
						cout<<"Same Color(Grey)\n";
						break;
				default://otherwise
						cout<<"Different Color\n";
						break;}
				break;}
return 0;}					
