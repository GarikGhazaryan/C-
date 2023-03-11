#include <iostream>

int main(){
int N, M;
char S[1];
std::cin >> N >> M >> S;

for (int i=1;i<=M;i++){

	
	for (int j=1;j<=N;j++){
		if (i==M){	
			std::cout<<S[0];
		}else if(i==1){
			std::cout<<S[0];
		
		
		}else if(j==1){
			std::cout<<S[0];
		
		}else if(j==N){
			std::cout<<S[0];
		}else
			std::cout<<" ";
	}
		std::cout<<std::endl;

}


}
