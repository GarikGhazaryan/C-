#include <iostream>

class Human 
{
	private:
	std::string name;
	int age;
	public:
	static int size;
	Human(std::string n, int a)
	{
		age=a;
		name=n;
		size++;
	}
	int getage()
	{
		return age;
	}

	std::string  getname()
	{
		return name;
	}

	bool operator > (const Human& other)
	{
		return this->age > other.age;
	}
	
};


void sort(Human* arr, int n)
{
	for(int i=0;i<Human::size;i++)
			for(int j=0;j<Human::size-1;j++)
			{
				if(arr[j] > arr[j+1])
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

int Human::size=0;

int main()
{
		Human h1("Gexam", 67);
		Human h2("Gago", 45);
		Human h3("Nare",17);
		Human h4("Zare",34);
		Human h5("varsik",35);
		Human h6("Sofia",15);

		Human arr[]={h1,h2,h3,h4,h5,h6};
		print(arr,Human::size);
		std::cout<<"=================" <<std::endl;
		sort(arr, Human::size);
		print(arr, Human::size);
}
