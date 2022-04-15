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