#include <iostream>

using namespace  std;

class Test
{
public:
	Test()
	{
		cout<<"Test()"<<endl;
	}
	~Test()
	{
		cout<<"~Test()"<<endl;
	}

	void show()
	{
		cout<<"show()"<<endl;
	}
	
};

int main(int argc, char const *argv[])
{
	cout<<"main entry"<<endl;
//goto END1;
	Test t;
// END1:
	t.show();
	cout<<"main end"<<endl;
	return 0;
}
