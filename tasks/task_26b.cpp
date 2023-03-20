#include <iostream>
#include <cmath>

int prime_divisors_count(int);

int main(){


int n;
std::cin>>n;
std::cout<<prime_divisors_count(n)<<std::endl;

}


int prime_divisors_count(int n)
{
		
	int j=1;
	int count=0;
	while (j<=n/2){
		for (int i=2; i<j; i++)
		{
			int x = j % i;
	    	 if (x==0){
		    	 break;
	    	}else{
		    	 if (i==j-1){
						 if(n%j==0){
						 	count++;
						 }
			     break;
			     }
			}
		}
	j++;
	}
return count;
}
