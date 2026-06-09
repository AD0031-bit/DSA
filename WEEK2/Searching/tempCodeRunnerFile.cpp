int binarysearch(vector<int>&arr,int x)
{ int n=arr.size();
int low=0;
int high=n-1;
while(low<=high)
{
    int mid=(low+high)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        high=mid-1;
    }
    else 
    {
        low=mid+1;
    }


return -1;


}}
int main()
{
    vector<int>v={10,10};
    int x=10;
    cout<<binarysearch(v,x);
}