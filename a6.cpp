#include<bits/stdc++.h>
using namespace std;
//Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.
vector<int> rotateArrLeftbyKspacesBrute(vector<int> &arr, int k){
  int n=arr.size();
  vector<int>temp;
  for(int i=0; i<k; i++){
    temp.push_back(arr[i]);
  }
  for(int i=k; i<n; i++){
    arr[i-k]= arr[i];
  }
  int j=0;
  for(int i=(n-k); i<n; i++){
    arr[i]=temp[j];
    j++; //TC= O(n+d) SC=O(d)
  }
  return arr;
}
vector<int> rotateArrLeftbyKspacesOptimised(vector<int> &arr, int k){
  int n = arr.size();
  k = k % n;  // Handle cases where k is greater than or equal to n
  reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());
  reverse(arr.begin(), arr.end());
  return arr;
}

int main(){
  vector<int> arr= {1,2,3,4,5}; //4 5 1 2 3
  vector<int>ans= rotateArrLeftbyKspacesOptimised(arr, 4);
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
}

