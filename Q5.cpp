#include <iostream>
using namespace std;

int main(){
	int num1,num2;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	if (num1<1 || num1>36 || num2<1 ||	num2>36){
		cout<<"Invalid Input"<<endl;}
	else	
		switch (num1){
			case(1):
			case(6):
			case(7):
			case(12):
			case(17):
			case(20):
			case(28):
			case(33):
				switch(num2){
					case(1):
					case(6):
					case(7):
					case(12):
					case(17):
					case(20):
					case(28):
					case(33):
						cout<<"Same Color\n";
						break;
					default:
						cout<<"Different Color\n";
						break;}
				break;
			
			case(2):
			case(11):
			case(13):
			case(18):
			case(19):
			case(24):
			case(29):
			case(32):
				switch (num2){
					case(2):
					case(11):
					case(13):
					case(18):
					case(19):
					case(24):
					case(29):
					case(32):
						cout<<"Same Color\n";
						break;
					default:
						cout<<"Different Color\n";
						break;}
				break;
			
			case(3):
			case(10):
			case(14):
			case(23):
			case(25):
			case(30):
			case(31):
			case(36):
				switch (num2){
					case(3):
					case(10):
					case(14):
					case(23):
					case(25):
					case(30):
					case(31):
					case(36):
						cout<<"Same Color\n";
						break;
					default:
						cout<<"Different Color\n";
						break;}
				break;
						
			case(4):
			case(9):
			case(15):
			case(22):
			case(26):
			case(35):
				switch(num2){
					case(4):
					case(9):
					case(15):
					case(22):
					case(26):
					case(35):
						cout<<"Same Color\n";
						break;
					default:
						cout<<"Different Color\n";
						break;}
				break;		
			
			case(5):
			case(8):
			case(16):
			case(21):
			case(27):
			case(34):
				switch (num2){	
					case(5):
					case(8):
					case(16):
					case(21):
					case(27):
					case(34):			
						cout<<"Same Color\n";
						break;
				default:
						cout<<"Different Color\n";
						break;}
				break;}
return 0;}					
