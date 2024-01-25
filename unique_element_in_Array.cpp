#include<iostream>
using namespace std;

void unique(int arr[],int size){
         int flage,count =0;

         for(int i=0;i<size;i++){
                  flage=arr[i];
                  for(int i=0;i<size;i++){
                           if(flage==arr[i]){
                                    count++;
                           }
                  }
                  cout<<arr[i]<<"=="<<count;
                  cout<<endl;
         }
}

int main(){
         int Arr[100];
         int size;
         cout<<"Enter the size of Array: ";
         cin>>size;

         for(int i=0;i<size;i++){
                  cout<<"Arr["<<i<<"]=";
                  cin>>Arr[i];
         }

         unique(Arr,size);
}