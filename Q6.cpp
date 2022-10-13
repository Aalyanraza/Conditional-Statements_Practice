#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int choice,VIP_price,P_price,F_price,G_price,enc,adult,child,child_bill,adult_bill ;
	long int ID;
	char fam,tkt;

	srand(time(0));

	
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
	
	switch (choice){
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
	else{	
		cout<<"\nVIP: (Ticket Price: "<<VIP_price<<')';
		cout<<"\n1. Imran Khan enclosure (Max 1000 seats)\n   Available seats: "<<rand()%1000;
		cout<<"\n2. Javed Miandad enclosure (Max 1000 seats)\n   Available seats: "<<rand()%1000;
		cout<<"\n3. Javed Akhter enclosure (Max 1000 seats)\n   Available seats: " <<rand()%1000;
		cout<<"\n4. Azhar Mehmood enclosure (Max 1000 seats)\n   Available seats: "<<rand()%1000;
		cout<<"\n\nPremium: (Ticket Price: "<<P_price<<')';
		cout<<"\n5. Shoaib Akhtar enclosure (Max 3000 seats)\n   Available seats: "<<rand()%3000;
		cout<<"\n\nFirst Class: (Ticket Price: "<<F_price<<')';
		cout<<"\n6. Sohail Tanveer enclosure(Max 3000 seats)\n   Available seats: "<<rand()%3000;
		cout<<"\n\nGeneral: (Ticket Price: "<<G_price<<')';
		cout<<"\n7. Imran Buksh enclosure(Max 2500 seats)\n   Available seats: "<<rand()%2500;
		cout<<"\n8. Yasir Arafat enclosure(Max 2500 seats)\n   Available seats: "<<rand()%2500<<endl;
		
		cout<<"\n\nChoose enclosure: ";
		cin>>enc;
		
		if (enc<1 || enc>8){
			cout<<"Invalid response\n";
			return 0;}
		else{
			cout<<"Press F for family. Otherwise press S.\n";
			cin>>fam;
			
			if ((fam=='f'||fam=='F'||fam=='S'||fam=='s')==0){
				cout<<"Invalid Response\n";
				return 0;}
			else{ 
				switch (fam){
					case('f'):
					case('F'):
						cout<<"No. of children:(Max. 5) ";
						cin>>child;
						cout<<"No. of adults:(Max 4) ";
						cin>>adult;
						if (adult>4 || adult<0 || child>5 || child <0){
							cout <<"Invalid Responce\n";
							return 0;}
						else{
							cout<<"Enter ID:(Format:-13***********):- ";
							cin>>ID;
							switch (enc){
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
							cout<<"Total bill: "<<(child_bill*0.8)+(adult_bill*0.9)<<endl;break;}
																																							
					case ('s'):
					case ('S'):
						cout<<"No. of adult tickets:(Max. 8) ";
						cin>>adult;
						if (adult<0 ||adult>8){
							cout<<"Invalid response";
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
																		
							if (adult>4)
								cout<<"Total bill: "<<adult_bill*0.9<<endl;
							else
								cout<<"Total bill: "<<adult_bill<<endl;break;
					default:
						cout<<"Invalid Response\n";}}}}				
return 0;}}