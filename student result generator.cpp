#include<iostream>
using namespace std;

int main()
{
	int T,E,M,S,SS;
	
	cout<<"Tamil Mark :"<<endl;
	cin>>T;
	cout<<"English Mark :"<<endl;
	cin>>E;
	cout<<"Maths Mark :"<<endl;
	cin>>M;
	cout<<"Science Mark :"<<endl;
	cin>>S;
	cout<<"SocialScience Mark :"<<endl;
	cin>>SS;
	
	int grade =(T+E+M+S+SS)/5;
	
	if (grade>=60)
	{
		cout<<"Pass";
	 } 
	else
	{
		cout<<"Fail";
	}
	
	return 0 ;
}
