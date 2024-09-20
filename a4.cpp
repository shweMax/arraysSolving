#include<bits/stdc++.h>
using namespace std;
//Remove Duplicates from Sorted Array
int removeDuplicates(vector<int>& arr){
  int size= arr.size();
  //using two pointers
  int j=1;
  for(int i=1; i<size; i++){
    if(arr[i]!=arr[i-1]){
      arr[j] = arr[i];
      j++;
    }
  }
  return j;
}

int main(){
  vector<int>arr= {1, 2, 2, 2, 5};  
  int ans= removeDuplicates(arr);
  cout<<"The answer is: "<<ans<<endl;
}