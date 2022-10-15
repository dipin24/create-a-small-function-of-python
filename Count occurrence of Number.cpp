#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6]={1,2,3,1,2,5};
    unordered_map<int,int> m;
    for(int i=0;i<6;i++)
        m[a[i]]++;
        
    // for(auto j : m)
    //     cout<<j.first<<" "<<j.second<<endl;


    // Distinct Elements

    for(auto j : m)
    {
        if(j.second == 1)
            cout<<j.first<<endl;
    }

    return 0;


}
