#include<iostream>
using namespace std;

int main(){
         int arr[10];
         int max=0;

         for(int i=0;i<10;i++){
                  cout<<"arr["<<i<<"] =";
                  cin>>arr[i];
         }

         for(int i=0;i<10;i++){
                  cout<<arr[i]<<" ";
         }
        

         for(int i=0;i<10;i++){
                  if(arr[i]>max){
                           max=arr[i];
                  }
         }
         cout<<endl<<max;

      
         for(int i=0;i<10;i++){
                  if(arr[i]<max){
                           max=arr[i];
                  }
         }
         cout<<endl<<max;

          return 0;
}