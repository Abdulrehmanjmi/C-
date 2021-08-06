#include "headers.h"
#include "declerations.h"

int main()
{
	Distance a, b, c;
	cout<<__func__<<": Begin"<<endl;
	
	a.getDistance();
	b.getDistance();
//	a.getDisplay();
//	b.getDisplay();
	c.getResult(a,b);

	cout<<__func__<<": End"<<endl;
	return 0;
}
