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
    
    printf("\n���ò�����Χ�밴0\n��ʼ��Ϸ�밴1\n������Ϸ�밴2\n");
    fprintf(fp2,"���ò�����Χ�밴0\n��ʼ��Ϸ�밴1\n������Ϸ�밴2\n");
    scanf("%d",&i);
	fprintf(fp2,"i=%d\n",i);
	if(i==0){
		printf("�����������Χ��maxNum=");
		fprintf(fp2,"�����������Χ��maxNum=\n");
		scanf("%d",&maxNum);
		fprintf(fp2,"maxNum=%d\n",maxNum);
		printf("���óɹ���\n");
		fprintf(fp2,"���óɹ���\n");
	    printf("����������0����ʼ��Ϸ������1��������Ϸ������2\n");
	    fprintf(fp2,"����������0����ʼ��Ϸ������1��������Ϸ������2\n");
	    scanf("%d",&i);
	    fprintf(fp2,"i=%d\n",i);
    }
    while(i==1){
    	 printf("maxNum=%d\n",maxNum);
        fprintf(fp2,"maxNum=%d\n",maxNum);
            number=rand()%maxNum;
            printf("���������һ��0~%d֮�����:\n",maxNum-1);
            fprintf(fp2,"���������һ��0~%d֮�����:\n",maxNum-1);
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
    printf("�������������1������������2\n");
    fprintf(fp2,"�������������1������������2\n");
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
