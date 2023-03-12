#include <iostream>

int main (){
int n1=0;
int n2=1;
int ni;
int tmp=0;
std::cin>>ni;

if (ni==1){
	std::cout<<n1<<std::endl;
}else if(ni==2){
	std::cout<<n2<<std::endl;
}else{
	for(int i=1;i<ni-1;i++){
		tmp=n1+n2;
		n1=n2;
		n2=tmp;
	}
	std::cout<<ni<<"-rd fibonacci = "<<tmp<<std::endl;

}
}
