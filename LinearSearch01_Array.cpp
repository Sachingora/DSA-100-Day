#include<iostream>
using namespace std;

bool search(int Arr[],int size_of_array,int key){
         for(int i=0;i<size_of_array;i++){
                  if(Arr[i]==key){
                           return 1;
                  }
         }

         return 0;

}

int main(){
         int arr[100];
         int size;
         cout<<"Enter size of array: "<<endl;
         cin>>size;

         for(int i=0;i<size;i++){
                  cout<<"arr["<<i<<"]= ";
                  cin>>arr[i];
         }

         int key;
         cout<<"Enter the key element of Array :"<<endl;
         cin>>key;

         int found=search(arr,size,key);

         if(found){
                  cout<<"Element is found at"<<endl;
         }
         else{
                  cout<<"Element is not found."<<endl;
         }

         return 0;



}