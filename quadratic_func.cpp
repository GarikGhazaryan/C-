#include <iostream>
#include <cmath>
int discriminant (int,int,int);
void disk0 (int);
void x1_equal_x2(int, int, int);
void x1not_equal_x2(int, int, int);

int main()
{
	int a,b,c;
	std::cin >> a >> b >> c;
	int d = discriminant(a,  b, c);
	
	disk0 (d);

	x1_equal_x2(d, a, b);
	
	x1not_equal_x2(d, a, b);
}


int discriminant(int a, int b, int c)
{
	int d=(b*b)-4*a*c;
	return d;
}


void disk0 (int d)
{

	if (d<0)
        std::cout<<"d<o"<<std::endl;
}


void x1_equal_x2(int d, int a, int b)
{
	if (d==0)
	std::cout<<"x1=x2= "<< (0-b)/2*a <<std::endl;
}


void x1not_equal_x2(int d, int a, int b)
{
	if (d>0)
	{
	
	std::cout << "x1=" << ((0-b)+sqrt(d))/2*a << std::endl;
	std::cout << "x2=" << ((0-b)-sqrt(d))/2*a << std::endl;
	}
}







