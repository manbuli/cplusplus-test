#include <iostream>

using namespace  std;

class Test
{
public:
	Test() :m_val(0)
	{
		cout<<"Test()"<<endl;
	}

	// virtual	Test(int i) : m_val(i)
	// {
	// 	cout<<"virtual	Test(int i)"<<endl;
	// }
	
	~Test()
	{
		cout<<"~Test()"<<endl;
	}

	void show()
	{
		cout<<"show() ===> "<<m_val<<endl;
	}
	
private:
		int m_val;
};

int main(int argc, char const *argv[])
{
	cout<<"main entry"<<endl;
	Test t;
	t.show();

	// error: constructors cannot be declared virtual 
	// Test tt(100);
	// tt.show();

	cout<<"main end"<<endl;
	return 0;
}
