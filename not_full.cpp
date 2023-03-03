#include <iostream>
int main()
{
	
	std::string nstr = "";
	std::string mstr = "";
	std::getline (std::cin,mstr);
	int count=0;
	std::string tstr = "";
	int i=0;
	while (mstr[i]!=' ')
	{
		nstr+=mstr[i];
		i++;	
	}
		tstr=nstr;
		count=i;

std::cout<<tstr<<std::endl;
std::cout<<count<<std::endl;
}
