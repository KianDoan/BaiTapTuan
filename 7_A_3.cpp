#include<iostream>

using namespace std;

void count_even(int *a)
{
    for(int i=0;i<5;i++)
        if(a[i]%2==0)
            cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    count_even(arr);
    count_even(arr+sizeof(arr)/4-5);
    return 0;
}
