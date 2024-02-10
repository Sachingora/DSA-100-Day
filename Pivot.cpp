#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
         int s=0;
         int e=n-1;
         int mid=s+(e-s)/2;

         while(s<e){
                  if(arr[mid]>=arr[0])
                  {
                           s=mid+1;
                  }
                  else{
                           e=mid;
                  }
                  mid=s+(e-s)/2;
         }
         return e;
         // or return e;
}

int main(){
         int arr[5]={8,10,17,1,3};

         int Arr[8]={54,65,85,100,10,20,30,40};
         getPivot(arr,5);
         getPivot(Arr,5);
         cout<<"Pivot element is at "<< getPivot(arr,5)<<" index"<<endl;
         cout<<"Pivot element is at "<< getPivot(Arr,8)<<" index"<<endl;
}