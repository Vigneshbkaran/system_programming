#include <iostream>
using namespace std;

class Cal
{
	private:
		int a,b;

	public:
		Cal()
		{
			a = 10;
			b = 2;
		}

		int add()
		{
			return a+b ;
		}

		int sub()
		{
			return a-b ;
		}
		
		int mul()
		{
		    return a*b ;
		}

		int div()
		{
			return a/b ;
		}
		
};

int main()
{
	Cal op;

	cout << "Addition       : " << op.add() << endl;
	cout << "Subtraction    : " << op.sub() << endl;
	cout << "Multiplication : " << op.mul() << endl;
	cout << "Division       : " << op.div() << endl;
	return 0;
}


