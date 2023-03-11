#include <iostream>

int main() {
    int num;
    int tmp=0;

    std::cin >> num;
   // std::cout <<num<< std::endl;
    int dig=num;

    while (num != 0) {
        int miavor = num % 10;
        num =num/10;
        tmp = tmp*10 + miavor;
    }

   // std::cout << tmp << std::endl;
   // std::cout <<num<< std::endl;
 
if (tmp==dig){
	
    std::cout << "polindrome" << std::endl;
   


}else
    std::cout << "not polindrome" << std::endl;
}
