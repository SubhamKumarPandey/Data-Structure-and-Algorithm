int leftIndex(int N, int arr[], int X){    
    int low = 0, high = N-1;
    
    while(low<=high) 
    {
        int mid = (low+high)/2;
        
        if(arr[mid]<X ) {
            low = mid+1;
        } else if(arr[mid]> X ) {
            high = mid-1;
        } else {
            if(mid==0 || arr[mid-1]!=arr[mid]) {
                return mid;
            }
            high = mid-1;
        }
    }
    
    return -1;
    
}
int main() {
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;	    
	    int arr[sizeOfArray];
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }	    
	    int elemntToSearch;
	    cin >> elemntToSearch;    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}	
	return 0;
} 
