#include <iostream>
using namespace std;
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

	typedef int PUBINT;

private:
	typedef int PRIINT;
protected:
	typedef int PR0INT;
	
};

Test::PUBINT gI = 100;

// typedef int Test::PRIINT’ is private
// Test::PRIINT priI = 101;
//  error: ‘typedef int Test::PR0INT’ is protected
// Test::PR0INT proI = 102;


int main(int argc, char const *argv[])
{
	cout<<"main entry"<<endl;
//goto END1;
	Test t;
// END1:
	t.show();
	cout<<"main end"<<gI<<endl;
	// cout<<"main end"<<gI << " " <<priI << " " <<proI << " " <<endl;
	return 0;
}
