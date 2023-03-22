#include <iostream>

class Number
{
	double num;

		public:


	void set_num(int num)
	{
		this->num=num;
	}

	int get_num()
	{
		return num;
	}

	void print()
	{
			std::cout<<num<<std::endl;	
	}

	Number(double num)
	{
		this->num=num;
	}

	Number operator+(const Number& other)
	{
		Number tmp=num+other.num;
		return tmp;
	}

	Number operator-(const Number& other)
	{
		Number tmp=num-other.num;
		return tmp;
	}

	Number operator/(const Number& other)
	{
			if (other.num != 0){
				Number tmp=(num/other.num);
				return tmp;
			}
				return 0;
	}

	Number operator*(const Number& other)
	{
		Number tmp=num*other.num;
		return tmp;
	}
};
int main()
{
	Number n1(10);
	Number n2(15);
	Number n3=n1+n2;
	Number n4=n1-n2;
	Number n5=n1/n2;
	Number n6=n1*n2;


	n1.print();
	n2.print();
	n3.print();
	n4.print();
	n5.print();
	n6.print();
}
