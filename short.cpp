#include <iostream>

int main()
{
	
	std::string mstr = "";
	std::getline (std::cin,mstr);
	std::string bar = "";
	std::string karch_bar = mstr;
	
    for (int i =0;i<mstr.size()+1;i++) {

        if ((mstr[i] == ' ' ) || ( mstr[i] == mstr[mstr.size()])) {
       
            if (bar.size() <= karch_bar.size()) {

                karch_bar=bar;
	    }    
	               
	    bar = "";

        } else {

            bar+= mstr[i];
        }
    }

  std::cout << karch_bar <<std::endl;

}



