#include <iostream>
#include<string>
using namespace std;

int main(){
    string ans;
    cout<<"Starting General Diagnosis Program.\n";
    cout<<"Recording symptoms information - DONE.\n";//1
    cout<<"Rebooting server to see if condition still exists - DONE.\n";
    cout<<"Is this a newly installed server?: ";
    cin>>ans;
    
    if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
        cout<<"Invalid Input\n";
    
    if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes"){
        cout<<"Please reseat any components that may have come loose during shipping - DONE.\n";//2
        cout<<"Rebooting the server - DONE.\n";
        cout<<"Does the condition still exist?: ";
        cin>>ans;
    
        if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){
            cout<<"Recording all actions taken for future - DONE.\n";//1
            cout<<"Congratulations, your server problems are solved.\n";
            return 0;}
    
        else if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes") 
            ans ="n";
    
        else 
            cout<<"Invalid input\n";
        }
    
    if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){    
        cout<<"Were options added or was the configuration changed recently?\n";
        cin>>ans;
    
        if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes"){
            cout<<"Isolating what has changed - DONE\n";//6
            cout<<"Verifying if it was installed correctly - DONE \n";
            cout<<"Restoring server to the last known working state or original shipped configuration - DONE\n";
            cout<<"Does the condition still exist?: ";
            cin>>ans;
    
            if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){
                cout<<"Recording all actions taken for future - DONE.\n";
                cout<<"Congratulations, your server problems are solved.\n";
                return 0;}
    
            else if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
                cout<<"Invalid Input\n";}
    
        else if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
                cout<<"Invalid Input";        
    
        if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){
            cout<<"Checking for Service Notifications - DONE\n";//3
            cout<<"Downloading the latest software and firmware from the HP website\n";//4
            cout<<"Does the condition still exists: ";
            cin>>ans;
    
            if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){
                cout<<"Recording all actions taken for future - DONE.\n";
                cout<<"Congratulations, your server problems are solved.\n";
                return 0;}
    
            else if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
                cout<<"Invalid Input\n";}
    
        if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes"){
            cout<<"Isolating and minimizing  the memory configuration - DONE\n";//5
            cout<<"Does the condition still exist?: ";
            cin>>ans;
    
            if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){
                cout<<"Recording all actions taken for future - DONE.\n";
                cout<<"Congratulations, your server problems are solved.\n";
                return 0;}
    
            else if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
                cout<<"Invalid Input\n";
    
            else if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes"){
                cout<<"Breaking server down to minimal configuration\n";
                cout<<"Does the condition still exist?: ";
                cin>>ans;
    
                if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
                    cout<<"Invalid Input";
    
                else if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){
                    cout<<"Adding  one part at a time back to configuration to isolate faulty configuration.\n";
                    cout<<"Does the condition still exist?: ";
                    cin>>ans;
    
                    if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
                        cout<<"Invalid Input\n";
    
                    else if (ans=="n" || ans=="N" || ans=="No" || ans=="no"){
                        cout<<"Recording all actions taken for future - DONE.\n";
                        cout<<"Congratulations, your server problems are solved.\n";
                        return 0;}
    
                    else if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes"){     
                        cout<<"Ensure following information is available\n1. Survey Configuration Snapshots\n";//8
                        cout<<"2. OS Event Log File\n3. Full Crash Dump\n";
                        cout<<"Call HP Service Provider\n";}}//9
    
                else if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes"){
                        cout<<"Troubleshooting or Replacing Basic Server Spare Parts - DONE\n";//7
                        cout<<"Does the condition still exist?: ";
                        cin>>ans;
    
                        if ( (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes" || ans=="n" || ans=="N" || ans=="No" || ans=="no" ) ==0)
                            cout<<"Invalid Input\n";    
    
                        else if (ans=="y" || ans=="Y" || ans=="Yes" || ans=="yes"){     
                            cout<<"Ensure following information is available\n1. Survey Configuration Snapshots\n";
                            cout<<"2. OS Event Log File\n3. Full Crash Dump\n";
                            cout<<"Call HP Service Provider\n";}
    
                        else if (ans=="n" || ans=="N" || ans=="No" || ans=="no")
                            cout<<"Recording Symptom or Error Information on Repair tag if Sending Back a Repaired Part.\n";}}}}
return 0;}


























































