#include<iostream>
using namespace std;

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
         int evenArr[6]={2,4,6,8,12,18};
         int oddArr[5]={3,8,11,14,16};

         int key1,key2;
         cout<<"Enter the key1: "<<endl;
         cin>>key1;

         cout<<"Enter the key2: "<<endl;
         cin>>key2;

         int evenIndex=binarySearch(evenArr,6,key1);
         int oddIndex=binarySearch(oddArr,5,key2);

         cout<<"Index of "<<key1<<" is "<<evenIndex<<endl;
         cout<<"Index of "<<key2<<" is "<<oddIndex<<endl;
}