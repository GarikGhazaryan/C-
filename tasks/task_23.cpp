#include <iostream>


int main(){
	int n;
	std::cin >> n;

	int *arin=new int [n];
	for (int i = 0; i < n; i++) 
		std::cin >> arin[i];

	std::cout<<"number of element to dell" <<std::endl;
	int m;
	std::cin >> m;
		
	int *arout=new int [n-1];

	if (m<=n && m>0){
				int j=0;
		for (int i=0; i<n; i++){
			if(i!=m-1){
			arout[i-j]=arin[i];
			
			}else{
					j++;
			}
		}	
		for (int i = 0; i < n-1; i++) 
			std::cout << arout[i]<<" ";
			std::cout<<"--  "<<m<<" -st element are deletid"<<std::endl;
	
	}else{
		std::cout<<"out of array range"<<std::endl;
	}
	delete arin;
	delete arout;

}
