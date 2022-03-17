#include<iostream>
#include<vector>
using namespace std;
void binary_search(vector<int>,int,int,int);
int count;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> arr;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);

        }
        int key;
        cin>>key;
        binary_search(arr,key,0,arr.size()-1);
        ::count=0;
    }
    return 0;
}

void binary_search(vector<int>arr,int key,int lb,int ub)
{
    int mid=lb+(ub-lb)/2;

    if(lb>ub)
    {
        cout<<"Not Present "<<::count;
        return;
    }
    ::count++;
    if(arr[mid]==key)
    {
        cout<<"Present "<<::count;
        return;
    }
    else if(arr[mid]<key)
    {
        binary_search(arr,key,mid+1,ub);
    }
    else
    {
        binary_search(arr,key,lb,mid-1);
    }
}