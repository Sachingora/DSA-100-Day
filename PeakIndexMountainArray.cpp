#include<iostream>
using namespace std;

int peakIndexMountainArray(int arr[],int size){
         int s=0;
         int e=size-1;
         int mid=s+(e-s)/2;

         while(s<e){
                  if(arr[mid]<arr[mid+1]){
                           s=mid+1;
                  }
                  else{
                           e=mid;
                  }
                  mid=s+(e-s)/2;
         }
         return s;
}

int main(){
         int Arr[5]={24,69,100,99,79};

         int peakElement=peakIndexMountainArray(Arr,5);

         cout<<"Index of peak element is Arr["<<peakElement<<"]"<<endl;

         cout<<"Peak Element of Array is "<<Arr[peakElement]<<endl;
}