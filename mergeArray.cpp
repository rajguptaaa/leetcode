#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
void mergeArray(vector<int>& a, vector<int>& b, vector<int>& c, int n, int m){
    int i=0,j=0,k=0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else if(a[i]==b[j]){
            c[k++]=b[j++];
            i++;
        }
    }
    while(i < n){
        c[k++]=a[i++];
    }
    while(j < m){
        c[k++]=b[j++];
    }
}

int main(){
        vector<int> a ={1,4,6,23,45};
        vector<int> b = {1,23,45,67};
        int n = a.size();
        int m = b.size();

        vector<int> res(n+m);

        mergeArray(a,b,res,n,m);
        
        for(int i=0; i<n+m; i++){
            cout<<res[i]<<" ";
        }
        
}

