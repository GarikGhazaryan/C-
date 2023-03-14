#include <iostream>
#include <cmath>


int main(){

struct point
{

int x;
int y;

};

point a={1,4};
point b={2,8};
point c={3,13};

double ab=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
double bc=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
double ac=sqrt((a.x-c.x)*(a.x-c.x)+(a.y-c.y)*(a.y-c.y));

	if(ab+bc>ac && ab+ac>bc && ac+bc>ab){
		std::cout<<"yes"<<std::endl;
	}else{
	
		std::cout<<"NO"<<std::endl;
	}

std::cout<<ab<<std::endl;
std::cout<<bc<<std::endl;
std::cout<<ac<<std::endl;

}
