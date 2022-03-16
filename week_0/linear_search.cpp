#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
           int a;
           cin>>a;
           arr.push_back(a);
        }
        int key;
        int c=0;
        cin>>key;
        for(int i=0;i<n;i++)
        {
            if(key==arr[i])
            {   
                c=1;
                cout<<"Found at "<<i+1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"Not found";
        }
    }

    return 0;
}
