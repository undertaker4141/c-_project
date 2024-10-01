#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    int b;
    cin>>a;
    cin>>b;
    //cout<<a<<b<<endl;
    int c = a+b;
    vector<int> arr;
    while(c){
        arr.push_back(c%10);
        c/=10;
    }
    //cout<<a<<b<<endl;
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        sum+=arr[i];
        //cout<<arr[i]<<endl;
    }
    cout<<sum<<endl;
    return 0;
}