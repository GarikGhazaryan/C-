#include <iostream>

int main(){

int num;
std::cin>>num;
int tmp=0;

while (num != 0) {
        int miavor = num % 10;
        num =num/10;
        tmp = (tmp*10 + miavor)*10;
    }

    std::cout << tmp << std::endl;
}
