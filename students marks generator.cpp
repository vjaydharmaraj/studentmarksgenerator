#include<iostream>
using namespace std;

class student 
{
	double tamil,english,maths,science,sscience;
	public:
		
	void marks(double t, double e , double m  , double s , double ss )
	{
		tamil=t;
		english = e;
		maths = m;
		science = s;
		sscience = ss;
		
	}
	
	void grade()
	{
		double grade = (tamil + english + maths  + science + sscience)/5;
		
		cout<<"Percentage of student is :"<<grade<<"%"<<endl;
		
		if(grade<60)
		{
			cout<<"FAIL"<<endl;
		}
		else{
			cout<<"PASS"<<endl;
		}
	}
	
};

int main()
{
	student s1;
	s1.marks(60.9,60,80,60.7,60);
	s1.grade();
	
	
	student s2;
	s2.marks(20.6,20.5,13,40,39);
	s2.grade();
}
