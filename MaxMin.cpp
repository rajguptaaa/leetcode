// #include<iostream>
// using namespace std;

// int getMax(int num[],int n){
// 	int max=INT_MIN;
// 	for(int i=0; i<n; i++){
// 		if(max<num[i]){
// 			max=num[i];
// 		}
// 	}
// 	return max;
// }
// int getMin(int num[],int n){
// 	int min=INT_MAX;
// 	for(int i=0; i<n; i++){
// 		if(num[i]<min){
// 			min=num[i];
// 		}
// 	}
// 	return min;
// }
// int main(){
// 	int size;
// 	cin>>size;
// 	int arr[1000];
// 	for(int i=0; i<size; i++){
// 		cin>>arr[i];
// 	}
// 	cout<<"Maximum: "<<getMax(arr, size)<<endl;
// 	cout<<"Minimum: "<<getMin(arr, size)<<endl;
// 	return 0;
// }


#include<iostream>
using namespace std;

int minElement(int arr[], int n){
	int min = INT_MAX;
	for(int i=0; i<n; i++){
		if(arr[i] < min){
			min=arr[i];
		}
	}
	return min;
}

int maxElement(int arr[], int n){
	int max = INT_MIN;
	for(int i=0; i<n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int arr[5]={23,45,67,89,69};
	cout<<"Maximum ele: "<<maxElement(arr, 5)<<endl;
	cout<<"Minimum ele: "<<minElement(arr, 5)<<endl;

	return 0;
}