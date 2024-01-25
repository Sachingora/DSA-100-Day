#include<iostream>
using namespace std;

int main(){

         const int size_of_array=10;
         int array[size_of_array];

         int value=1;

         for(int i=0;i<size_of_array;i++){
                  array[i]=value;
         }

         for(int i=0;i<size_of_array;i++){
                  cout<<array[i]<<" ";
         }
         return 0;
         
}