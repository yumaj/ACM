#include<iostream>
#include<cstdlib>
using namespace std;

class a
{
	public:
		a(const a &e)
		{
			cout << "b = " << b << endl;
			b = e.b;
			cout << " b2 = " << b << endl;
		}
		
	private:
		int b;
};

int main()
{
	a b(a c);
	system("pause");
}
