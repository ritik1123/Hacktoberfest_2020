#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int id;
    char ch[20];
}st;
st s;FILE* fp;
void display(FILE*fp)
{
    if(fp==NULL)
        printf("The file is empty please enter data first");
    else{
    rewind(fp);
    printf("ID\tName\t\n");
    }
    while(fread(&s,sizeof(s),1,fp))
        printf("%d\t%s\t\n",s.id,s.ch);
}
void read(FILE *fp){
    int n,i;
    printf("\nEnter the number of student\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter the Name\n");
    scanf("%s",s.ch);
    printf("Enter the id\n");
    scanf("%d",&s.id);
    fwrite(&s,sizeof(s),1,fp);
    }
fclose(fp);
}
int main(){
    int a=6;int x;int n;
    while(a!=8)
    {
    printf("\n1. for Student\n2. for trainer\n3. for trainer Head\n4. for Project Manager\n5. for Project Head\n6. for Director\n7. for ProVc\n8. for exit\nEnter your choice: ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("1 to read\n2 to display\n");
            scanf("%d",&x);
            switch(x){
                case 1:
                    fp=fopen("Student.txt","w+");
                    read(fp);
                    fclose(fp);
                    break;
                case 2:
                    fp=fopen("Student.txt","r");
                    display(fp);
                    fclose(fp);
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            break;
        case 2:
            printf("1 to read\n2 to display\n");
            scanf("%d",&x);
            switch(x){
                case 1:
                    fp=fopen("Trainer.txt","w");
                    read(fp);
                    fclose(fp);
                    break;
                case 2:
                    fp=fopen("Trainer.txt","r");
                    display(fp);
                    fclose(fp);
                    break;
                default:
                    printf("Invalid input\n");
                    break;
            }
            break;
        case 3:
                printf("1 to read\n2 to display\n");
                scanf("%d",&x);
                switch(x){
                    case 1:
                    fp=fopen("t.txt","w");
                    read(fp);fclose(fp);
                    break;
        case 2:
            fp=fopen("t.txt","r");
            display(fp);
            fclose(fp);
            break;
        default:
            printf("Invalid input\n");
            break;
        }
        break;
        case 4:
            printf("1 to read\n2 to display\n");
            scanf("%d",&x);
        switch(x){
                case 1:
fp=fopen("pr.txt","w");
read(fp);fclose(fp);
break;
case 2:
fp=fopen("pr.txt","r");
display(fp);
fclose(fp);
break;
default:
printf("Invalid input\n");
break;
}
break;
case 5:
printf("1 to read\n2 to display\n");
scanf("%d",&x);
switch(x)
{
case 1:
fp=fopen("pr1.txt","w");
read(fp);
fclose(fp);
break;
case 2:
fp=fopen("pr1.txt","r");
display(fp);
fclose(fp);
break;
default:
printf("Invalid input\n");
break;
}
break;
case 6:
printf("1 to read\n2 to display\n");
scanf("%d",&x);
switch(x)
{
case 1:
fp=fopen("d.txt","w");
read(fp);fclose(fp);
break;
case 2:
fp=fopen("d.txt","r");
display(fp);
fclose(fp);
break;
default:
printf("Invalid input\n");
break;
}
break;
case 7:
printf("1 to read\n2 to display\n");
scanf("%d",&x);
switch(x)
{
case 1:
fp=fopen("vc.txt","w");
read(fp);fclose(fp);
break;
case 2:
fp=fopen("vc.txt","r");
display(fp);
fclose(fp);
break;
default:
printf("Invalid input\n");
break;
}
break;
case 8:
printf("Exiting...\n");

break;
default:
printf("Invalid input\n");
}
}
}
