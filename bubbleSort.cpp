#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    
}
int main(){
    int ar[]={3,2,5,4,6};
    int n=sizeof(ar)/sizeof(ar[0]);
    bubbleSort(ar,n);
    printArr(ar,n);
}