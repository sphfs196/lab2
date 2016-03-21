#include"lab2.h"
#include<string>
#include<fstream>

using namespace std;

int main()
{
	ifstream filein("file.in",ios::in);
	BMI calcBMI;
	ofstream fileout("file.out",ios::out);
	float b,h,m;
	string category;
	while(1)
	{
		filein>>h>>m;
		if(h==0&&m==0)
		{
			break;
		}
		
		calcBMI.setHeight(h);
		calcBMI.setMass(m);
		b=calcBMI.returnBMI(h,m);
		category=calcBMI.BMICategory(b);

	
	
	fileout<<b<<" "<<category<<endl;
	}
}
