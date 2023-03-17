#include <iostream>

void insert_sort(int *arr, int n) {
   
    int	tmp;
    int j;
    for (int i = 1; i < n; i++) {
        tmp = arr[i];
        j = i - 1;

        while (arr[j] > tmp) {
             arr[j + 1] = arr[j];
              j--;
        }
        arr[j + 1] = tmp;
    }
}

int main() {
    int n;
    std::cin>>n;
    int *arr= new int[n];
    for (int i=0; i<n; i++){
   	std::cin>>*(arr+i);
   }
    for (int i = 0; i < n; i++)
        std::cout << *(arr+i) << " ";
    std::cout<<std::endl;

    insert_sort(arr, n);

    for (int i = 0; i < n; i++)
        std::cout << *(arr+i) << " ";
}

