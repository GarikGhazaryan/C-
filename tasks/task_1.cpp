#include <iostream>
#include <cmath>

long get_mun_count(long);
void get_sum(long,long);

int main(){
	
	long num,sum,n;
	std::cin >> num;
	
	n=get_mun_count(num);
	get_sum(n,num);
}


long get_mun_count(long num)
{
	long n=0;
	while (true)
	{
		n++;
		long z=num/pow(10,n);
		if (z==0)
		{
			break;
		}
	}

	return n;
}


void get_sum(long n, long num)
{
	long sum=0;
	for (long i=1;i<=n;i++)
		{
		long x=pow(10,(n-i));
		long a=num/x;
		long aa=num%x;
		num=aa;
	        sum=sum+a;
		}

std::cout << "sum=  "<< sum <<std::endl;

}


