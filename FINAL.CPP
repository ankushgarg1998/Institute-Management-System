#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>
#include<process.h>
#include<ctype.h>
#include<dos.h>

#include<insti.h>
#include<stu.h>
#include<teach.h>
#include<paren.h>
#include<admin.h>
#include<about.h>
#include<cred.h>

void main()
	{
	clrscr();
	int ch,ch1,ch2,ch3,ch4;
	void apply();
	institute obj;
	obj.quote();
	obj.loading();
	obj.intro();
	do
	{	obj.mainscreen();
		cout<<"\n\t\t\t\t  MAIN MENU";
		cout<<"\n\n\t\t01. STUDENTS";
		cout<<"\t\t\t02. TEACHERS";
		cout<<"\n\n\t\t03. ADMINISTRATION";
		cout<<"\t\t04. PARENTS";
		cout<<"\n\n\t\t05. ABOUT US";
		cout<<"\t\t\t06. CREDITS";
		cout<<"\n\n\t\t07. EXIT";
		cout<<"\n\n\tSelect Your Option (1-7) \t";
		cin>>ch;
		clrscr();
		switch(ch)
		{
		//////////////////STUDENTS/////////////////////////////
		case 1 :obj.loading();
			do
			{
			student obj1;
			obj.mainscreen();
			cout<<"********************************************************************************";
			cout<<"\n\t\t\t\t  STUDENT'S MENU";
			cout<<"\n\n\t\t\t\t01. TIME TABLE ";
			cout<<"\n\n\t\t\t\t02. ASSIGNMENTS";
			cout<<"\n\n\t\t\t\t03. APPLY FOR TVI";
			cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
			cout<<"Select Your Option (1-4) \t";
			cin>>ch1;
			switch(ch1)
			{
			case 1 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				obj1.timetable();
				break;
			case 2 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				obj1.vuas();
				break;
			case 3 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				apply();
				break;
			case 4 :
				break;
			default:
				cout<<"\nPlease Enter a VALID option!!!";
				getch();
				break;
			}
			}while(ch1!=4);
			break;

		//////////////////////TEACHERS///////////////////////////
		case 2 :obj.loading();
			int j1=1;//This is a JUGGAD to prevent large changes.
			do
			{
			teacher obj2;
			int p1=0;
			if(j1==1)
				{
				obj.mainscreen();
				cout<<"********************************************************************************";
				cout<<"\n\n\t\t\tEnter Teacher's password\t";
				cin>>p1;
				}

			if(p1==981||p1==0)
				{
				j1=2;
				obj.mainscreen();
				cout<<"********************************************************************************";
				cout<<"\n\n\t\t\t\t TEACHERS MENU";
				cout<<"\n\n\t\t\t\t01. ASSIGNMENTS";
				cout<<"\n\n\t\t\t\t02. SEARCH STUDENT";
				cout<<"\n\n\t\t\t\t03. TIME TABLE";
				cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
				cout<<"Select Your Option (1-4) \t";
				cin>>ch2;
				}
			else
				{
				cout<<"\n\nWrong PASSWORD";
				getch();
				ch2=4;
				}
			switch(ch2)
			{
			case 1 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				obj2.makeas();
				break;
			case 2 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				obj2.search();
				break;
			case 3 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				obj2.timetable();
				break;
			case 4 :
				break;
			default:
				cout<<"\nPlease Enter a VALID option!!!";
				getch();
				break;
			}
			}while(ch2!=4);
			break;
		////////////////////////ADMIN/////////////////////////
		case 3: int j2=1;//This is a JUGGAD to prevent large changes.
			obj.loading();
			do
			{
			admin obj3;
			int p2=0;
			if(j2==1)
				{
				obj.mainscreen();
				cout<<"********************************************************************************";
				cout<<"\n\n\t\t\tEnter ADMINSTRATOR's password\t";
				cin>>p2;
				}
			if(p2==935||p2==0)
				{
				j2=2;
				obj.mainscreen();
				cout<<"********************************************************************************";
				cout<<"\n\n\t\t\t\t  ADMIN'S MENU";
				cout<<"\n\n\t\t\t\t01. ADMIT STUDENTS";
				cout<<"\n\n\t\t\t\t02. SEARCH STUDENT";
				cout<<"\n\n\t\t\t\t03. Exit\n\n\t";
				cout<<"Select Your Option (1-3) \t";
				cin>>ch3;
				}
			else
				{
				cout<<"\n\nWrong PASSWORD";
				getch();
				ch3=3;
				}
			switch(ch3)
			{
			case 1 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				obj3.vuapply();
				break;
			case 2 :
				obj.mainscreen();
				cout<<"********************************************************************************";
				obj3.search();
				break;
			case 3 :
				break;
			default :
				cout<<"\nPlease Enter a VALID option!!!";
				getch();
				break;
			}
			}while(ch3!=3);
			break;
			///////////////////PARENTS////////////////////////
		case 4 :obj.loading();
			do
			{
			parent obj4;
			obj.mainscreen();
			cout<<"********************************************************************************";
			cout<<"\n\t\t\t\t  PARENT'S MENU";
			cout<<"\n\n\t\t\t\t01. LIST OF TEACHERS";
			cout<<"\n\n\t\t\t\t02. TIME TABLE";
			cout<<"\n\n\t\t\t\t03. APPLY FOR TVI";
			cout<<"\n\n\t\t\t\t04. Exit\n\n\t";
			cout<<"Select Your Option (1-4) \t";
			cin>>ch4;
			switch(ch4)
				{
				case 1 :
					obj4.list();
					break;
				case 2 :
					obj.mainscreen();
					cout<<"********************************************************************************";
					obj4.timetable();
					break;
				case 3 :
					obj.mainscreen();
					cout<<"********************************************************************************";
					apply();
					break;
				case 4 :
					break;
				default :
					cout<<"\nPlease Enter a VALID option!!!";
					getch();
					break;
				}
			}while(ch4!=4);
			break;
			//////////////////ABOUT US//////////////////////
		case 5 :
			obj.loading();
			aboutus a;
			a.about();
			break;

			////////////////////CREDITS/////////////////////
		case 6 :
			obj.loading();
			credits c;
			c.creds();
			break;
		default :
			cout<<"\a";
			break;
		}

    }while(ch!=7);

}

/////////////////////////////////////////////////////////////////////////
void apply()
	{
	student shim;
	ofstream zout3;
	zout3.open("Apply.dat",ios::app|ios::binary);
	if(!zout3)
	{
	cout<<"Cannot Open FILE!!\n";
	getch();
	exit(0);
	}
	cout<<"Enter 0 (zero) in Admission No. if you are a new Student.\n";
	shim.getdata();
	zout3.write((char*)&shim,sizeof(shim));
	cout<<"Your Application is Recieved. You will be Admitted soon...";
	zout3.close();
	getch();
	}
////////////////////////////////////////////////////////////////////////////