#include <iostream>
using namespace std;

class Cal
{
	private:
		int a,b;

	public:
		Cal()
		{
			//int a = 10, b = 2;
                        cout << "CALCULATOR " << endl;
		}

		void add(int a ,int b)
		{
			cout << "Addition : " << a+b << endl;
		}

		void sub(int a,int b)
		{
			cout << "Subtraction : " << a-b << endl;
		}
		
		void mul(int a, int b)
		{
			cout << "Multiplication : " << a*b << endl;
		}

		void div(int a, int b)
		{
			cout << "Division : "<< a/b <<endl;
		}
		
};

int main()
{
	Cal op;
	op.add(10,2);
        op.sub(10,2);
        op.mul(10,2);
        op.div(10,2);
	return 0;
}


