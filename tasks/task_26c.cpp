#include <iostream>

int zero_count(int);

int main(){
	int n;
	std::cin>>n;

	std::cout<<zero_count(n)<<std::endl;
}

int zero_count(int n){
    int count = 0;
    while(n > 0){
        int a = n % 16;
        n =n/16;
        	if(a == 0){
            	count++;
        	}
    }
    return count;
}

