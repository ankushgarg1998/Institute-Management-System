class admin:public teacher
	{
	public:
	void vuapply();
	};
//**********************************************************************
//    	Functions  for Administrator Records  (DECLARED in class ADMIN)
//**********************************************************************
int tota;
//////////////////////////////////////////////////////////////////////
void calctota()
	{
	::tota=0;
	student fu;
	ifstream zu("Apply.dat",ios::in|ios::binary|ios::nocreate);
	if(!zu)
		{
		cout<<"Cannot Open FILE!!\n";
		getch();
		exit(0);
		}
	zu.seekg(0);
	while(!zu.eof())
		{
		zu.read((char*)&fu,sizeof(fu));
		++(::tota);
		}
	--(::tota);
	zu.close();
	}
////////////////////////////////////////////////////////////////////////
void admin::vuapply()
	{
	calctota();
	student see;
	ifstream zin1;
	ofstream zout1;
	zin1.open("Apply.dat",ios::in|ios::binary);
	zout1.open("Admitted.dat",ios::app|ios::binary);
	if(!zin1)
		{
		cout<<"No Applications Recieved Yet!!!\n";
		getch();
		exit(0);
		}

	zin1.seekg(0);
	cout<<"\nThe Students who want to join are:\n";
	for(int iu=0;iu<::tota;iu++)
		{
		zin1.read((char*)&see,sizeof(see));
		see.putdata();
		cout<<"\n\nAccept This APPLICATION ? (Y/N)";
		char reply;
		cin>>reply;
		if(reply=='y'||reply=='Y')
			{
			++(::tot);
			see.admno=100+(::tot);
			zout1.write((char*)&see,sizeof(see));
			}
		}
	zin1.close();
	zout1.close();
	::tota=0;
	remove("Apply.dat");
	cout<<"\nNo More Applications!!";
	getch();
	}
