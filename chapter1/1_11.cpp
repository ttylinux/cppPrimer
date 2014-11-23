#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int a;
	int b;
	int temp;

	cout << "Enter two integer :" << endl;

	cin >> a >> b;

	if (a == b)
	{

		cout << " the input integer must not the same." << endl;
	}
	else if (a > b)
	{
		 temp = b;
		while (temp <= a)
		{
			cout << temp++ << endl;
		}
	}
	else
	{
		temp = a;
		while (temp <= b)
		{
			cout << temp++ << endl;
		}
	}

	return 0;
}