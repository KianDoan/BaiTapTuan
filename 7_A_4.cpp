#include<iostream>

using namespace std;

int binarySearch(int* arr,int n,int x,int index)
{
    if(index <= n)
    {
        index = (n-index)/2;
        if(*(arr+index) == x)
            return index;
        if(*(arr+index) < x)
            return binarySearch(arr,n,x,index+1);
        if(*(arr+index) > x)
            return binarySearch(arr,index-1,x,0);
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Nhap cac phan tu cua mang theo sap xep tang dan: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Nhap vao so can tim: ";
    int x;
    cin>>x;
    cout<<binarySearch(arr,n,x,0);
}
