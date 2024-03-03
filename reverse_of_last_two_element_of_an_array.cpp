#include<iostream>
using namespace std;
void reverse(int arr[], int size_arr, int index){
         arr[index+1]=arr[index+1]+arr[index+2];
         arr[index+2]=arr[index+1]-arr[index+2];
         arr[index+1]=arr[index+1]-arr[index+2];

         for(int i=0; i < size_arr; i++){
                  cout<<arr[i];
         }
         
}
int main(){
         
         int Arr[6];
         int index;
         cout<<"Enter the index :";
         cin>>index;
         for (int  i = 0; i < 6; i++)
         {
                  /* code */
                  cout<<"Arr["<<i<<"]=";
                  cin>>Arr[i];
         }

         reverse(Arr,6,index);
         
}