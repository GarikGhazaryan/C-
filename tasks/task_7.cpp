#include <iostream>

int main(){
	int N, M;
	std::cin >> N >> M;
	if (!std::cin.fail()){
			if (N<=0||M<=0){
				std::cout<<"size can't be < or = 0"<<std::endl;
			}else{
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
}else{
	std::cout<<"Please input a integer data type "<<std::endl;
}
}
