#include<iostream>
using namespace std;
int partition(int arr[], int p, int r){
    int pivot=arr[r];
    int i=p-1;
    for(int j=p; j<r;j++){
        if(arr[j]<=pivot){
            i=i+1;
            int temp= arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    int temp=arr[r];
    arr[r]=arr[i+1];
    arr[i+1]=temp;
    return i+1;
}
void QuickSort(int arr[], int p, int r){
	if (p < r) {
		int q = partition(arr,p,r);
		QuickSort(arr, p, q-1);
		QuickSort(arr, q + 1, r);
	}
}
int main(){
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout<<"Given array is \n";
	for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<"\t";

	QuickSort(arr, 0, arr_size - 1);

	cout<<"\nSorted array is \n";
    for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<"\t";
	 for(int i=arr_size;i>0;i--)
	cout<<arr[i]<<"\t";
	return 0;
}

