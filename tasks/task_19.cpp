#include <iostream>

int main(){

int ar[]={115,46,12,115,48,115,46,12,115,1};
int max=*ar;
int count=0;
for (int i=0;i<10;i++){
	if (*(ar+i)>max){
	max=*(ar+i);
	}
}
std::cout<<"The max num is  "<<max<<std::endl;

for (int i=0;i<10;i++){
	if (*(ar+i)==max)
	count++;	
}

std::cout<<"A count of max num is "<<count<<std::endl;

}
