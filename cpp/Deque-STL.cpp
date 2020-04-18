#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> d;
    int i = 0;
    for( i = 0; i<k; ++i)
    {
        //pop elements till the elements at the back of the queue are smaller than the          //element to be inserted
        while((!d.empty()) && arr[i]>=arr[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);

    }

    for(; i<n; ++i)
    {
        cout<<arr[d.front()]<< " ";

        while((!d.empty()) && (i-k)>=d.front())
        {
            d.pop_front();
        }
        //pop the front element if it goes out of the window
        while((!d.empty()) && arr[i]>=arr[d.back()])
        {
            d.pop_back();
        }

        d.push_back(i);

    }
    cout<< arr[d.front()]<< endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
