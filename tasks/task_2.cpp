#include <iostream>

int main() {
    int num;
    int tmp;

    std::cin >> num;
	if (!(std::cin.fail())){
    	while (num != 0) {
        	int miavor = num % 10;
       		num =num/10;
        	tmp = tmp*10 + miavor;
    	}
    std::cout << tmp << std::endl;

	}else{
		std::cout<<"please input an integer"<<std::endl;
	}
}
