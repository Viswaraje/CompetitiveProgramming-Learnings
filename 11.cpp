//Ambitious kid

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int>arr(n);

    for(auto &it:arr)
    {
        cin>>it;
    }


    sort(arr.begin(),arr.end());



    //no of ops needed to reduce arr[0]

    
    


     int ans=INT_MAX;

     for(int i=0;i<n;i++)
     {

        if(arr[i]>=0)
        {
            ans=min(ans,arr[i]);
        }else{
            ans=min(ans,-1*arr[i]);
        }
     }

     cout<<ans<<endl;


    
}