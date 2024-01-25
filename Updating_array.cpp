#include<iostream>
using namespace std;

void updateArray(int arr[],int Size_of_array){

         cout<<endl<<"Inside the function"<<endl;

         arr[0]=120;

         // Printing the Array
         for(int i=0;i<Size_of_array;i++){
                  cout<<arr[i]<<" ";
         }
         cout<<endl;

         cout<<"Going to main function "<<endl;
         
}

int main(){
         int Arr[3]={10,20,30};

         cout<<"Array before update"<<endl;

         for(int i=0;i<3;i++){
                  
                  cout<<Arr[i]<<" ";
         }

                  updateArray(Arr,3);
         // printing the array
         cout<<endl<<" printing the main Function"<<endl;

         for(int i=0;i<3;i++){
                  cout<<Arr[i]<<" ";
         }

         cout<<endl;
}