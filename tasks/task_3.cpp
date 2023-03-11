#include <iostream>

int main(){

	int num;
	std::cin >> num;
	for (int i=2; i<num/2; i++)
	{
		int x = num % i;
	     if (x==0){
		     std::cout<<num<< "y parz tiv che"<<std::endl;
		     break;
	}
	     else{
		     if (i==(num/2)-1){
		     std::cout<<num<< "y parz tiv e"<<std::endl;
		     break;
		     }
		  	       }
	         }
}


