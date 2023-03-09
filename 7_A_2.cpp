#include<iostream>

using namespace std;

void func(int a[],int &n)
{
    cout<<"int size: "<<sizeof(n)<<endl;
    cout<<"array size: "<<sizeof(a)<<endl;
}

int main()
{
    int n=10;
    int a[10];
    func(a,n);
    cout<<"int size: "<<sizeof(n)<<endl;
    cout<<"array size: "<<sizeof(a)<<endl;
    return 0;
}
