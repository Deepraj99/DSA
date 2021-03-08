#include <stdio.h>
int main()
{
   int i, j, n, count=0,k,l=0;
   char a[20];
   printf("Enter any name : ");
   gets(a);
    for(k=0; a[k]!=NULL; k++)
   {
       count++;
   }
while(l<count)
{
  for(i=1; i<=5; i++)
   {
       for(l=0; l<count; l++)
       {
           if(a[l]==65||a[l]==97)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==1&&j==2||i==1&&j==5)
                    printf("  ");
                else if(i==1||j==2||j==5||i==3)
                    printf("# ");
                else
                    printf("  ");
             }
           }
            else if(a[l]==66||a[l]==98)
            {
              for(j=1; j<=5; j++)
               {
                 if(i==1&&j==5||i==3&&j==5||i==5&&j==5||i==3&&j==1||i==1&&j==1||i==5&&j==1)
                    printf("  ");
                 else if(i==1||i==3||i==5||j==2||j==5)
                    printf("# ");
                 else
                    printf("  ");
               }
            }
            else if(a[l]==67||a[l]==99)
            {
              for(j=1; j<=5; j++)
               {
                 if(i==1&&j==2||i==5&&j==2||j==1)
                    printf("  ");
                 else if(i==1||j==2||i==5)
                    printf("# ");
                 else
                    printf("  ");
               }
            }
            else if(a[l]==68||a[l]==100)
            {
              for(j=1; j<=5; j++)
               {
                 if(i==1&&j==5||i==5&&j==5||j==1)
                    printf("  ");
                 else if(i==1||j==2||i==5||j==5)
                    printf("# ");
                 else
                    printf("  ");
               }
            }
            else if(a[l]==69||a[l]==101)
            {
              for(j=1; j<=5; j++)
               {
                 if(i==3&&j==5||j==1)
                    printf("  ");
                 else if(i==1||j==2||i==5||i==3)
                    printf("# ");
                 else
                    printf("  ");
               }
            }
            else if(a[l]==70||a[l]==102)
            {
              for(j=1; j<=5; j++)
               {
                 if(i==3&&j==5||j==1||i==5&&j==3||i==5&&j==4||i==5&&j==5)
                    printf("  ");
                 else if(i==1||j==2||i==5||i==3)
                    printf("# ");
                 else
                    printf("  ");
               }
            }
            else if(a[l]==71||a[l]==103)
            {
              for(j=1; j<=5; j++)
               {
                 if(i==1&&j==2||i==5&&j==2||j==1||i==3&&j==3||i==2&&j==5)
                    printf("  ");
                 else if(i==1||j==2||i==5||i==3||j==5)
                    printf("# ");
                 else
                    printf("  ");
               }
            }
            if(a[l]==72||a[l]==104)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1)
                    printf("  ");
                else if(j==2||j==5||i==3)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==73||a[l]==105)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1)
                    printf("  ");
                else if(j==2)
                    printf("# ");
             }
           }
           if(a[l]==74||a[l]==106)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==5&&j==2||i==5&&j==5||i==1&&j==2||i==2&&j==2||i==3&&j==2)
                    printf("  ");
                else if(j==2||j==5||i==5)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==75||a[l]==107)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==3&&j==4||i==3&&j==5||i==2&&j==5||i==4&&j==5||i==1&&j==4||i==5&&j==4)
                    printf("  ");
                else if(i==3||j==2||j==5||j==4)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==76||a[l]==108)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1)
                    printf("  ");
                else if(i==5||j==2)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==77||a[l]==109)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1)
                    printf("  ");
                else if(i==2||j==2||j==5)
                    printf("# ");
                else if(i==3&&j==3||i==3&&j==4)
                    printf("* ");
                    else
                    printf("  ");
             }
           }
           if(a[l]==78||a[l]==110)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1)
                    printf("  ");
                else if(i==2&&j==3||i==4&&j==5||j==5||j==2||i==4&&j==4)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==79||a[l]==111)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==1&&j==2||i==1&&j==5||i==1&&j==5||i==5&&j==5||i==5&&j==2)
                    printf("  ");
                else if(i==1||j==2||j==5||i==5)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==80||a[l]==112)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==1&&j==5||i==3&&j==5||i==4&&j==5||i==5&&j==5)
                    printf("  ");
                else if(i==1||j==2||j==5||i==3)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==81||a[l]==113)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==1&&j==2||i==1&&j==5||i==1&&j==5||i==5&&j==2)
                    printf("  ");
                else if(i==1||j==2||j==5||i==5||i==2&&j==3||i==4&&j==4)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==82||a[l]==114)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==1&&j==5||i==3&&j==5||i==4&&j==5)
                    printf("  ");
                else if(i==1||j==2||j==5||i==3||i==4&&j==4||i==5&&j==5)
                    printf("# ");
                else if(i==5&&j==5)
                    printf("*");
                else
                    printf("  ");
             }
           }
           else if(a[l]==83||a[l]==115)
            {
              for(j=1; j<=5; j++)
               {
                 if(j==1||i==1&&j==2||i==3&&j==2||i==3&&j==5||i==5&&j==5)
                    printf("  ");
                 else if(i==1||i==3||i==5||i==2&&j==2||i==4&&j==5)
                    printf("# ");
                 else
                    printf("  ");
               }
            }
            if(a[l]==84||a[l]==116)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1)
                    printf("  ");
                else if(i==1||j==3||j==4)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==85||a[l]==117)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1||i==5&&j==2||i==5&&j==5)
                    printf("  ");
                else if(j==2||j==5||i==5)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==86||a[l]==118)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1&&j==2)
                    printf("  ");
                else if(i==1&&j==1||i==3&&j==2||i==5&&j==3||i==3&&j==4||i==1&&j==5)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==87||a[l]==119)
           {
             for(j=1; j<=5; j++)
             {
                if(j==1)
                    printf("  ");
                else if(j==2||j==5||i==4)
                    printf("# ");
                else if(i==5&&j==3||i==5&&j==4)
                    printf("* ");
                else
                    printf("  ");
             }
           }
           if(a[l]==88||a[l]==120)
           {
             for(j=1; j<=5; j++)
             {
                if(i==j||j==6-i)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==89||a[l]==121)
           {
             for(j=1; j<=5; j++)
             {
                 if(i==4&&j==4||i==5&&j==5)
                    printf("  ");
                else if(i==j||j==6-i)
                    printf("# ");
                else
                    printf("  ");
             }
           }
           if(a[l]==90||a[l]==122)
           {
             for(j=1; j<=5; j++)
             {
                if(j==6-i||i==5||i==1)
                    printf("# ");
                else
                    printf("  ");
             }
           }
        }printf("\n");
   }
 }
}
