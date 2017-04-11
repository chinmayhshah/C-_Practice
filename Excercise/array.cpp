#include <iostream>
using namespace std;

int main() {
    int arr[100]={77,99,44,55,22,88,11,00,66,33};
    int ele = 10 ;
    int j =0 ;
    int searchKey;
	// your code goes here
	for (j=0;j<ele;j++){
	    cout << arr[j] << " ";
	}  
	cout << endl;
	searchKey = 66;
	for (j=0;j<ele;j++){
	    if(arr[j]==searchKey)
	        break;
	   if(j == ele)     
	        cout << "Cant Find" << searchKey << endl ;
	   else
	        cout << "Found" << searchKey << endl ;
	}
    	
	return 0;
}
