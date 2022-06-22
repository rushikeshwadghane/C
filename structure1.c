#include<stdio.h>
#include<string.h>

struct demo
{
   char subject[10];
   int mark;  
};

struct Student 
{
    int roll;
    char name[10];
    struct demo dobj[3];
};

struct Student add()
{
    struct Student stemp;
    struct demo dtemp;
    int rollno=0,marks=0, i=0;
    char name[10],subject[10];
    printf("Enter student: Name & Roll no");
    scanf("%s%d",name,&rollno);
    stemp.roll = rollno;
    strcpy(stemp.name, name);
    
    for(i=0;i<3;i++){
        printf("Enter Subject name and Mark:%d\n",i+1);
        scanf("%s%d", subject, &marks);
        dtemp.mark = marks;
        strcpy(dtemp.subject, subject);
        stemp.dobj[i] = dtemp;
    }
    return stemp;
}

void display(struct Student sobj[],int n)
{
    int i=0,j=0;
    for(i=0;i<n;i++){
        printf("Name:%s\t",sobj[i].name);
        printf("Roll no:%d\n",sobj[i].roll);
        printf("Subject and Mark:\n");
       for(j=0;j<3;j++){
        printf("%s:%d\n",sobj[i].dobj[j].subject,sobj[i].dobj[j].mark);
        
       }
    }

}

int main()
{
    struct Student sobj[100];
    int n=0,std=0;
    printf("Enter no of student:");
    scanf("%d",&n);
   
    for(std=0;std<n;std++){
      sobj[std]=add();
    }     
    display(sobj, n);
    return 0;
}
