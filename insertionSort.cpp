#include<bits/stdc++.h>
using namespace std;
void insertionS(int a[],int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void insertionStriver(int a[],int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
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
    insertionStriver(ar,n);
    printArr(ar,n);
}