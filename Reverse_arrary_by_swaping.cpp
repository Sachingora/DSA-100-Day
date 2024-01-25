#include<iostream>
using namespace std;

void ReverseArray(int arr[],int size_of_arr){
         int start=0;
         int end=size_of_arr-1;

         while(start<=end){
                  swap(arr[start],arr[end]);

                  start++;
                  end--;
         }cout<<endl;

                  
}

void printArray(int arr[],int size_of_arr){
         for(int i=0;i<size_of_arr;i++){
                  cout<<arr[i]<<" ";
         }
}

int main(){
         int size;
         cout<<"Enter the size of array: "<<endl;
         cin>>size;

         int Arr[100];
         for(int i=0;i<size;i++){
                  cout<<"Arr["<<i<<"]=";
                  cin>>Arr[i];
         }

         cout<<" Array elements before swapping"<<endl;
         for(int i=0;i<size;i++){
                  cout<<Arr[i]<<" ";
                
         }

         ReverseArray(Arr,size);

         cout<<" Array elements after swapping"<<endl;

         printArray(Arr,size);

}