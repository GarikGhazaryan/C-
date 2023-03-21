#include <iostream>

class Human 
{
	private:
	std::string name;
	int age;
	public:
	Human(std::string n, int a)
	{
		age=a;
		name=n;
	}
	int getage()
	{
		return age;
	}

	std::string  getname()
	{
		return name;
	}
};


void sort(Human* arr, int n)
{
	for(int i=0;i<n;i++)
			for(int j=0;j<n-1;j++)
			{
				if(arr[j].getage()>arr[j+1].getage())
				{
					Human tmp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=tmp;

				}
			}
}
void print(Human* arr, int n)
{
	for (int i=0; i<n; i++)
		{
			std::cout<<arr[i].getname()<<"----"<<arr[i].getage()<<std::endl;
		}	
}

int main()
{
		Human h1("Gexam", 67);
		Human h2("Gago", 45);
		Human h3("Nare",17);
		Human h4("Zare",34);
		Human h5("varsik",35);

		Human arr[]={h1,h2,h3,h4,h5};
		print(arr,5);
		std::cout<<"=================" <<std::endl;
		sort(arr, 5);
		print(arr, 5);
}
