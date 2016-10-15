class teacher:public student
	{
	public:
	void search();
	void makeas();
	};
//***************************************************************
//    	Functions  for Teacher Records  (DECLARED in class TEACHER)
//****************************************************************
int tot;
//////////////////////////////////////////////////////////////////////
void calctot()
	{
	::tot=0;
	student f;
	ifstream zi("Admitted.dat",ios::in|ios::binary|ios::nocreate);
	if(!zi)
		{
		cout<<"Cannot Open FILE!!\n";
		getch();
		exit(0);
		}
	zi.seekg(0);
	while(!zi.eof())
		{
		zi.read((char*)&f,sizeof(f));
		++(::tot);
		}
	--(::tot);
	zi.close();
	}
////////////////////////////////////////////////////////////////////////

void teacher::makeas()
	{
	ofstream fout("Assign.dat",ios::out);
	cout<<"\nRespected Ma'am, You are requested to type all Questions of Assignment here:\n";
	char assi[10][100],kill='y',ch;int i=0;
	cout<<"\n Type 1st Ques:\n";
	do
		{
		cin.get(ch);
		cin.getline(assi[i],100);
		fout<<assi[i]<<"\n";
		i++;
		cout<<"\nMore Ques ? (Y/N)\n";
		cin>>kill;
		}while(kill=='y'||kill=='Y');

	cout<<"\nThis assigment will be shared with Students";
	}
void teacher::search()
	{
	calctot();
	student sho;
	ifstream zin;
	zin.open("Admitted.dat",ios::in|ios::binary);
	if(!zin)
		{
		cout<<"Cannot Open FILE!!\n";
		getch();
		exit(0);
		}

	zin.seekg(0);
	cout<<"\nThe Names of all the Students are:\n";
	cout<<"\nADMN. NO.\t NAME\n\n";
	for(int i=0;i<::tot;i++)
		{
		zin.read((char*)&sho,sizeof(sho));
		sho.putnam();
		}
	cout<<"Check Detail for Admission No.:\t";
	float admn;char found='n';
	cin>>admn;
	zin.seekg(0);
		while(!zin.eof())
		{
		zin.read((char*)&sho,sizeof(sho));
		if(sho.admno==admn)
			{
			sho.putdata();
			found='y';
			break;
			}

		}
	zin.close();
	if(found=='n')
	cout<<"\nNo Relevant Record for this Admission No. found!!";
	getch();
	}

