/**********************************
*   Auther : Ahmed Mostafa        *
*   Date : 22/6/2018              *
**********************************/

bool checkPalindrome(char * inputString) 
{
    int i=0,counter=0;
    
    while(inputString[counter]!='\0')
    {
        ++counter;//7
    }
  
    for(i=0;i<=(counter/2);i++)//3
    {
        if(counter==1)
        {
            --counter;
            break;
        }
        else if(inputString[i]==inputString[counter-1-i])
        {
            if(i==(counter/2))
            {
                break;
            }
            continue;
        }
        else
        {
            break;   
        }
    }
    if(counter==0)
    {
        return true;
    }
    else if(i==(counter/2))
    {
        return true;
    }
    else
    {
        return false;    
    }
    
}
