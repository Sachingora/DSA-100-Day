#include<iostream>
using namespace std;

void ReverseArray(int Arr[],int size_of_Arr){
         for(int i=size_of_Arr-1;i>=0;i--){
                  cout<<Arr[i]<<" ";
         }
}

int main(){
         int arr[100],size;
         cout<<"Enter the size of an array: "<<endl;
         cin>>size;

         for(int i=0;i<size;i++){
                  cout<<"arr["<<i<<"]=";
                  cin>>arr[i];
         }

         cout<<"Before reversing ,array elements are:"<<endl;

         for(int i=0;i<size;i++){
                  cout<<arr[i]<<" ";
         }cout<<endl;

         cout<<"After reversing ,array elements are:"<<endl;

         ReverseArray(arr,size);

         return 0;


}