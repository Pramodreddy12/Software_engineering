#include<iostream>
using namespace std;
long long denom(long long arr[][2],long long n,long long i){
    long long ans=1;
    for(long long j=0;j<n;j++){
        if(i!=j){
            ans=ans*(arr[i][0]-arr[j][0]);
        }
    }
    return ans;
}
int main(){
    long long n,k;
    cin >> n >> k;
    long long arr[n][2];
    for(long long i=0;i<n;i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    long long prod=1;
    for(long long i=0;i<n;i++){
        prod=prod*arr[i][0];
    }
    double soln=0.0;
    for(long long i=0;i<n;i++){
        soln+=((prod/arr[i][0])/denom(arr,n,i))*arr[i][1];
    }
    cout<<soln<<"\n";
    return 0;
}