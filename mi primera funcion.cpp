#include <iostream>
using namespace std;

float funcion (int x, int y)
{
	float z;
	z=x/y;
	return z;
}

int main ()
{
	int a, b;
	cin>>a>>b;
	int c;
	c=funcion (a,b);
	cout<<c<<endl;
}
