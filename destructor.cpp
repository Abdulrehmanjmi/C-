#include <iostream>
using namespace std;

class Foo
{
	private:

	public:
		Foo(void)
		{
			cout<<"Foo constructor called"<<endl;
		}
		~Foo()
		{
			cout<<"Foo destructor called"<<endl;
		}
};

int main()
{
	cout<<__func__<<" : Begin"<<endl;
	Foo obj;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
