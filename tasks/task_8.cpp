#include <iostream>

int main(){
int N;

std::cin >> N;

for (int i=1;i<=2*N;i++){
	if (i<=N){
	
	for (int j=1;j<=N;j++){

		if (i>=j){
			std::cout<<"*";

		}else{
			std::cout<<" ";
		}
	}
	}else{
		int x=1;
	for (int j=N;j>=1;j--){
		

		if (j<=i-N){
			std::cout<<"*";

		}else{
			std::cout<<" ";
		}
		x+=2;
	}
	}
		std::cout<<std::endl;
}


}


