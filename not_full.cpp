#include <iostream>

int main()
{
	
	std::string mstr = "";
	std::getline (std::cin,mstr);
	std::string bar = "";
	std::string erk_bar = "";
	
    for (int i =0;i<mstr.size();i++) {

        if (mstr[i] == ' ') {

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



