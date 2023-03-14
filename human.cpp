#include <iostream>
#include <string>
int main(){




struct Human 
{
    int age;
};

Human zare= {15}; 
Human zoro = {65}; 
Human xcho = {48}; 
Human lov = {41}; 
Human husik = {25}; 
Human madlen= {30}; 

std::string human[6]={"zare", "zoro", "xcho", "lov", "husik", "madlen"};


for (int i=0; i<6;i++){
	std::cout<<*(human+i)<<std::endl;

	std::cout<<lov.age<<std::endl;

//	std::cout<<*(human+i).age<<std::endl;

	



}

}
