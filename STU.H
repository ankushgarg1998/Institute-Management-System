class student
	{
	char name[40];
	int stand;
	int age;
	char fathname[40];
	char address[50];
	float percentage;
	public:
	float admno;
	void getdata();
	void putnam();
	void putdata();
	void timetable();
	void vuas();
	void apply();
	};

void student::vuas()
	{
	ifstream fin("Assign.dat",ios::in);fin.seekg(0);
	cout<<"\nRespected Students, You are requested to solve all Questions of Assignment here:\n";
	char asi[10][100];
	for(int nt=0;nt<10;nt++)
		{
		fin.getline(asi[nt],100);
		cout<<asi[nt];
		cout<<"\n";
		}
	getch();
	}
void student::getdata()
	{
	cout<<"Enter Admission No.:           ";	cin>>admno;
	char ch;cin.get(ch);
	cout<<"Enter Name :                   ";	cin.getline(name,40);
	cout<<"Enter Standard (Class):        ";	cin>>stand;
	cout<<"Enter Age:                     ";	cin>>age;
	cin.get(ch);
	cout<<"Enter Father's Name:           ";	cin.getline(fathname,40);

	cout<<"Enter Address:                 ";	cin.getline(address,50);
	cout<<"Enter Percentage in last Class:";	cin>>percentage;
	}

void student::putdata()
	{
	cout<<"\n\nAdmission No.:             "<<admno;
	cout<<"\nName :                       "<<name;
	cout<<"\nStandard (Class):            "<<stand;
	cout<<"\nAge:                         "<<age;
	cout<<"\nFather's Name:               "<<fathname;
	cout<<"\nAddress:                     "<<address;
	cout<<"\nPercentage in last Class:    "<<percentage;
	}
void student::putnam()
	{
	cout<<admno<<"\t"<<name<<"\n";
	}

void student::timetable()
{
//clrscr();
char choice[20];
int batch;
do
{
cout<<"\n\t\tEnter Batch Number(1/2/3/4/5):\t";
cin>>batch;
if(batch>5)
	{
	cout<<"\n\tNo Such BATCH Exists...";
	getch();
	}
}while(batch>5);
cout<<"\t\tEnter The Day:\t";
cin>>choice;
cout<<endl;
if(batch==1)
	{

	if(strcmpi(choice,"sunday") == 0)
	{
	cout<<"\tNo class for today!!!"<<endl;
	cout<<"\t  Use your time Judiciously!!!";
	}

	else if(strcmpi(choice,"monday") == 0)
	{
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"tuesday") == 0)
	{
	cout<<"\t\t\tChemistry"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"wednesday") == 0)
	{
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"thursday") == 0)
	{
	cout<<"\t\t\tChemistry"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"friday") == 0)
	{
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"saturday") == 0)
	{
	cout<<"\tNo class for today!!!"<<endl;
	cout<<"\t  Use your time Judiciously!!!";
	}

	else
	{
	cout<<"\tError!!! No Match Found";
	}
	}


else

	{
	if(strcmpi(choice,"sunday") == 0)
	{
	cout<<"\tNo class for today!!!"<<endl;
	cout<<"\t  Use your time Judiciously!!!";
	}

	else if(strcmpi(choice,"monday") == 0)
	{
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"tuesday") == 0)
	{
	cout<<"\t\t\tChemistry"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"wednesday") == 0)
	{
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"thursday") == 0)
	{
	cout<<"\t\t\tChemistry"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"friday") == 0)
	{
	cout<<"\t\t\tMaths"<<endl;
	cout<<"\t\tTiming: 04:30 To 06:00"<<endl<<endl;
	cout<<"\t\t\tPhysics"<<endl;
	cout<<"\t\tTiming: 06:15 To 07:45"<<endl;
	}

	else if(strcmpi(choice,"saturday") == 0)
	{
	cout<<"\tNo class for today!!!"<<endl;
	cout<<"\t  Use your time Judiciously!!!";
	}

	else
	{
	cout<<"\t\tError!!! No Match Found";
	}
}
getch();
}
