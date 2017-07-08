#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    FILE *fp,*fp2;
    char a;
    int i,number;
    int maxNum=100;
    int ans=0;
    
 	if((fp2=fopen("file1.txt","w"))==NULL){ 
        printf("Cannot open file!\n");
        exit(0);} 
    if ((fp=fopen("README.txt","r"))==NULL){
            printf("Cannot open file!\n");exit(0);}
    while((a=fgetc(fp))!=EOF){
    putchar(a);}
    srand( (unsigned)time( NULL ) );
    number=rand()%100;

    printf("\n please enter a number\n");
    fputs("\n please enter a number\n",fp2);
    scanf("%d",&ans);
	fprintf(fp2,"%d",ans);
    while(number!=ans){
        if(number>ans){
            printf("Num is small\n");
            fprintf(fp2,"Num is small\n");
        }else{
        printf("Num is big\n");
        fprintf(fp2,"Num is big\n");
        }
        scanf("%d",&ans);
        fprintf(fp2,"%d",ans);
    }
    printf("Bingo!\n");
    fprintf(fp2,"Bingo!\n");
    fclose(fp2);
    fclose(fp);
}
