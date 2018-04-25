#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    int i=0, w=0, k=1, l=0, j=0;
    scanf("%s", &str);
    for(i=0; i<n; i++)
    {
            if(str[i]=='(')
            {
                if(l<=j)
                {l=j;
                 j=0;}

                for(j=1; str[i+j]!=')';j++)
               {
                   if(str[i+j]!='_' && k==1)
                   {
                       w++;
                       k=0;
                   }
                   else if(str[i+j]=='_' )
                    k=1;

               }
                    i=i+j;
                    j=0;
                    k=1;
            }
        else if(str[i]!='_')
        {
            j++;
        }
        else if(str[i]=='_' )
        {
            if(l<=j)
                l=j;
            j=0;

        }

    }

       if(l<=j)
        l=j;
    printf("%d %d", l, w);
     return 0;
}
