#include <iostream>

int main() {
    int num;
    int tmp;
	int dig;
    std::cin >> num;
	if (!(std::cin.fail())){
    	dig=num;

    	while (num != 0) {
        	int miavor = num % 10;
        	num =num/10;
        	tmp = tmp*10 + miavor;
    	}
 
		if (tmp==dig){
    		std::cout << "polindrome" << std::endl;
		}else
    		std::cout << "not polindrome" << std::endl;

	}else{
		std::cout<<"Please input a digite"<<std::endl;
	}
}
