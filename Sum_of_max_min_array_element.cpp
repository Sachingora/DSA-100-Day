#include<iostream>
using namespace std;
int sum(int arr[],int size_arr){
         int max=INT8_MIN;
	int min=INT8_MAX;
	int i,j;
	for(i=0;i<size_arr;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(j=0;j<size_arr;j++){
		if(arr[j]<min){
			min=arr[j];
		}
	}

	return max+min;
}
int main(){
         int arr[6];
         for(int i=0;i<6;i++){
                  cout<<"arr"<<i<<"]=";
                  cin>>arr[i];
         }
         cout<<sum(arr,7);

}