#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int choice,VIP_price,P_price,F_price,G_price,enc,adult,child,child_bill,adult_bill ;
	long int ID;
	char fam,tkt;
	int a,b,c,d,e,f,g,h,total;
	srand(time(0));
	a=rand()%1000;
	b=rand()%1000;
	c=rand()%1000;
	d=rand()%1000;
	e=rand()%1000;
	f=rand()%1000;
	g=rand()%1000;
	h=rand()%1000;
	//Menu 1
	cout<<"1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium\n(7pm-10.15pm)\n";
	cout<<"2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium\n(8pm-11.15pm)\n";
	cout<<"3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium\n(7pm-10.15pm)\n";
	cout<<"4. 1 Mar 2020 – Islamabad United v Karachi Kings,Pindi Cricket Stadium\n(7pm-10.15pm\n";	 	    
	cout<<"5. 2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium\n(7pm-10.15pm)\n";
	cout<<"6. 5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium\n(7pm-10.15pm)\n";
	cout<<"7. 7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium\n(2pm-5.15pm)\n";	
	cout<<"8. 8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium\n(2pm-5.15pm)\n";
	
	cout<<"Enter your choice(1-8): ";
	cin>>choice;
	
	switch (choice){// Price for each choice
		case(1):
		case(2):
		case(3):
			VIP_price=3000,P_price=1500,F_price=1000,G_price=500;
			break;
		case(4):
		case(7):
			VIP_price=2000,P_price=1000,F_price=500,G_price=250;
			break;
		case(5):
		case(6):
		case(8):
			VIP_price=1500,P_price=1000,F_price=500,G_price=250;
			break;}
		
	
	if (choice>8 || choice <1){
		cout<<"Invalid Response\n";
		return 0;}
	else{// Menu 2	
		cout<<"\nVIP: (Ticket Price: "<<VIP_price<<')';
		cout<<"\n1. Imran Khan enclosure (Max 1000 seats)\n   Available seats: "<<a;
		cout<<"\n2. Javed Miandad enclosure (Max 1000 seats)\n   Available seats: "<<b;
		cout<<"\n3. Javed Akhter enclosure (Max 1000 seats)\n   Available seats: " <<c;
		cout<<"\n4. Azhar Mehmood enclosure (Max 1000 seats)\n   Available seats: "<<d;
		cout<<"\n\nPremium: (Ticket Price: "<<P_price<<')';
		cout<<"\n5. Shoaib Akhtar enclosure (Max 3000 seats)\n   Available seats: "<<e;
		cout<<"\n\nFirst Class: (Ticket Price: "<<F_price<<')';
		cout<<"\n6. Sohail Tanveer enclosure(Max 3000 seats)\n   Available seats: "<<f;
		cout<<"\n\nGeneral: (Ticket Price: "<<G_price<<')';
		cout<<"\n7. Imran Buksh enclosure(Max 2500 seats)\n   Available seats: "<<g;
		cout<<"\n8. Yasir Arafat enclosure(Max 2500 seats)\n   Available seats: "<<h<<endl;
		
		cout<<"\n\nChoose enclosure: ";
		cin>>enc;
		
		if (enc<1 || enc>8){
			cout<<"Invalid response\n";
			return 0;}
		else{// Family or Adults
			cout<<"Press F for family. Otherwise press S.\n";
			cin>>fam;
			
			if ((fam=='f'||fam=='F'||fam=='S'||fam=='s')==0){
				cout<<"Invalid Response\n";
				return 0;}
			else{ 
				switch (fam){
					case('f'):
					case('F')://Number of tickets
						cout<<"No. of children:(Max. 5) ";
						cin>>child;
						cout<<"No. of adults:(Max 4) ";
						cin>>adult;
						total=child+adult;
						switch (enc){
							case 1:
								if ((total)>a){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 2:
								if ((total)>b){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 3:
								if ((total)>c){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 4:
								if ((total)>d){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 5:
								if ((total)>e){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 6:
								if ((total)>f){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 7:
								if ((total)>g){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 8:
								if ((total)>h){
									cout<<"Invalid Responce\n";
									return 0;}
								break;}
								
						if (adult>4 || adult<0 || child>5 || child <0){
							cout <<"11Invalid Responce\n";
							return 0;}
						else{
							cout<<"Enter ID:(Format:-13***********):- ";
							cin>>ID;
							switch (enc){// Calculating Bill
								case(1):
								case(2):
								case(3):
								case(4):
									adult_bill=adult*VIP_price;
									child_bill=child*VIP_price;
									break;									
								case(5):
									adult_bill=adult*P_price;
									child_bill=child*P_price;
									break;								
								case(6):
									adult_bill=adult*F_price;
									child_bill=child*F_price;
									break;								
								case(7):
								case(8):
									adult_bill=adult*G_price;
									child_bill=child*G_price;
									break;}	
							//Total Bill
							cout<<"Total bill: Rs."<<(child_bill*0.8)+(adult_bill*0.9)<<endl;break;}
																																							
					case ('s'):
					case ('S')://Taking number of tickets
						cout<<"No. of adult tickets:(Max. 8) ";
						cin>>adult;
						switch (enc){
							case 1:
								if (adult>a){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 2:
								if (adult>b){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 3:
								if (adult>c){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 4:
								if (adult>d){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 5:
								if (adult>e){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 6:
								if (adult>f){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 7:
								if (adult>g){
									cout<<"Invalid Responce\n";
									return 0;}
								break;
							case 8:
								if (adult>h){
									cout<<"Invalid Responce\n";
									return 0;}
								break;}						
						if (adult<0 ||adult>8){
							cout<<"Invalid response\n";
							return 0;}
						else{
							switch (enc){
								case(1):
								case(2):
								case(3):
								case(4):
									adult_bill=adult*VIP_price;
									break;									
								case(5):
									adult_bill=adult*P_price;
									break;								
								case(6):
									adult_bill=adult*F_price;
									break;								
								case(7):
								case(8):
									adult_bill=adult*G_price;
									break;}
							//Total bill											
							if (adult>4)
								cout<<"Total bill: Rs."<<adult_bill*0.9<<endl;
							else
								cout<<"Total bill: Rs."<<adult_bill<<endl;break;
					default:
						cout<<"Invalid Response\n";}}}}				
return 0;}}