#include <iostream>


int main()
{
	
	std::string mstr = "";
	std::getline (std::cin,mstr);
	
	std::string bar1 = "";
	std::string erk_bar = "";
	
    for (int i =0;i<mstr.size()+1;i++) {

        if ((mstr[i] == ' ') || (mstr[i]==mstr[mstr.size()])) {

            if (bar1.size() > erk_bar.size()) {

                erk_bar=bar1;
            }
          	bar1 = "";

        } else {

            bar1+= mstr[i];
        }
    }

 // std::cout << erk_bar <<std::endl;


	std::string bar2 = "";
	std::string karch_bar = mstr;
	
    for (int i =0;i<mstr.size()+1;i++) {

        if ((mstr[i] == ' ' ) || ( mstr[i] == mstr[mstr.size()])) {
       
            if (bar2.size() < karch_bar.size()) {

                karch_bar=bar2;
	    }    
	               
	    bar2 = "";

        } else {

            bar2+= mstr[i];
        }
    }

 // std::cout << karch_bar <<std::endl;
  
  std::string w="";

for (int i=0; i < karch_bar.size(); i++)
	{

	for (int j=0; j < erk_bar.size(); j++)
		{

		if (karch_bar[i]==erk_bar[j])
		
			{
			w+=karch_bar[i];	
			}
				
		}
	}
			std::cout<<"yndhanur simvolnern en -----  " <<w<<std::endl;

}


