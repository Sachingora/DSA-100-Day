#include<iostream>
using namespace std;
int main(){

         static int size_of_array=10;
         int array[size_of_array]={2,7};

         cout<<"Array Printing."<<endl;

         for(int i=0;i<size_of_array;i++){
                  cout<<array[i]<<" ";
         }

         cout<<endl<<"Printing DONE"<<endl;

         // output: 2 7 0 0 0 0 0 0 0 0

         // initialisation all the array with 0:

         int secondArray[size_of_array]={0};

         cout<<"Array Printing."<<endl;

         for(int i=0;i<size_of_array;i++){
                  cout<<secondArray[i]<<" ";
         }

         cout<<endl<<"Printing DONE"<<endl;

         // output: 0 0 0 0 0 0 0 0 0 0 

         // initialisation all the array with 1:
         int value=1;

         for(int i=0;i<size_of_array;i++){
                  array[i]=value;
         }

         for(int i=0;i<size_of_array;i++){
                  cout<<array[i]<<" ";
         }
       
         // output: 1 1 1 1 1 1 1 1 1 1        


         return 0;
}