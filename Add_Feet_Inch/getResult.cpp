#include "headers.h"
#include "declerations.h"


int Distance::getResult(Distance a, Distance b)
{
	cout<<__func__<<": Begin"<<endl;
	
	feet = a.feet+b.feet;
	inch = a.inch+b.inch;

	if(inch>11)
	{
		feet++;
		inch = inch-12;
	}
	cout<<"feet = "<<feet<<endl<<"inch = "<<inch<<endl;

	cout<<__func__<<": End"<<endl;
	return 0;
}
