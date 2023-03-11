#include <iostream>
#include <cmath>


int main(){

int a;
int b;
std::cin>>a>>b;
int n=0;
while (true){
	n++;
	int z=b/pow(10,n);
	if (z==0)
	{
		break;
	}
}
	int numb=(a*pow(10,n))+b;
	std::cout<<numb<<std::endl;
}
