#include <iostream>
#include <cmath>



int main(){
int a,b,c;
std::cin >> a >> b >> c;

int d=(b*b)-4*a*c;

if (d<0){
	std::cout<<"d<o"<<std::endl;
	}
if (d==0){

	std::cout<<"x1=x2= "<< (0-b)/2*a <<std::endl;
	}

if (d>0){
	
	std::cout << "x1=" << ((0-b)+sqrt(d))/2*a << std::endl;
	std::cout << "x2=" << ((0-b)-sqrt(d))/2*a << std::endl;
		

	}
}
