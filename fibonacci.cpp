#include <iostream>
int fibRecursive(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibRecursive(n-2) + fibRecursive(n-1);
    }
}

int fibIterative(int n)
{
    int t0=0,t1=1,s;
    if(n<=1)
    {
        return n;
    }
    for(int i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;

}
int main()
{
    std::cout<<"\n"<<fibRecursive(10)<<" ";
    std::cout<<"\n"<<fibIterative(10)<<" ";

    return 0;
}