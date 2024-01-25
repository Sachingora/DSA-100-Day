#include<iostream>
using namespace std;

void MaxMin(int Arr[], int num){
         int max=0;
         for(int i=0;i<num;i++){
                  if(Arr[i]>max){
                           max=Arr[i];
                  }
         }
        cout<<endl<<"Max Element of Array is "<<max;

        cout<<endl;

         int min=max;
         for(int i=0;i<num;i++){
                  if(Arr[i]<min){
                           min=Arr[i];
                  }
         }
        cout<<endl<<"Min Element of Array is "<<min;

        return ;
        

}
int main(){
         int size;
         cout<<"Enter the size of Array: "<<endl;
         cin>>size;
         int arr[1000];
         for(int i=0;i<size;i++){
                  cout<<"arr["<<i<<"]= ";
                  cin>>arr[i];
         }

         for(int i=0;i<size;i++){
                  cout<<arr[i]<<" ";
         }

         cout<<endl;
         MaxMin(arr,size);

}