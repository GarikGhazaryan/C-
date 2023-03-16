#include <iostream>
#include <cmath>


int get_gigits(int ari, int * et, int k, int *count ){
	int tmp;
	while (tmp!=0){
	int a=ari%10;
	tmp=ari/10;
	ari=tmp;
	for (int i=0;i<k;i++){
//		std::cout<<*(et+i);
		std::cout<<"a="<<a;
		std::cout<<"tmp="<<tmp;
		if(a=*(et+i)){
			count[i]++;
		
		}
		}
	
	}
	
return 0;

}

int main(){
	
	int k=10;
	int n;
	int etalon[]={0,1,2,3,4,5,6,7,8,9};
	int count[k]={};
	std::cin>>n;
	int *ar= new int[n];
	for (int i=0; i<n; i++){
		std::cin>>*(ar+i);
		}
	int ari=1234;
	get_gigits(ari, etalon, k, count );
	
//	for(int i=0;i<k;i++){
//		std::cout<<*(count+i);
//	}	
}


