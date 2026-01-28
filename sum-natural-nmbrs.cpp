#include <iostream>
//recursiveuSum
int recursiveuSum(int n)
{
    if(n==0)//base case
    {
        return 0;
    }
    else
    {
        return recursiveuSum(n-1)+n;//recursive case
    }
}
//using formula
int sformulaSum(int n)
{
    return n*(n+1)/2;
}
//using loop
int loopSum(int n)
{
    int s=0;
    for(int i=0; i<n; i++)
    {
        s=s+i;
    }
    return s;
}
int main()
{
    std::cout<<recursiveuSum(5)<<std::endl;
    std::cout<<sformulaSum(5)<<std::endl;
    std::cout<<loopSum(5)<<std::endl;
    
    

    return 0;
}