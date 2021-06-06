/*
Question: Given an array of size n initialised with all 0's. You have 'Q' queries. In each query you get two numbers 'L' and 'R'. Increase all values 
of the array from L to R by 1 in each of the Q queries. Print the output

*/
#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin>>n;

	vector<int> arr(n,0); // n is size of vector and 0 is the initialization value

	int q;
	cin>>q;

	while(q--){
		int l,r;
		cin>>l>>r;
		arr[l]++;
		if(r+1<n){
			arr[r+1]--;
		}
		
	}

	for(int i=1;i<n;i++){
		arr[i] = arr[i] + arr[i-1]; // taking cumulative sum .
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
}

/* Run this test case

input format
7 //size of the array
3 // no of queries
2 4 // q1
1 5 // q2
3 5 //q3

output 0 1 2 3 3 2 0



*/