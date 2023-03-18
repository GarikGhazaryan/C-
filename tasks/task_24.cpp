#include <iostream>


int main(){
	int n;
	std::cout<<"input array size" <<std::endl;
	std::cin >> n;
	int *arin=new int [n];
	std::cout<<"intup array content" <<std::endl;

	for (int i = 0; i < n; i++) 
		std::cin >> arin[i];

	std::cout<<"set new digit pasition" <<std::endl;
	int m;
	std::cin >> m;
		
	std::cout<<"digit to add" <<std::endl;
	int k;
	std::cin >> k;

	int *arout=new int [n+1];

	if (m==n+1){
		for (int i=0;i<n;i++){
			arout[i]=arin[i];
			if(i==n-1)
				arout[i+1]=k;
		}
	}else if(m==1){
		for (int i=0;i<n+1;i++){
			if (i==0){
				arout[i]=k;
			}else{
				arout[i]=arin[i-1];
			}
		}
	}else if (m<n+1 && m>1){
		int j=0;
		for (int i=0; i<n+1; i++){
				if(i>=0 && i<m){
					arout[i]=arin[i];
				}
				if (i==m-1){
					arout[i]=k;
					arout[i+1]=arin[i];
				}
				if(i>m && i<n+1){
					arout[i]=arin[i-1];
				}
				 
		}
	}else
			std::cout<<"out of array size"<<std::endl;
		
		for(int i=0;i<n;i++)
			std::cout<<arin[i]<<" ";

			std::cout<<std::endl;
				
		for(int i=0;i<n+1;i++)
			std::cout<<arout[i]<<" ";
		delete arin;
		delete arout;
}
