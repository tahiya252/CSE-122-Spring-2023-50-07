//Codeforce problem no-71A
//Problem name-Way Too Long Words

#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    char x [8000];
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        scanf ("%s",&x);
        int l=strlen(x);

     if (l>10){
        printf ("%c",x[0]);
        printf ("%d",l-2);
        printf ("%c",x [l-1]);
     }
     else
        printf ("%s\n",x);
    }
    return 0;
}
