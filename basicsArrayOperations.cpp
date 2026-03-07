//// Basics array operations , cin,cout, loop, size, decleration, initialisation. 
// #include<iostream>
// using namespace std;
// int main(){
	
// 	int n;
// 	cout<<"enter number of elements"<<" ";
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" "<<endl;
// 	}
// 	cout<<"size of complete array: "<<sizeof(arr)<<endl;
// 	cout<<"size of one element in bits: "<<sizeof(arr)/sizeof(arr[0])<<endl;
//     cout<<"size of one element"<<sizeof(arr[0]);
// 	return 0;
// }



//adding an element in 0th index of an array without deleting the last element
// #include <iostream>
// using namespace std;
// int main() {
//    int array[5] = {2, 4, 6, 8, 10};
//    cout << "Original Array: ";
//    for (int i = 0; i < 5; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
// 	 int newValue = 1;
//    for (int i = 5 - 1; i >= 0; --i) {
//        array[i + 1] = array[i];
//    }
//    array[0] = newValue;

//    cout << "Updated Array: ";
//    for (int i = 0; i <= 5; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;

//    return 0;
// }


//deleting the first element of the array (arr[0])
// #include <iostream>
// using namespace std;
// int main() {
//    const int size = 5;
//    int array[size] = {2, 4, 6, 8, 10};
//    cout << "Original Array: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < size - 1; ++i) {
//        array[i] = array[i + 1];
//    }
//    cout << "Updated Array: ";
//    for (int i = 0; i < size - 1; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//    return 0;
// }


//program to delete the last element off the array!
// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cout<<"enter size of array: "<<endl;
// 	int arr[n];
// 	cin>>n;
// 	for(int i=0; i<n; i++){
// 		cin>>arr[i];
// 	}
// 	cout<<"Original array :";
// 	for(int i=0; i<n; i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// 	int x= n-1;
// 	cout<<"Updated array: ";
// 	for(int i=0; i<x; i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

                                                    //trailing zeros in factorial
// #include<iostream>
// using namespace std;
// int count(int n){
//     int res=0;
//     for(int i=5; i<=n; i=i*5){
//         res =res + n/i;
//     }
//     return res;
// }
// int main(){
//     cout<<count(5);

//     return 0;
// }

                                                        //PoW
// #include<iostream>
// #include<math.h>
// using namespace std;
// double myPow(double x, int n) {
//         int p = INT_MIN;
//         int q = INT_MAX;
//         double power;
//         if(x > (-100) || x < (100) && x!=0){
//             if(n >= p || n <=q){
//                 power = pow(x, n);
//             }
//             return power;
//         }
//         return 0;
//     }

// int main(){
//     cout<<myPow(2.000, 1)<<endl;
//     cout<<myPow(4, 2)<<endl;
//     return 0;
// }


