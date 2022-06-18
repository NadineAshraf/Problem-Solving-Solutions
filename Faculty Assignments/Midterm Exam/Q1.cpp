#include <iostream>
using namespace std;

void factor_list(const int input)
{
    for(int i=2; i<=input; i++)
    {
        if(input%i == 0)
        cout<<i<<" ";
    }
    
}
int main()
{
    factor_list(15);

    return 0;
}
