#include <iostream>


int main(){
	int n;
	std::cin >> n;

	int *ar=new int [n];
	for (int i = 0; i < n; i++) 
		std::cin >> ar[i];
	
	for (int i = 0; i < n; i++) 
		std::cout << ar[i]<<" ";
		std::cout<<"not sorted"<<std::endl;
	
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n-1 ; j++)
            if (ar[j] > ar[j + 1]){
				int tmp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=tmp;
			}
	} 
	
	for (int i = 0; i < n; i++) 
		std::cout << ar[i]<<" ";
		std::cout<<"ascending"<<std::endl;
   


	for (int i = 0; i < n ; i++){
        for (int j = 0; j < n-1 ; j++)
            if (ar[j] < ar[j + 1]){
				int tmp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=tmp;
			}
	} 
	for (int i = 0; i < n; i++) 
		std::cout << ar[i]<<" ";
		std::cout<<"descending"<<std::endl;
		delete ar;
}
