#include <iostream>
#include <cmath>


int main(){
int n=20;
int i;
int num,a,aa,x,sum;

std::cin >> num;

	for (i=1;i<=n;i++)
		{
		x=pow(10,(n-i));
		a=num/x;
		aa=num%x;
		num=aa;
		sum=sum+a;
	
		}

std::cout << sum <<std::endl;
}
