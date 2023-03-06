#include <iostream>


int motik_parz_tiv_verev(int);
int motik_parz_tiv_nerqev(int);
int main(){

	int num;
	std::cin >> num;
	int up=motik_parz_tiv_verev(num);
	int down=motik_parz_tiv_nerqev(num);

	if (num-down < up-num){
		std::cout<<down<<std::endl;
	}else if (num-down > up-num){
		std::cout<<up<<std::endl;
	}else{
		std::cout<<"havasat heravorutyan vra ka  "<<down<<" ev "<<up<<" parz tvery"<<std::endl;
		
	} 
}

int motik_parz_tiv_verev(int num){
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




int motik_parz_tiv_nerqev(int num){
	while (true){
	num--;
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



