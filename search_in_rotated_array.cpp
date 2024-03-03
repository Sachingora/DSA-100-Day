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
int binarySearch(int arr[],int size,int key){
         int start=0;
         int end=size-1;

         int mid=start+(end-start)/2;

         while(start<=end){
                  if(arr[mid]==key){
                           return mid;
                  }

                  else if(arr[mid]<key){
                           start=mid+1;
                  }

                  // go to right side

                  else{ // (if arr[mid]>key)  got to left side.
                           end=mid-1;
                  }
                  mid=start+(end-start)/2;
         }
         return -1;
}
int main(){
         int arr[5]={7,9,1,2,3};

         int key;
         cout<<"Enter the key: "<<endl;
         cin>>key;

         int pivot=getPivot(arr,key);
         binarySearch(arr,5,key);

}