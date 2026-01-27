#include <iostream>
#include <exception>
using namespace std;

class SalaryException{
	public:
		void showMessage(){
			cout<<"salary cannot be negative";
	}

};

int main()
{
	int empno, sal;
	cin>>empno>>sal;
	try
	{
		if (sal<0)
			throw SalaryException();
		else
			cout<<"ready to go";
		
	}	
	
	catch (SalaryExcpetion &e)
	{
		e.showMessage();
	}

	return 0;





}
