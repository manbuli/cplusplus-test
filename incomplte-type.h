#include <iostream>

using namespace  std;

class Test
{
private:
	struct Impl;
	Impl* m_pMpl;

public:
	Test() ;

	// virtual	Test(int i) : m_val(i)
	// {
	// 	cout<<"virtual	Test(int i)"<<endl;
	// }
	
	~Test();

	void show();

	

};

