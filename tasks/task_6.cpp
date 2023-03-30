#include <iostream>


int main(){

	int a;
	std::cin>>a;
	if (!std::cin.fail()){
	int tmp=a;
		if (a%2==0&&a!=0)
		{	
			while (tmp%2==0){
				tmp=tmp/2;
				if (tmp==1){
					std::cout<<"is a power of 2"<<std::endl;
				}
			}

			if (tmp>1){
				std::cout<<"is not a power of 2"<<std::endl;
			}
		
		}else
			std::cout<<"is not a power of 2"<<std::endl;
	
	}else{
		std::cout<<"you need to enter integer"<<std::endl;
	}
}
