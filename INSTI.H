class institute
	{
	public:
	void quote();
	void loading();
	void intro();
	void mainscreen();
	};



void institute::quote()
{
delay(1000);gotoxy(10,8);
cout<<"A ''Great'' Man once said : ";
delay(3000);
gotoxy(5,10);
cout<<"\"People will scold you for the mistakes you haven't done...";
delay(5000);
cout<<"\n\t\t\tIt depends on you,\n\t\t that how much Time you KILL to Explain them...\"";
delay(5000);gotoxy(50,14);cout<<"-Ankush Garg";
delay(5000);
gotoxy(10,8);cout<<"A ''Great' Man once said:             ";delay(500);
gotoxy(10,8);cout<<"A ''Great Man once said:             ";delay(500);
gotoxy(10,8);cout<<"A ''Grea Man once said:             ";delay(500);
gotoxy(10,8);cout<<"A ''Gre Man once said:             ";delay(500);
gotoxy(10,8);cout<<"A ''Gr Man once said:             ";delay(500);
gotoxy(10,8);cout<<"A ''G Man once said:             ";delay(500);
gotoxy(10,8);cout<<"A Man once said:             ";delay(1000);
}




void institute::intro()
{
int i,j;
for(i=1,j=10;i<25;i++)
{
clrscr();
gotoxy(i,j);
cout<<"*******\n";
gotoxy(i+3,j+1);cout<<"*";
gotoxy(i+3,j+2);cout<<"*";
gotoxy(i+3,j+3);cout<<"*";
gotoxy(i+3,j+4);cout<<"*";
gotoxy(i+3,j+5);cout<<"*";
delay(80);
}


for(i=35,j=1;j<12;j++)
{
gotoxy(i-1,j-1);
cout<<"          ";

gotoxy(i,j);
cout<<"*       *";
gotoxy(i+1,j+1);cout<<"*     *";
gotoxy(i+2,j+2);cout<<"*   *";
gotoxy(i+3,j+3);cout<<"* *";
gotoxy(i+4,j+4);cout<<"*";
delay(100);
}


for(i=70,j=10;i>47;i--)
{
gotoxy(i+1,j);
cout<<"       \n";
gotoxy(i+4,j+1);cout<<" ";
gotoxy(i+4,j+2);cout<<" ";
gotoxy(i+4,j+3);cout<<" ";
gotoxy(i+4,j+4);cout<<" ";
gotoxy(i+1,j+5);cout<<"       \n";

gotoxy(i,j);
cout<<"*******\n";
gotoxy(i+3,j+1);cout<<"*";
gotoxy(i+3,j+2);cout<<"*";
gotoxy(i+3,j+3);cout<<"*";
gotoxy(i+3,j+4);cout<<"*";
gotoxy(i,j+5);cout<<"*******\n";
delay(80);
}

gotoxy(28,17);
cout<<"The    VISIONARY   Institute";
delay(2000);
cout<<"\n\n";delay(100);cout<<"\n\n";delay(100);
cout<<"\n\n";delay(100);cout<<"\n\n";delay(100);
cout<<"\n\n";delay(100);cout<<"\n\n";delay(100);
cout<<"\n\n";delay(100);cout<<"\n\n";delay(100);
cout<<"\n";delay(400);
gotoxy(1,9);
cout<<"********************************************************************************";
delay(1000);
}





void institute::loading()
{
clrscr();
int i,j;
for(i=37,j=8;i<=40;i++,j++)
{
gotoxy(i,j);
cout<<"#";
}
for(i=40,j=11;i<44;i++,j--)
{
gotoxy(i,j);
cout<<"#";
}
gotoxy(32,15);
cout<<"Honest Labour Pays";
gotoxy(35,17);
cout<<"Loading...";

for(i=35;i<45;i++)
	{
	gotoxy(i,7);
	cout<<"*";
	delay(10);
	}
for(i=7;i<12;i++)
	{
	gotoxy(44,i);
	cout<<"*";
	delay(10);
	}
for(i=44;i>34;i--)
	{
	gotoxy(i,12);
	cout<<"*";
	delay(10);
	}
for(i=12;i>6;i--)
	{
	gotoxy(35,i);
	cout<<"*";
	delay(10);
	}

for(i=35;i<45;i++)
	{
	gotoxy(i,7);
	cout<<" ";
	delay(10);
	}
for(i=7;i<12;i++)
	{
	gotoxy(44,i);
	cout<<" ";
	delay(10);
	}
for(i=44;i>34;i--)
	{
	gotoxy(i,12);
	cout<<" ";
	delay(10);
	}
for(i=12;i>6;i--)
	{
	gotoxy(35,i);
	cout<<" ";
	delay(10);
	}

for(i=35;i<45;i++)
	{
	gotoxy(i,7);
	cout<<"*";
	delay(10);
	}
for(i=7;i<12;i++)
	{
	gotoxy(44,i);
	cout<<"*";
	delay(10);
	}
for(i=44;i>34;i--)
	{
	gotoxy(i,12);
	cout<<"*";
	delay(10);
	}
for(i=12;i>6;i--)
	{
	gotoxy(35,i);
	cout<<"*";
	delay(10);
	}

for(i=35;i<45;i++)
	{
	gotoxy(i,7);
	cout<<" ";
	delay(10);
	}
for(i=7;i<12;i++)
	{
	gotoxy(44,i);
	cout<<" ";
	delay(10);
	}
for(i=44;i>34;i--)
	{
	gotoxy(i,12);
	cout<<" ";
	delay(10);
	}
for(i=12;i>6;i--)
	{
	gotoxy(35,i);
	cout<<" ";
	delay(10);
	}
gotoxy(29,17);
cout<<"LOAD Complete";
//getch();
}




void institute::mainscreen()
{
clrscr();
gotoxy(25,1);
cout<<"*******\n";
gotoxy(28,2);cout<<"*";
gotoxy(28,3);cout<<"*";
gotoxy(28,4);cout<<"*";
gotoxy(28,5);cout<<"*";
gotoxy(28,6);cout<<"*";


gotoxy(35,2);
cout<<"*       *";
gotoxy(35,3);cout<<" *     *";
gotoxy(35,4);cout<<"  *   *";
gotoxy(35,5);cout<<"   * *";
gotoxy(35,6);cout<<"    *";

gotoxy(47,1);
cout<<"*******\n";
gotoxy(50,2);cout<<"*";
gotoxy(50,3);cout<<"*";
gotoxy(50,4);cout<<"*";
gotoxy(50,5);cout<<"*";
gotoxy(47,6);cout<<"*******\n";
cout<<"                          The     VISIONARY   Institute\n";
cout<<"********************************************************************************";
}