int bsearch(int arr[], int len, int key)
{
	int low, high, mid;

	assert(len >= 0);

	low = 0;
	high = len - 1;
	while(low <= high){
		mid = low + (high - low)/2;

		if(arr[mid] > key){
			high = mid - 1;
		}else if(arr[mid] < key){
			low = mid + 1;
		}else{
			return mid;
		}
	}

	return -1;
}










/* 这样的可以吗？ 

static int bsearch0(int a[], int len, int key)
{
	int low, high, mid;

	low = 0;
	high = len - 1;

	while(low < high){					// <= or <
		mid = low + (high - low)/2;
		if(a[mid] > key){
			high = mid;					// mid+1 ? 
		}else if(a[mid] < key){
			low = mid + 1;
		}else{
			return mid;
		}
	}

	return a[low] == key ? low : -1;	// ?       
}
*/


