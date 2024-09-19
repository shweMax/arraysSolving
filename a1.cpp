#include<bits/stdc++.h>
using namespace std;
int largestElementBrute(vector<int>& arr){
  int size= arr.size();
  sort(arr.begin(), arr.end());
  int largestElement = arr[size-1];
  return largestElement; //time complexity = NlogN
}
int largestElementOptimised(vector<int>& arr){
  int size= arr.size();
  int largest= INT_MIN;
  for(int i=0; i<size; i++){
    if(arr[i]>largest){
      largest= arr[i];
    }
  }
  return largest; //TC= N
}

int main(){
  vector<int>arr= {100,7,44,85,120,45,101};
  int lEl= largestElementBrute(arr);
  cout<<"The answer is: "<<lEl<<endl;
}