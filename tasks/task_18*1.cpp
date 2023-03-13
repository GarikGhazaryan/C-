#include <iostream>
#include <cmath>
int main(){


int num;
std::cin>>num;
int in=num;
int n=0;
while (true)
{
	n++;
	int z=num/pow(10,n);
	if (z==0)
	{
		break;
	}
}

int z=0;
	for (int i=1;i<=n;i++)
	{
		int x=pow(10,(n-i));
		int a=num/x;
		int aa=num%x;
		num=aa;
		z=z+(pow(a,n));

	}
		if(in==z){
			std::cout <<in<< "    is a Armstrong number "<<std::endl;
		}else{
			std::cout <<in<< "    is not a Armstrong number "<<std::endl;
		}
}
