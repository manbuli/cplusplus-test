#include <iostream>

using namespace  std;

class Test
{
private:
	struct Impl;
	//Impl* m_pMpl;
	share_ptr<Impl> m_pMpl;

public:
	Test() ;
	
	~Test();

	void show();

	

};

