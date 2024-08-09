#include<bits/stdc++.h>
using namespace std;
void selection(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(a[j]<a[mini])
                mini=j;
        }
        int temp=a[i];
        a[i]=a[mini];
        a[mini]=temp;
    }
    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main(){
    int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection(arr, n);
  return 0;
}