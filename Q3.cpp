#include <iostream>
using namespace std;

int main(){
	float hrd,ts,cc;
	bool flag1=0, flag2=0, flag3=0;
	cout<<"Hardness: ";
	cin>>hrd;
	cout<<"Carbon Content: ";
	cin>>cc;	
	cout<<"Tensile Strength: ";
	cin>>ts;
	if (hrd>50)
		flag1=1;
	if (cc<0.7)
		flag2=1;
	if (ts>5600)
		flag3=1;
	if ((flag1==0 && flag2==0 && flag3==0)==1)
		cout<<"\"Grade 5\""<<endl;		
	else if (((flag1==1 && flag2==0 && flag3==0)==1)||((flag1==0 && flag2==1 && flag3==0)==1)||((flag1==0 && flag2==0 && flag3==1)==1))
		cout<<"\"Grade 6\""<<endl;
	else if (flag1==1){
		if (flag2==1 && flag3==1)
			cout<<"\"Grade 10\""<<endl;
		else if (flag2==1 && flag3==0)
			cout<<"\"Grade 9\""<<endl;
		else if (flag2==0 && flag3==1)
			cout<<"\"Grade 7\""<<endl;}
	else if (flag2==1){
		if (flag3==1 && flag1==0)
			cout<<"\"Grade 8\""<<endl;}
return 0;}
