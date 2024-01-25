#include<iostream>
using namespace std;

void alternatingSwapping(int arr[], int size_of_arr){

         for(int i=0;i<size_of_arr;i+2){
                  int flage;
                  
                  if(i+1<size_of_arr){
                           flage=arr[i+1];
                           arr[i+1]=arr[i];
                           arr[i]=flage;
                  }
         }
         
}

void printArray(int arr[],int size_of_arr){

         for(int i=0;i<size_of_arr;i++){

                  cout<<arr[i]<<" ";
         }

}

int main(){
         int Arr[100];
         int size;
         cout<<"Enter the size of Arr :"<<endl;
         cin>>size;

         for(int i=0;i<size;i++){
                  cout<<"Arr["<<i<<"]=";
                  cin>>Arr[i];
         }

         cout<<"Array elements before alternate swapping:"<<endl;

         for(int i=0;i<size;i++){

                  cout<<Arr[i]<<" ";
 
         }cout<<endl;

         cout<<"Array elements after alternate swapping:"<<endl;

         alternatingSwapping(Arr,size);
         printArray(Arr,size);

         return 0;
}