#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={10,15,20,40,8,11,55};
    int l=0,m=3,h=6;
    int i=l,j=m+1;
    while(i<=m && j<=h ){
        if(a[i]<=a[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<a[j]<<" ";
            j++;
        }
    }

    while(i<=m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<=h){
        cout<<a[j]<<" ";
        j++;
    }
}
