#include <iostream>

int main(){
int N;

std::cin >> N;
if (!std::cin.fail()&&N>0){
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
}else if(N<0){
		std::cout<<"num must by > 0"<<std::endl;
}else{
		std::cout<<"Num must by a integer and > 0"<<std::endl;}

}
