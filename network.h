#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
#include <windows.h>

using namespace std;

int n;
static string x;


network()

 {
 	system("COLOR 1A");
 	cout<<"\tTo get all function work RUN THIS PROGRAM AS ADMINISTRATOR\n";
 	cout<<"########################################################################\n";
 	cout<<"	\t		Network Utility Lite		\n";
 	cout<<"########################################################################\n";
 	cout<<"\n\tUse this utility to manage network\n";
 	a:
 	cout<<"Choose Tools:\n";
 	cout<<"1.Network Statistics\n";
 	cout<<"2.Ping\n";
 	cout<<"3.DNS Lookup\n";
 	cout<<"4.Check IP Address\n";
 	cout<<"5.Kill an Unwanted Process\n:";
 	cin>>n;
 	
 	if(n==1)
	{
		cout<<"1.All Connections\n";
		cout<<"2.Active Connections (Programs)\n";
		cout<<"3.Ethernet Interface Statistics\n";
		cout<<"4.Ethernet Interface Statistics (Details)\n";
		cout<<"5.Active Connections(Programs with PID)\n";
		cout<<"6.Display All Network Routing Table\n";
		cout<<"7.Show All Network Offload State\n";
		
		
		
		cout<<" 	Use 99 to goto main menu.\n:";

 	
		cin>>n;
		if(n==1)
		{
			system("C:\\Windows\\system32\\netstat -an");
			
		}
		if(n==2)
		{
			system("C:\\Windows\\system32\\netstat -b");
			
		}
		if(n==3)
		{
			system("C:\\Windows\\system32\\netstat -e");
			
		}
		if(n==4)
		{
			system("C:\\Windows\\system32\\netstat -es");
			
		}
		if(n==5)
		{
			system("C:\\Windows\\system32\\netstat -ob");
			
		}
		if(n==6)
		{
			system("C:\\Windows\\system32\\netstat -r");
			
		}
		if(n==7)
		{
			system("C:\\Windows\\system32\\netstat -t");
			
		}
		
		if(n==99)
 		{
 		goto a;
 		
		 }
		 n=0;
	 } 	
	 
 	if(n==2)
 	{
 		
 		cout<<"Give Address:\n:";
 		cin>>x;
 		system(("ping " + x).c_str());
 		
	 }
 	if(n==3)
 	{
 		cout<<"Give Address:\n:";
 		cin>>x;
 		cout<<"If you want to stop then type 'quit'	\n";
 		system(("nslookup "+ x).c_str());
	 }
 	if(n==4)
 	{
 		system("C:\\Windows\\system32\\ipconfig");
	 }
 	if(n==5)
 	{
 		cout<<"Give PID to kill the process:";
 		cin>>x;
 		system(("taskkill /F /PID "+ x).c_str());
	 }
	 
	
 	cout<<"   Use 99 to goto main menu.	Or, 0 to Exit\n:";
 	
	cin>>n;
 	
 	if(n==99)
 	{
 		goto a;
 		cout<<"\a";
	 }
	 else
		return 0;
}

