/**********************************
*   Auther : Ahmed Mostafa        *
*   Date : 23/6/2018              *
**********************************/

int adjacentElementsProduct(arr_integer inputArray) 
{
    int i=0,max=0,temp=2;
    int size=inputArray.size;
    
    max=inputArray.arr[i]*inputArray.arr[i+1];
    
    for(i=1;i<(size-1);i++)
    {

            temp=inputArray.arr[i]*inputArray.arr[i+1];
            if(temp>max)
            {
                max=temp;
            }
            else{}
    }
    return max;     
}