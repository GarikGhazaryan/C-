#include <iostream>
#include <cmath>


int main(){

	int a;
	int b;
	std::cin>>a>>b;
	if (!std::cin.fail()){
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
	}else{
		std::cout<<"Please input a integer type of data"<<std::endl;
	}
}
