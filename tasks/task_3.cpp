#include <iostream>

int main(){
		
        int num;
        std::cout << "Enter a number"<<std::endl;
        std::cin >> num;

        if (std::cin.fail()) {
		std::cout<<"Please input a int"<<std::endl;
    	}

	for (int i=1; i<=num/2; i++)
	{
		int x = num % i;
	     if (x==0 && i!=1){
		     std::cout<<num<< " is not a Prime number"<<std::endl;
		     break;
		}
	     else{
		     if (i==num/2){
		     std::cout<<num<< " is a Prime number"<<std::endl;
		     break;
		     }
        }
	}
}


