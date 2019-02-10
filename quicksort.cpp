//Program to implement quick sort using C++
#include<iostream>
using namespace std;
//function that swaps 2 integers
void swap(int &a,int &b)
{	int temp;
	temp = a;
	a = b;
	b = temp;}
//returns the position of the pivot after placing it in the place it's required to be
//this function puts the pivot where it's supposed to be and also places elements smaller than pivot to its left and elements larger
//than it to its right
int partition(int arr[],int low,int high)
{	int pivot = arr[high];          //holds pivot value
	while(low<high)
	{while(arr[low]<pivot)
	low++;
    while(arr[high]>pivot)
			high--;
    swap(arr[low],arr[high]);
	}
    return low;       //both low and high indicate the same position and that is the pivot's position
}

//sorts the array
void quicksort(int arr[],int low,int high)
{int p;     //holds index value of pivot
	if(low<high)
	{		p = partition(arr,low,high);
		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
	}
}
//main function
int main()
{	//variable declaration
	int arr[30],size;
	//asks user to enter size of array
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	//asks user to enter elements of the array
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<size;i++)
		cin>>arr[i];
	//function call to sort the array
	quicksort(arr,0,size-1);
	//displays the sorted array
	cout<<"QuickSorted array: "<<endl;
	for(int j=0;j<size;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	//return statement
	return 0;
}
