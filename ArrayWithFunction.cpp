#include<iostream>
using namespace std;

void printingArray(int Arr[],int num){

         for(int i=0;i<num;i++){
                  cout<<Arr[i]<<" ";
         }
         return ;
}
void Array_initialisation_From_AnyNumber(int Arr[],int num){
         int initialisation_value=1;

         for(int i=0;i<num;i++){
                  Arr[i]=initialisation_value;

                  cout<<Arr[i];
         }
         cout<<endl<<Arr[2];


}

int main(){
         int Arr_size=10;
         int array[10]={2,7};

         printingArray(array,Arr_size);

         int lenght_of_Array=sizeof(array)/sizeof(int);
         cout<<endl<<lenght_of_Array; 

         int array1[20];
         printingArray(array1,20);

         cout<<endl;

         int array2[Arr_size]={0};
         printingArray(array2,Arr_size);

         cout<<endl;

         int array3[10]={1};
         printingArray(array3,10);

         cout<<endl<<endl;

         int array4[10];
         Array_initialisation_From_AnyNumber(array4,10);

}