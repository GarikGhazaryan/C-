#include <iostream>
#include <ctime>
     
void stage1(int);
int generator10_99();
int input();
int too_high_high(int, int);
void stage2(int);
int generator100_999();

int main(){

	int sum=0;
	std::cout<<"=============== Stage 1 =============="<<std::endl;
	int gen=generator10_99();
	stage1(gen);
	std::cout<<"=============== Stage 2 =============="<<std::endl;
	int gen2=generator100_999();
	stage2(gen2);
}

void stage1(int gen){

   	int mutq=input();
  	too_high_high(gen, mutq);
}


int generator10_99(){

    	std::srand(std::time(nullptr)); 
    	int random_variable =1+ std::rand()%100;
//   	std::cout << random_variable << std::endl;
    	return random_variable;
}

int input(){

	int num;
	std::cin>>num;
	return num;
}

int too_high_high(int a, int b){

	if ((a<b)&&(b-a<10)){
	        std::cout<< "worm high" <<std::endl;
		stage1(a);
		
		
	}else if ((a<b)&&(b-a>10)){
	        std::cout<< "cold high" <<std::endl;
		stage1(a);
		
	}else if ((a>b)&&(a-b>10)){
	        std::cout<< "cold low" <<std::endl;
		stage1(a);
	
	}else if ((a>b)&&(a-b<10)){
	        std::cout<< "worm low" <<std::endl;
		stage1(a);
	}else {
	        std::cout<< "you get a true digit" <<std::endl;

	}
return 0;
}

void stage2(int gen){

   	int mutq=input();
  	too_high_high(gen, mutq);
}

int generator100_999(){

    	std::srand(std::time(nullptr)); 
    	int random_variable =100+ std::rand()%999;
//   	std::cout << random_variable << std::endl;
    	return random_variable;
}
