#include <iostream>

int main() {
int n;
std::cin >> n;

int *ar=new int [n];
for (int i = 0; i < n; i++) {
	std::cin >> ar[i];
}

bool achman=true;
bool nvazman=true;

for (int i = 1; i < n; i++) {
	if (ar[i] < ar[i-1]) {
		achman=false;
	} else if (ar[i] > ar[i-1]) {
		nvazman=false;	
	}
}

if (achman == true)
	std::cout<<"achman karg"<<std::endl;
else if(nvazman==true)
	std::cout<<"nvazman karg"<<std::endl;
else
	std::cout<<"dasavorvac che"<<std::endl;
}
