#include<iostream>
using namespace std;

int AdditionOfArray(int Arr[],int size_of_array){
         int Sum_of_Array=0;

         for(int i=0;i<size_of_array;i++){
                  
                  Sum_of_Array=Sum_of_Array+Arr[i];

         }

         return Sum_of_Array;
}

int main(){
         int arr[100];
         int size;
         cout<<"Enter the size of Array: "<<endl;

         cin>>size;

         for(int i=0;i<size;i++){
                  cout<<"arr["<<i<<"]";
                  cin>>arr[i];
         }

         cout<<"Sum of array elements are "<<AdditionOfArray(arr,size);

         return 0;

}