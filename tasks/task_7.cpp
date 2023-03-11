#include <iostream>

int main(){
int N, M;
std::cin >> N >> M;

for (int i=1;i<=M;i++){

	
	for (int j=1;j<=N;j++){
		if (i==M){	
			std::cout<<"*";
		}else if(i==1){
			std::cout<<"*";
		
		
		}else if(j==1){
			std::cout<<"*";
		
		}else if(j==N){
			std::cout<<"*";
		}else
			std::cout<<" ";
	}
		std::cout<<std::endl;

}


}
