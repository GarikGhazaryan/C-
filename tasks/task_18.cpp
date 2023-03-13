#include <iostream>
#include <cmath>
int main(){
int p;
int k;
int t;
std::cout<<"mianish-1, erknish-2, eranish-3, qaranish-4"<<std::endl;
std::cin>>k;
if(k==2){
	std::cout<<"erknish Armstrongi tiv chka"<<std::endl;
	p=100;
	t=10;
}else if(k==3){
	p=1000;
	t=100;
}else if (k==4){
	p=10000;
	t=1000;
}else if (k==1){
	p=10;
	t=1;
}


for(int i=t;i<p;i++){
	int num=i;
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
			std::cout <<in<<std::endl;
		}
}
}

