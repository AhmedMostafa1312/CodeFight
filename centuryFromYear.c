/**********************************
*   Auther : Ahmed Mostafa        *
*   Date : 22/6/2018              *
**********************************/

int centuryFromYear(int year) 
{
    
    for(int i=1;i<2005;i+=100)
    {
        if(year>=i && year<i+100)
        {
            return ((i+100)/100);
            break;
        }
        else
        {
            continue;
        }
    }
}
