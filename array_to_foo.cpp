#include <iostream>


void get_cont_array(int *ar,int n)
{
std::cout<<"input elements of array"<<std::endl;
int d;
for(int i=0;i<n;i++){
	std::cin>>d;
	*(ar+i)=d;
	}
}

void get_element_index(int el, int *ar, int *aro, int n, int &count)
{
	for(int i=0;i<n;i++){
		if (el==*(ar+i)){
			*(aro+count)=i;
			count++;
		}else if (i==n-1&&count==0){
			std::cout<<"there is not a element in array"<<std::endl;
		}
	}
}






int get_ar_size(int n)
{
	std::cout<<"input array size"<<std::endl;
	std::cin>>n;
return n;
}

int main(){

	int count=0;
	int n;
	n=get_ar_size(n);

	int *arin=new int [n];
	int *arout=new int [n];

	get_cont_array(arin,n);

	std::cout<<"input element to get"<<std::endl;
	int el;
	std::cin>>el;
	std::cout<<"_______________"<<std::endl;

	get_element_index(el, arin, arout, n, count);
	
	for(int i=0;i<count;i++){
		std::cout<<*(arout+i)<<", ";
	}
		std::cout<<std::endl;

}
