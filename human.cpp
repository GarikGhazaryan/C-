#include <iostream>
#include <string>
int main(){

struct human 
{
    std::string name;
    int age;
};

human people[6]={{"zare",15},
		{"zoro",18},
		{"xcho",41},
		{"lov",48},
		{"husik",14},
		{"madlen",20}};

int tmp=people[0].age;
int tmpi=0;
for (int i=0; i<6;i++){
	if(tmp<people[i].age){
		tmp=people[i].age;
		tmpi=i;
	}
}
	std::cout<<people[tmpi].name<<"==="<<people[tmpi].age<<std::endl;
}
