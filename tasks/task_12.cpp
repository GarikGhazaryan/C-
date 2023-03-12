#include <iostream>

int main(){

int num;
int ar[10]={};

while (true){

	std::cin>>num;

	if (num==-1){
		for(int i=0;i<10;i++){
		std::cout<<i+1<<"  >> >> >>  "<<ar[i]<<"  ps"<<std::endl;
		}
	break;
}	
	ar[num-1]++;
}    
}
