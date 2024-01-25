 #include<iostream>
 using namespace std;

 void swapArray_Alternative(int arr[],int size_of_arr){

         for(int i=0;i<size_of_arr;i+=2){

                  if(i+1 < size_of_arr){
                           swap(arr[i],arr[i+1]);

                  }
         }
 }

 void printArray(int arr[],int size_of_arr){
         for(int i=0;i<size_of_arr;i++){
                  cout<<arr[i]<<" ";
         }
 }

 int main(){
         int size;
         cout<<"Enter the size of Array: "<<endl;
         cin>>size;

         int Arr[100];

         for(int i=0;i<size;i++){
                  cout<<"Arr["<<i<<"]=";
                  cin>>Arr[i];
         }

         cout<<"Array before swapping."<<endl;

         swapArray_Alternative(Arr,size);
         cout<<endl;
         printArray(Arr,size);

         return 0;
 }