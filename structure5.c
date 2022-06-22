#include<stdio.h>
 struct Box
    {
        int lenght;
        int width;
        int height;
    };


int main()
{
    int n=0,i=0;
    scanf("%d",&n);
    struct Box bobj;
    int *boxes = NULL;
     boxes = (int*) malloc(n* sizeof(int));
     for(i=0;i<n;i++)
     {
         scanf("%d %d %d",bobj.lenght,bobj.height,bobj.width);
     }


   

    return 0;
}