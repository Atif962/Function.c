#include<stdio.h>
void h(){
     int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        if(j==3 || i==3)
           printf("*  ");
        else printf("   ");
        }
        printf("\n");
    }
}
void g(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

   int a;
   for(int i = 1;i<=n;i++){
    if(i%2!=0) a=1;
    else a = 0;
    for(int j=1; j<=i;j++){
        printf("%d",a);
        if(a==0) a=1;
        else a=0;
    }
    printf("\n");
    

   }
}
void england(){
    printf("you are in England\n");
    return;
}
void australia(){
    printf("you are in australia\n");
    return;
}
void india(){
    printf("are you from India\n");
    return;
}
int main()
{
    india();
    england();
    india();
    australia();
    h();
    g();
    return 0;
    
    
}