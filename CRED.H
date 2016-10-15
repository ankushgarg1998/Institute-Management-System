class credits
	{
	public:
	void creds();
	};

void credits::creds()
{
clrscr();
char a[40][80]={"                     ...CREDITS...",
		"               **************************",
		"\n",
		"                 Heartful Thanks to",
		"    Central Board of Secondary Education (CBSE)",
		"for providing a great platform to display programming",
		"    skills, and unleash the developer within!!",
		"\n",
		"\n",
		"   Congratulations!! to RAINBOW ENGLISH SR. SEC. SCHOOL",
		" for the Grand Success of the Project which took 4 months",
		"and enormous amount of hard & Smart Work for it completion.",
		"\n",
		"\n",
		"                   Highly Obliged...",
		"                     Mrs. Ahuja",
		"      for showing us way wherever we were stuck.",
		"\n",
		"\n",
		"\n",
		"                 Humbly Presented by:",
		"\n",
		"\n",
		"\n",
		"\n                                                         ___",
		"      /\\     |\\      |    |   /   |     |   |       |    |       ",
		"     /  \\    |  \\    |    | /     |     |   |___    |____|       ",
		"    /----\\   |    \\  |    | \\     |     |       |   |    |       ",
		"   /      \\  |      \\|    |   \\    \\___/     ___|   |    |",
		"                                    ",
		"       ____                    ___    ____             ",
		"      |             /\\        |   |  |               ",
		"      |   __       /  \\       |___|  |   __                   ",
		"      |     |     /----\\      |\\     |     |               ",
		"      |_____|    /      \\     |  \\   |_____|                  ",
		};
for(int i=0;i<37;i++)
	{
	gotoxy(13,25);
	cout<<a[i];
	delay(500);
	cout<<"\n";
	}
getch();

}
