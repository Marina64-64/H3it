#include <iostream>
using namespace std;
int my_sum(int a, int b);
int sum(int a, int b, int c);
int main()
{
	cout << "Welcome students" << endl;
	cout << "Let's try new concepts" << endl;
	cout << "learning git is fun" << endl;
}
int my_sum(int a, int b)
{
	return a + b;
}
int my_sum(int a, int b, int c)
{
	return a + b + c;
}
