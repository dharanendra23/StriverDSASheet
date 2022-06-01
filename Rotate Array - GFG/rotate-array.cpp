// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        if(d == n) return;
        if(d > n) d = d%n;
        
        int temp[d];
        for(int i = 0; i < d; i++) {
            
            temp[i] = arr[i];
        }
        
        // arr[] = {1, 2, 3, 4, 5}, d = 2
        
        for(int i = d; i < n; i++) {
            
            arr[i-d] = arr[i];
        }
        
        // arr{3, 4, 5}
        
        for(int i = 0; i < d; i++) {
            
            arr[i + (n-d)] = temp[i];
        }
        
        // arr{3, 4, 5, 1, 2}
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends