//This is the code to print all the duplicates in an array.
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  unordered_map<int,int> m;
  for(int i=0;i<n;i++){
    m[arr[i]]++;
  }
  for(auto i:m){
    if(i.second>=2){
      cout << i.first << " ";
    }
  }
  return 0;
}
