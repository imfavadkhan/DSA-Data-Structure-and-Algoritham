#include <iostream>

//recursive function
int recursiveFact(int n)
{
    if(n==0)
        return 1;
    else
        return recursiveFact(n-1)*n;
}
//using loop
int loopFact(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    std::cout<<recursiveFact(5)<<std::endl;
    std::cout<<loopFact(5)<<std::endl;
    return 0;
}

