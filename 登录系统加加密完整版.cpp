#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int c;
char x;
void name(char x[5])
{
	int i,j;
	char  a[3][5]={"����","����","����"};
  	for(i=0;i<3;i++)
	{   
		printf("�������û���:");
		scanf("%s",&x[0]);
		for(j=0;j<3;j++)
		{
			if(strcmp(x,a[j])==0)
			{
			c=j;
			break;
		    }
		else continue;
		}
		if(j==3)
		{
	//	system("cls");
		printf("�û��������������������!\n");
		printf("����%d�λ���...\n",2-i);
		}
		else break;
	}
		if(i==3)printf("�������꣬�����˳�ϵͳ...\n");
		else printf("����%s������:\n",x);
	}
void pass(char y[6])	
{
	int i,j,f=0;
	char  b[3][6]={49,49,49,49,49,49,50,50,50,50,50,50,51,51,51,51,51,51};
	//��Ϊ�õ���getcha()�����룬��������1����Ӧ��Ϊ49�� 
    for(i=0;i<3;i++)//���λ��� 
	{
		for(j=0;j<100;j++)//100����Ϊ���Ļ����㣬������Ժ��˸�ɶ�� 
		{
		    y[j]=getch();
			if(y[j]!=8&&y[j]!=13)
			printf("*");
			 if(y[j]==13)
			 break;
			 if(y[j]==8)
			{
			printf("\b \b");
			j=j-2;
			}
		}
		printf ("\n");
		
		for(j=0;j<6;j++)
		{
		  if (b[c][j]!=y[j])
		   break;
		  else
		   continue ;
		}
		if(j!=6)
		 {
		// system("cls");
		 //printf("�˺ţ�%s\n",x);
		 printf("�����������\n");
		 printf("����%d�λ���...\n",2-i);
		 continue;
		 }
		
		if (j==6) 
		 break;  
	}
	 if(i==3)printf("�������꣬�����˳�ϵͳ...\n");
	 else 
	 printf ("������ȷ�����ڽ���ϵͳ\n");	
	
}
int  main()
{   
	char c[5];
	char d[6];
    name(c);
	pass(d);
	return 0;
}
