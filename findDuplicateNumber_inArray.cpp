#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size){
         int duplicateNumber=0;
         for (int i = 0; i < size - 1; ++i) {
                  for (int j = i + 1; j < size; ++j) {
                           if (arr[i] == arr[j]) {
                           duplicateNumber=arr[i];
            }
        }
    }
    return duplicateNumber;
}

int main() {
         int arr[100];
         int size;
         cout<<"Enter the size of array: ";
         cin>>size;

         for(int i=0;i<size;i++){
                  cout<<"arr["<<i<<"]=";
                  cin>>arr[i];
         }

         findDuplicate(arr,size);

         cout<<"Duplicate number is :"<<findDuplicate(arr,size);
    return 0;
}
