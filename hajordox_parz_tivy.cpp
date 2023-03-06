#include <iostream>


int motik_parz_tiv(int);

int main(){

	int num;
	std::cin >> num;
	std::cout<<num<<" in hajordox arajin parz tivn e "<<motik_parz_tiv(num)<<std::endl;

}

int motik_parz_tiv(int num){
	while (true){
	num++;
	for (int i=2; i<num*2; i++)
	{
		int x = num % i;
	     if (x==0){
		  break;		  
	}
	     else{
		     if (i==num-1){
		     return num;
		    }
		  	       }
	         }
	}
}







