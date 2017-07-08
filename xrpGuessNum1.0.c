#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    FILE *fp;
    char a;
    int i,number;
    int maxNum=100;
    int ans=0;
    int cnt=1;

    if ((fp=fopen("README.txt","r"))==NULL){
            printf("Cannot open file!\n");exit(0);}
    while((a=fgetc(fp))!=EOF)
    putchar(a);
    printf("\n");
    srand( (unsigned)time( NULL ) );
    number=rand()%100;

    printf("\n please enter a number\n");
    scanf("%d",&ans);
    while(number!=ans){
        if(number>ans){
            printf("Num is small\n");
        }else{
        printf("Num is big\n");
        }
        scanf("%d",&ans);
    }
    printf("Bingo!\n");

    fclose(fp);
}
