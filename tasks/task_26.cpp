#include <iostream>

int get_count_n(int);
int* digits_in_array(int,int);
int get_max_digit(int *, int);
int get_index(int *, int , int); 

int main(){

	int n;
	std::cin>>n;
	int i=0;
	int z=get_count_n(n);

	int* arout=digits_in_array(n, z);

	int digit=get_max_digit(arout, z);
	
	std::cout<<"max num i kargahamarn e "<<get_index(arout, z, digit)<<std::endl;
}


int get_index(int arout[], int z, int digit){
		int k=0;
		bool flag=true;
		while (flag){
			if (arout[k]==digit){
				return k+1;
				flag=false;
			}
			k++;
		}	
		return 0;
}

int get_max_digit(int arout[], int z)
{
		int j=0;
		int tmp=arout[0];
		for (int i=0; i<z; i++){
				if(tmp<arout[i]){
					tmp=arout[i];
					j++;
				}
		}
		return tmp;
}

int* digits_in_array(int n,int z)
{
	
		int *ar= new int[z];
				int tmp;
		for (int i=z-1; i>=0; i--){
				int a=n%10;
				tmp=n/10;
				n=tmp;
				ar[i]=a;
		
		}

	return ar;
}

int get_count_n(int n)
{
		int i=0;
		int tmp;
		while (tmp!=0){
			int a=n%10;
			tmp=n/10;
			n=tmp;
			i++;
		}
	return i;
}

