#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
#include<conio.h>
using namespace std;
void intro();
class A
{
public:
    char name[100];
    char branch[100];
    int m;
    int net;
    int fee;

    void getdata()
    {
        cout<<"\n\n\n\n\n\n\t\t\t_____________GENERATING MONTHLY LIBRARY PASS_____________";
		cin.ignore();
        cout<<"\n\n\n\t\t\tEnter your name:: ";
        cin.get(name,50);
        cin.ignore();
        cout<<"\n\n\t\t\tEnter the branch of studying:: ";
        cin.get(branch,50);
        cin.ignore();
        cout<<"\n\n\t\t\tEnter validity period in months:: ";
        cin>>m;
        cout<<"\n\n\t\t\tEnter net balance to deposit in the pass:: ";
        cin>>net;
        cout<<"\n\n\t\t\tEnter total amount of the month you have already paid:: ";
        cin>>fee;
        cout<<"\n\n\t\t\tMONTHLY PASS MADE - NOTE DOWN YOUR ID :- B118192";
        cout<<"\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A NICE DAY!!\n\n\n\n ";
    }

    void showdata()
    {   cout<<"\n\n\n\n\n\n\t\t\t______________VIEWING MONTHLY LIBRARY PASS________________";
        cout<<"\n\n\t\t\tNAME:: "<<name;
        cout<<"\n\t\t\tVEHICLE:: "<<branch;
        cout<<"\n\t\t\tAMOUNT:: "<<fee;
        cout<<"\n\t\t\tVALIDITY UPTO:: "<<m<<" MONTHS ";
        cout<<"\n\t\t\tNET BALANCE:: "<<net<<endl;
        if(net>0 && net<=200)
            {cout<<"\n\n\t\t\tRECHARGE YOUR PASS NOW!!";
            cout<<"\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A NICE DAY!!\n\n\n\n ";}
        else if(net>200 && net<=500)
            {cout<<"\n\n\t\t\tA LITTLE MORE AMOUNT IS NEEDED IN THE MONTHLY PASS WALLET !!"<<endl;
            cout<<"\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A NICE DAY!!\n\n\n\n ";}
        else if(net>500 && net<=50000)
            {cout<<"\n\n\t\t\tTHE ACCOUNT BALANCE IS ENOUGH !!"<<endl;
            cout<<"\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A NICE DAY!!\n\n\n\n ";}
        else
            {cout<<"\n\n\t\t\tMONTHLY PASS EXPIRED"<<endl;
            cout<<"\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A NICE DAY!!\n\n\n\n ";}
    }
};
class loco
{
public:
	int yesm(int n)
	{cout<<"\n\t\t\tYour amount is "<<n<<" (KINDLY GIVE CHANGE MONEY OR USE E-CASH)  ";
	cout<<"\n\n\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A HAPPY READING!! ";
	}
	int yesm(int x,int y)
	{cout<<"\n\t\t\tYour amount without monthly pass is "<<x+y;
	cout<<"\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A NICE JOURNEY!!\n\n\n\n ";
	}
};
int main()
{int choice,chse,chose,ch;
char option,retry,choose[20];
option='y';
intro();
system("color B1");
//intro();
system("cls");
cout<<setw(65)<<setfill(' ')<<"LOVELY PROFESSIONAL UNIVERSITY\n\n\n\n"<<' ';
cout<<"\t\t\t         WELCOME TO CENTRAL LIBRARY\n\n";
	do{
	cout<<"\n\t\t\t`````````````````MENU`````````````````````\n\n\n";
	cout<<"\t\t\tEnter '1' to Issue a book\n\t\t\tEnter '2' to Deposit a book \n\t\t\tEnter '3' to access the admin menu\n\t\t\tEnter '4' to exit the program\n";
	cin>>choice;
	if(choice==1)
	{    system("cls");
	    cout<<"\n\n\n\n\n\n\t\t\t_____________________BOOK ISSUE_____________________";
	    cout<<"\n\n\t\t\tEnter the name of the book\n\n";
		cin>>choose;
				if(ch==1)
			{   
			    cout<<"\t\t\tFor single way journey press '1'\n\t\t\tFor two way journey press '2'\n\n";
				cin>>chose;
						if(chose==1)
					{   cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(5000);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(5500);
										}
									
					}
						else
						if(chose==2)
					{   cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(10000);
										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(5000,5500);
										}
										else
										cout<<"invalid";
					}
					else
					cout<<"\t\t\tINVALID CHOICE";
			}
					
				 if(choose==2)
			{
			    cout<<"\t\t\tFor single way journey press '1'\n\t\t\tFor two way journey press '2'\n\n";
				cin>>chose;
						if(chose==1)
					{   cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(2500);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(3000);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
						else
						if(chose==2)
					{  cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(5000);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(3500,2900);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
					else
					cout<<"\t\t\tINVALID CHOICE";
	
			}
			     if(choose==3)
			{
			   cout<<"\t\t\tFor single way journey press '1'\n\t\t\tFor two way journey press '2'\n\n";
				cin>>chose;
						if(chose==1)
					{  cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(500);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(550);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
						else
						if(chose==2)
					{   cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(1000);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(500,550);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
					else
					cout<<"\t\t\tINVALID CHOICE";
	
			}
			     if(choose==4)
			{
			   cout<<"\t\t\tFor single way journey press '1'\n\t\t\tFor two way journey press '2'\n\n";
				cin>>chose;
						if(chose==1)
					{   cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(700);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(850);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
						else
						if(chose==2)
					{  cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(1200);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(900,750);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
					else
					cout<<"\t\t\tINVALID CHOICE";
	
			}
			      if(choose==5)
			{
			   cout<<"\t\t\tFor single way journey press '1'\n\t\t\tFor two way journey press '2'\n\n";
				cin>>chose;
						if(chose==1)
					{   cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(50);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(70);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
						else
						if(chose==2)
					{   cout<<"\t\t\t\tDo you have a monthly pass ?\n\n";
						cout<<"\t\t\t\tIf YES then press '1' or  if NO then press '2'\n\n";
						cin>>chse;
								if(chse==1)
										{loco obb1;
										obb1.yesm(125);

										}
										else
								if(chse==2)
										{loco obb1;
										obb1.yesm(50,65);
										}
										else
										cout<<"\t\t\tINVALID CHOICE";
					}
				
			}
			
	}
	else
	if(choice==2)
	{       system("cls");  
	        fstream file("pass",ios::app);
            A a;
            a.getdata();
            file.write((char*)&a,sizeof(a));
            file.close();
	}
	else
	if(choice==3)
	{system("cls");
	 A a;
            int i=0;
            cin.ignore();
            char name_s[100];
            cout<<"\n\n\n\n\n\n\t\t\t_________________TRACK YOUR MONTHLY PASS_________________";
            cout<<"\n\n\n\t\t\tEnter name which we you have to search:: ";
            cin.get(name_s,100);
            fstream file_in("pass",ios::in);
            while(file_in.read((char*)&a,sizeof(a)))
            {
                if(stricmp(a.name,name_s)==0)
                {
                    a.showdata();
                    i=1;
                }
            }
            file_in.close();
            if(i==0)
                cout<<"\n\n\n\t\t\tNo data found regarding  this name. Get your pass made to avail special offers!!!!"<<endl;
                		}
	else 
	if(choice==4)
	{cout<<"\n\n\t\t\tPLEASE DO VISIT AGAIN...HAVE A HAPPY READING!!\n\n\n\n ";
	exit(1);}
	else
	{
	cout<<"\t\t\tINVALID INPUT GIVEN...";
	exit(1);}
	cout<<"\n\t\t\tWANT TO TRY AGAIN...TO TRY AGAIN PRESS 'y' OR TO EXIT PRESS ANY KEY...\n";
	cin>>retry;
	}while(retry==option);
	return 0;
}
void intro()
{system("color FC");
	cout<<"\n\n\n\n\n\n\t\t\t___________________BOOK DONATION SYSTEM__________________";
	cout<<"\n\n\n\n\t\t\tMADE BY : KUNDAN CHANDRAVANSI";
	cout<<"\n\n\t\t\tSECTION: RK18NZB44";
	cout<<"\n\n\t\t\tPress any key to continue...";
	getch();
}
