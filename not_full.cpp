#include <iostream>

int main()
{
	
	std::string mstr = "";
	std::getline (std::cin,mstr);
	std::string bar = "";
	std::string erk_bar = "";
	
    for (int i =0;i<mstr.size()+1;i++) {

        if ((mstr[i] == ' ') || (mstr[i]==mstr[mstr.size()])) {

            if (bar.size() > erk_bar.size()) {

                erk_bar=bar;
            }
          	bar = "";

        } else {

            bar+= mstr[i];
        }
    }

  std::cout << erk_bar <<std::endl;

}



