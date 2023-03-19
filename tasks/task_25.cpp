#include <iostream>


int main(){
	int n;
	std::cout<<"input array size" <<std::endl;
	std::cin >> n;
	int *arin=new int [n];
	std::cout<<"intup array content" <<std::endl;

	for (int i = 0; i < n; i++) 
		std::cin >> arin[i];

	std::cout<<"enter steps to right" <<std::endl;
	int m;
	std::cin >> m;
	for (int i=0; i<n;i++){
		std::cout<<arin[i]<<" ";
	}
		std::cout<<std::endl;

	int tmp;
	while (m!=0){
	for (int i=0; i<n;i++){
		if(i==0)	
			tmp=arin[n-1];
		arin[n-1-i]=arin[n-2-i];
		if(i==n-1)
				arin[0]=tmp;
	}
	m--;
	}

	for (int i=0; i<n;i++){
		std::cout<<arin[i]<<" ";
	
	}
	delete arin;

}
