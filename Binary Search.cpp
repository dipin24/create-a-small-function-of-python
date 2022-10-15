#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={10, 20, 30, 50, 60, 80, 110, 130, 140, 170},n=10;
    int s = 110;

    int low=0,high=n-1;
    
    while(low <= high){
        int mid = (low+high)/2;
        if(a[mid]==s)
            cout<<mid;
        else if(a[mid] < s)
            low = mid+1;
        else
            high = mid-1;
    }
}
