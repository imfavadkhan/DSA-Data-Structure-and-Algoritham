#include <iostream>

int power(int x , int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return power(x,n-1)*x;
    }
}
int main()
{
    std::cout<<power(5 , 2);
    return 0;
}