#include <iostream>

class Human {
	public:

	std::string name;
	int age;

};


int main()
{

Human people[6]={{"zare",15},
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
	std::cout<<people[i].age<<std::endl;
	}
}

}

/*	Human h1;
	Human h2;
	Human h3;
	Human h4;
	Human h5;
	
	h1.name="Gexam";
	h2.name="Gago";
	h3.name="Nare";
	h4.name="Zarem";
	h5.name="Hunan";

	h1.age=11;
	h2.age=22;
	h3.age=33;
	h4.age=44;
	h5.age=55;

	std::string mstr[]={"h1", "h2", "h3", "h4", "h5"};
	std::cout<<mstr[2].age;
*/
