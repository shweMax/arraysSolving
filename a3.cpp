#include<bits/stdc++.h>
using namespace std;
//Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.
bool checkArrSorted(vector<int>& arr){
  int size= arr.size();
  for(int i=1; i<size; i++){
      if(arr[i-1]>arr[i]) return false;
  }
  return true; //TC=O(N)
}

int main(){
  vector<int>arr= {1, 2, 3, 4, 5};  
  int ans= checkArrSorted(arr);
  cout<<"The answer is: "<<ans<<endl;
}