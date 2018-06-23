/**********************************
*   Auther : Ahmed Mostafa        *
*   Date : 23/6/2018              *
**********************************/

int shapeArea(int n) 
{
   int Shape_Area=1 , Sides=4;
   int i;
   
   for (i=0;i<n;i++)
   {
        Shape_Area+=i*4;  
   }
   
   return Shape_Area;
}