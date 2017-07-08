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
    
    printf("\n设置猜数范围请按0\n开始游戏请按1\n结束游戏请按2\n");
    fprintf(fp2,"设置猜数范围请按0\n开始游戏请按1\n结束游戏请按2\n");
    scanf("%d",&i);
	fprintf(fp2,"i=%d\n",i);
	if(i==0){
		printf("请输入猜数范围：maxNum=");
		fprintf(fp2,"请输入猜数范围：maxNum=\n");
		scanf("%d",&maxNum);
		fprintf(fp2,"maxNum=%d\n",maxNum);
		printf("设置成功！\n");
		fprintf(fp2,"设置成功！\n");
	    printf("设置请输入0，开始游戏请输入1，结束游戏请输入2\n");
	    fprintf(fp2,"设置请输入0，开始游戏请输入1，结束游戏请输入2\n");
	    scanf("%d",&i);
	    fprintf(fp2,"i=%d\n",i);
    }
    while(i==1){
    	 printf("maxNum=%d\n",maxNum);
        fprintf(fp2,"maxNum=%d\n",maxNum);
            number=rand()%maxNum;
            printf("请玩家输入一个0~%d之间的数:\n",maxNum-1);
            fprintf(fp2,"请玩家输入一个0~%d之间的数:\n",maxNum-1);
            scanf("%d",&ans);
            fprintf(fp2,"%d\n",ans);
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
    
	system("cls");
    printf("想继续玩请输入1，结束请输入2\n");
    fprintf(fp2,"想继续玩请输入1，结束请输入2\n");
    scanf("%d",&i);
    fprintf(fp2,"%d\n",i);
    
}
    while(i==2){
    	printf("GAME OVER!");
    	fprintf(fp2,"GAME OVER!");
    	break;
	}
    fclose(fp2);
    fclose(fp);
}
