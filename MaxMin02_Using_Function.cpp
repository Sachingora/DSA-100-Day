#include<iostream>
using namespace std;

int getMax(int arr[], int size_of_arr){
         int max=INT8_MIN;

         for(int i=0;i<size_of_arr;i++){
                  if(arr[i]>max){
                  max=arr[i];
           }
         }

         

         return max;

}

int getMin(int arr[], int size_of_arr){

         int min=INT8_MAX;

         for(int i=0;i<size_of_arr;i++){
                  if(arr[i]<min){
                  min=arr[i];
           }
         }

         return min;
         
}

int main(){
         int size;
         cout<<"Enter the Size of Array: "<<endl;
         cin>>size;

         int Arr[1000];

         for(int i=0;i<size;i++){
                  cout<<"Arr ["<<i<<"] =";
                  cin>>Arr[i];
         }
         getMax(Arr,size);

         cout<<getMax(Arr,size)<<endl;
         cout<<getMin(Arr,size)<<endl;

}