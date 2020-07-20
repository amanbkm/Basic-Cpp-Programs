#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class cricket
{
	public:
	int runs;
	int wickets;
	int balls_faced;
	int runs_given;
	double overs_bowled;
	double overs;
	int extras;
	char name_bat[20];
	char name_bow[10];
	double economy;
	double strike_rate;
	char date[10];
	char time[10];
	
	void input()
	{
		cout<<"\n Enter Date:";
		gets(date);
		cout<<"\n Enter Time:";
		gets(time);
		cout<<"\nEnter the name of the batsman:";
		gets(name_bat);
		cout<<"\nEnter the name of the Bowler:";
		gets(name_bow);
		cout<<"\nEnter the number of balls faced by Batsman:";
		cin>>balls_faced;		
		cout<<"\nEnter the number of runs given by Bowler:";
		cin>>runs_given;
		cout<<"\nEnter the number of overs bowled by bowler:";
		cin>>overs_bowled;
		cout<<"\nEnter the Runs:";
		cin>>runs;
		cout<<"\nEnter the number of wickets:";
		cin>>wickets;
		cout<<"\nEnter the over";
		cin>>overs;
		cout<<"\nEnter the Extras";
		cin>>extras;
	}
	void cal()
	{
		strike_rate=(runs/balls_faced);
		economy=(runs_given/overs_bowled);
	}
	void display()
	{
		cout<<"Date and Time:";
		cout<<date<<":"<<time;
		cout<<"\nName of Batsman:"<<name_bat;
		cout<<"\nName of Bowler:"<<name_bow;
		cout<<"\nRuns:"<<runs;
		cout<<"\nWickets:"<<wickets;
		cout<<"\nOvers:"<<overs;
		cout<<"\nExtras:"<<extras;
		cout<<"\nEconomy of Bowler:"<<economy;
		cout<<"\nStrike Rate of Batsman:"<<strike_rate;
		
	}
}A;
int main()
{
	A.input();
	A.cal();
	A.display();
	
	return 0;
}
