#include <iostream>
#include "incomplte-type.h"
using namespace  std;


struct Test::Impl
{
	Impl()
	{
		cout<<"Impl()"<<endl;
	}
	int i;
	~Impl()
	{
		cout<<"~Impl()"<<endl;
	}
};


	Test::Test() 
	{
		cout<<"Test(int i)"<<endl;
		m_pMpl = new Impl();

	}

	
	Test::~Test()
	{
		cout<<"~Test()"<<endl;
		//delete m_pMpl;
	}

	void Test::show()
	{
		cout<<"show() ===> "<<endl;
	}





int main(int argc, char const *argv[])
{
	cout<<"main entry"<<endl;
	Test t;
	t.show();

	cout<<"main end"<<endl;
	return 0;
}



// main entry
// Test(int i)
// Impl()
// show() ===> 
// main end
// ~Test()