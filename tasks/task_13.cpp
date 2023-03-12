#include <iostream>

int main(){
int ar[4]={};
int num;
std::cin>>num;

for (int i=0; i<4;i++){
	ar[i]=num%2;
	num=num/2;
}
for (int i=3; i>=0;i--){

	std::cout<<ar[i];
}
}
