class aboutus
	{
	public:
	void about();
	};
void aboutus::about()
{
clrscr();
char chhc,email[100],name[100],comment[200];
int i,j;
cout<<"\t\t\t\tABOUT US \n\n";
delay(1000);
char typewrite1[8][100]={"The Children Education and Learning Society, the apex body of NACC, was set up  ",
	  "in the year 1944 during the pre-independence era when the elders thought that   "     ,
	  "Indian culture, heritage, tradition and ethos must be preserved and fostered and"    ,
	  "in order to achieve these objectives, it became obligatory  for the Society to  "   ,
	  "educate the young people.Thus, the Society was registered under the Registration"  ,
	  "of Societies Act, 1860.Today the affairs of the Society are managed by the Board" ,
	  "of Management consisting of eminent educationists and entrepreneur, headed by   ",
	  "                           ANKUSH GARG.                              "};

for(i=0;i<8;i++)
	{
	for(j=0;j<100;j++)
		{
		cout<<typewrite1[i][j];
		delay(10);
		}
	cout<<"\n";
	}
delay(1000);
cout<<"\t\t    A MESSAGE FROM THE DIRECTOR\n\n";

char typewrite2[2][100]={"Most things can wait, the child cannot. Now is the time, his mind is being",
		" developed, to him, we cannot say tomorrow, his name is today."};
for(i=0;i<2;i++)
	{
	for(j=0;j<100;j++)
		{
		cout<<typewrite2[i][j];
		delay(10);
		}
	cout<<"\n";
	}
cout<<"\t\t\t\tANY COMMENTS";
cout<<"\tY/N\t";
cin>>chhc;
if(chhc=='y'||chhc=='Y')
{
cout<<"\nYour Comment : \t";
gets(comment);
cout<<"\n";
cout<<"\nYour Name : \t";
gets(name);
cout<<"\nYour email ID: \t";
gets(email);
for(int i=0;i<80;i++)
cout<<"_";
cout<<"\n\t\t\t\t THANK YOU";
getch();
}
else;
}
