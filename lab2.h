#include<string>
#include<iostream>
using namespace std;
class BMI
{
	public:
	void setHeight(float h);
	void setMass(float m);
	float getHeight();
	float getMass();
	float returnBMI(float h,float m);
	string BMICategory(float b);


	private:
	float H,M;
	string categoryString; 
	
};
