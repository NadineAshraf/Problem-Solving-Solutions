#include <stdio.h>


int Longest_Connsecutive(int number,int array_size,int *arr)
{
    int count=0,i,Longest_count=0;
    for(i=0; i<array_size; i++)
    {
       if(number == arr[i])
       {
           count++;
           if(count > Longest_count)
           {
               Longest_count = count;
           }
       }
       else
       {
           count=0;
       }
    }
    return Longest_count;
}
int main() 
{
  int Array[14]={1,2,2,3,3,3,3,4,4,4,4,3,3,3};
  int result;
  result = Longest_Connsecutive(3,14,Array);
  printf("%d",result);
  
  
  
    return 0;
}
