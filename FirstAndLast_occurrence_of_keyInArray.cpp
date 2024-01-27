#include<iostream>
using namespace std;
int FirstOcc(int Arr[],int size,int key){
         int start=0,end=size-1;
         int ans=-1;
         int mid=start+ (end-start)/2;
         while(start<=end){
                  if(Arr[mid]==key){
                  ans=mid;
                  end=mid-1;
         }
         else if(Arr[mid]<key){
                  start=mid+1;
         }
         else if(Arr[mid]>key){
                  end=mid-1;
         }
         mid=start+(end-start)/2;
         }
         return ans;
}

int LastOcc(int Arr[],int size,int key){
         int start=0,end=size-1;
         int ans=-1;
         int mid=start+ (end-start)/2;
         while(start<=end){
                  if(Arr[mid]==key){
                  ans=mid;
                  start=mid+1;
         }
         else if(Arr[mid]<key){
                  start=mid+1;
         }
         else if(Arr[mid]>key){
                  end=mid-1;
         }
         mid=start+(end-start)/2;
         }
         return ans;
}
int numberOfOcc(int Arr[],int size,int key){
         int count=LastOcc(Arr,20,key)-FirstOcc(Arr,20,key)+1;
         return count;
}
int main(){
         int Arr[20]={1,2,3,3,3,3,3,3,3,3,3,3,3,3,3,5,5,5,5,5,};
         int key;
         cout<<"Enter the key:";
         cin>>key;

         cout<<"First Occurrence of "<<key<<" is at index "<<FirstOcc(Arr,20,key);
         cout<<endl;
         cout<<"last Occurrence of "<<key<<" is at index "<<LastOcc(Arr,20,key);
         cout<<endl;
         cout<<"Total number of Occurrence of "<<key<<" is "<<numberOfOcc(Arr,20,key);

         return 0;

}