//insertion sort
#include <iostream>
int main()
{
	int n;
	std::cout << "Enter the number of elements you want in the array" ;
	std::cin >> n;
	int array[n],i;
	for (i=0;i<n;i++){
		std::cin >> array[i];
	}

	int j,key;
	for (i=1;i<n;i++){
		key=array[i];
		j=i-1;
		while(j>=0 && array[j]>key){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=key;
	}
	for (i=0;i<n;i++){
		std::cout << array[i];
	}
}