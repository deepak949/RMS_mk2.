  #include<fstream.h>
  #include<graphics.h>
  #include<string.h>
  #include<iostream.h>
  #include<conio.h>
  #include<dos.h>
  #include<iomanip.h>
  #include<process.h>
  #include<stdlib.h>
  struct roll
	{
	char na[20],des[20];
	int co;
	float sal,tax,hra,gr,da,np;
	}oll;
 fstream pay;
 char c;
 int l;
 char choice;

  void dev()
 {
   clrscr();
   for(int x=50;x>=20;x--)
    {
	textcolor(x+10/5);
	delay(160);
	gotoxy(x,4);
	cputs("  R M S  MARK II ");
	gotoxy(x,6);
	cputs("  DEVELOPED  BY  :  ");
	gotoxy(x,8);
	textcolor(3);
	cputs("TINU - 4920140 ");
	gotoxy(x,10);
	textcolor(4);
	cputs("RUPESH - 4920130 ");
	textcolor(5);
	gotoxy(x,12);
	cputs("DEEPAK - 4920108 ");
     }
  gotoxy(40,24);
  textcolor(12);
  cputs("PRESS ANY KEY TO CONTINUE");
  getch();
  }
 void main()
 {
 clrscr();
 dev();
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
errorcode=graphresult();
if(errorcode!=grOk)
{
cout<<grapherrormsg(errorcode)<<"\n";
getch();
}

for(int i=0;i<=2000;i++)
putpixel(random(640),random(480),6);
setfillstyle(CLOSE_DOT_FILL,MAGENTA);
bar(0,0,10,479);
bar(0,0,639,10);
bar(630,0,640,479);
bar(0,470,640,479);
setcolor(GREEN);
settextstyle(10,0,4);
outtextxy(125,1," W E L C O M E  ");
outtextxy(275,75,"T O     ");
outtextxy(45,150," R E M U R A T I O N ");
outtextxy(105,225," M A N A G I N G");
outtextxy(75,300,"  S O F T W A R E ");
settextstyle(5,0,3);
setcolor(6);
outtextxy(300,400,"Press any key to continue.... ");
getch();
cleardevice();

 do
 {
 cleardevice();
 setcolor(1);
 rectangle(0,0,639,479);
 setcolor(1);
 rectangle(2,2,637,477);
 setcolor(1);
 rectangle(4,4,635,475);
 setcolor(1);
 rectangle(6,6,633,473);
 setcolor(1);
 rectangle(8,8,631,471);
 setcolor(1);
 rectangle(10,10,629,469);
 setcolor(1);
 rectangle(12,12,627,467);
 setcolor(1);
 rectangle(14,14,625,465);
 setcolor(1);
 rectangle(16,16,623,463);
 setcolor(1);
 rectangle(18,18,621,461);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 setcolor(YELLOW);
 outtextxy(250,100,"\n*MENU*");

 outtextxy(250,150,"\n************");

 outtextxy(150,200,"\n 1.REPORT ");

 outtextxy(150,250,"\n 2.PAY SLIP ");

 outtextxy(150,300,"\n 3.ADD ");

 outtextxy(150,350,"\n 4.EXIT ");

 outtextxy(150,400,"\n ENTER YOUR CHOICE(1,2,3,4):");

 gotoxy(74,25);
 choice=getch();
 cleardevice();

  switch(choice)
  {		case'1':

			cleardevice();
			rectangle(0,0,600,450);
			line(0,50,600,50);
			line(0,90,600,90);
			gotoxy(30,3);
			cout<<" EMPLOYEE DETAILS ";
			gotoxy(3,5);
			cout<<"CODE";
			gotoxy(10,5);
			cout<<"NAME";
			gotoxy(20,5);
			cout<<"POST";
			gotoxy(30,5);
			cout<<"BASIC";
			gotoxy(40,5);
			cout<<"GROSS PAY";
			gotoxy(52,5);
			cout<<"DEDUCTION";
			gotoxy(67,5);
			cout<<"NETPAY";
			line(50,90,50,450);
			line(140,90,140,450);
			line(220,90,220,450);
			line(290,90,290,450);
			line(390,90,390,450);
			line(490,90,490,450);
			int k=7;
			pay.open("oll.dat",ios::in);
			if(!pay)
			 {
			 cout<<"\n\nFile Not Found...\nProgram Terminated!";
			 exit(0);
			 }
			pay.seekg(0);
			while(!pay.eof())
			{
			pay.read((char*)&oll,sizeof(oll));
				if(!pay.eof())
				{
				gotoxy(3,k);
				cout<<oll.co;

				gotoxy(10,k);
				cout<<oll.na;
				gotoxy(20,k);
				cout<<oll.des;
				gotoxy(30,k);
				cout<<oll.sal;
				gotoxy(42,k);
				cout<<oll.gr;
				gotoxy(52,k);
				cout<<oll.tax;

				gotoxy(67,k);
				cout<<oll.np;
				k=k+1;
				}
			}
			getch();
			pay.close();
			cleardevice();
			break;

		case'2':
			cleardevice();
			int eno,flag=0;
			cout<<"\n Enter employee number to be searched :";
			cin>>eno;
			pay.open("oll.dat",ios::in);
			if(!pay)
			 {
			 cout<<"\n\nFile Not Found...\nProgram Terminated!";
			 exit(0);
			 }
			pay.seekg(0);
	while(!pay.eof())
	 {
	   pay.read((char*)&oll,sizeof(oll));

	    if(!pay.eof())
	     {
		if(oll.co==eno)
		    {
			    cout<<"\n|*********************************************";
			    cout<<"\n|       RMS MARK II PVT. ltd.                 ";
			    cout<<"\n|*********************************************";
			    cout<<"\n|EMPLOYEE CODE                :"<<oll.co;
			    cout<<"\n|NAME OF EMPLOYEE             :"<<oll.na;
			    cout<<"\n|EMPLOYEE DESIGNATION         :"<<oll.des;
			    cout<<"\n|BASIC SALARY                 :"<< oll.sal;
			    cout<<"\n|DEARNESS ALLOWANCE           :"<<oll.da;
			    cout<<"\n|HOUSE RENT ALLOWANCE         :"<<oll.hra;
			    cout<<"\n|GROSS PAY                    :"<<oll.gr;
			    cout<<"\n|TAX                          :"<<oll.tax;
			    cout<<"\n|NET PAY                      :"<<oll.np;
			    cout<<"\n|*********************************************";
			    flag=1;
			    getch();
			    break;
		    }
					}
				}
				if(flag==0)
				{
				cleardevice();
				cout<<"\n\n\n\n\n\n\t\t\tNo such employee";
				getch();
				}
				cleardevice();
				pay.close();
				break;
		case'3':
			char ch;
			pay.open("oll.dat",ios::in|ios::out|ios::app);//ios::ate|ios::app);
			if(!pay)
			 {
			 cout<<"\n\nFile Not Found...\nProgram Terminated!";
			 exit(0);
			 }
			do
			{
			cleardevice();
			cout<<"\n NAME:";
			cin>>oll.na;
			cout<<"\n EMPLOYEE CODE";
			cin>>oll.co;
			cout<<"\n EMPLOYEE DESIGNATION:";
			int ch;
			cout<<"\n1.SUBSTAFF";
			cout<<"\n2.CLERK";
			cout<<"\n3.MANAGER";
			cout<<"\n ENTER YOUR CHOICE:(1/2/3)";
			cin>>ch;
			switch(ch)
			{
			case 1:
			oll.sal=1000;
			oll.hra=100;
 
				oll.da=oll.sal*1.10;
				oll.tax=2*(oll.sal)/100.0;
				strcpy(oll.des,"SUBSTAFF");
			break;
			case 2:
 
			oll.sal=2000;
			oll.hra=200;
			oll.da=200;
			oll.tax=10*(oll.sal)/100.0;
			strcpy(oll.des,"CLERK");
			break;
			case 3:
			oll.sal=14000;
			oll.hra=400;
			oll.da=400;
			oll.tax=20*(oll.sal)/100.0;
			strcpy(oll.des,"MANAGER");
			break;
			default:cout<<"\n INPUT IS INVALID";
			break;
			}
		       oll.gr=oll.sal+oll.hra+oll.da;
		      oll.np=oll.gr-oll.tax;
		      pay.write((char*)&oll,sizeof(oll));
		      cout<<"\n TO CONTINUE ADDING DATA(Y/N):";
		      cin>>c;
			}while((c=='Y')||(c=='y'));
			 pay.close();
			break;
  case'4':
	    exit(0);
 }
 }
 while(choice!=4);
 
  closegraph();
 }
