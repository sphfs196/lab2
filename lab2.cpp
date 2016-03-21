#include"lab2.h"

//	ifstream file("file.in",ios::in);
	void BMI::setHeight(float h)
	{
		H=h;	
	}
	
	void BMI::setMass(float m)
	{
		M=m;
	}

	float BMI::getHeight()
	{
		return H;
	}
	
	float BMI::getMass()
	{
		return M;
	}

	float BMI::returnBMI(float h,float m)
	{
		float B;
		B=m/((h*0.01)*(h*0.01));
		return B;
	}

	string BMI::BMICategory(float B)
	{
		if(B<15.0f)
		{
			return "Very severely underweight";
		}
		if(B>=15.0f&&B<16.0f)
		{
			return "severely underweight";
		}
		if(B>=16.0f&&B<18.5f)
		{
			return "underweight";
		}
		if(B>=18.5f&&B<25.0f)
		{
			return "Normal";
		}
		if(B>=25.0f&&B<30.0f)
		{
			return "Overweight";
		}
		if(B>=30.0f&&B<35.0f)
		{
			return "Obese Class I (Moderately obese)";
		}
		if(B>=35.0f&&B<40.0f)
		{
			return "Obese Class II (Severely obese)";
		}
		if(B>=40.0f)
		{
			return "Obese Class III (Very severely obese)";
		}		
	}	
