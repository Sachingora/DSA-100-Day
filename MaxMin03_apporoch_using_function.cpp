#include<iostream>
using namespace std;

int getMax(int arr[], int size_of_arr){
         int maxi=INT8_MIN;

         for(int i=0;i<size_of_arr;i++){
         //          if(arr[i]>max){
         //          max=arr[i];
         //   }
          

         maxi=max(maxi, arr[i]) ;   
         //  here max is a predefined function or buildin Function

         }




         

         return maxi;

}

int getMin(int arr[], int size_of_arr){

         int mini=INT8_MAX;

         for(int i=0;i<size_of_arr;i++){
         //          if(arr[i]<min){
         //          min=arr[i];
         //   }
          

         mini=min(mini, arr[i]);

                  //  here mix is a predefined function or buildin Function

         }
         return mini;
         
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