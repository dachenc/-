#include<stdio.h>
#include<math.h>
#include<string.h> 
#include<stdlib.h>//ͨ���ú���ͷ����ĺ������ı����̨�ı�������ɫ  
#include<windows.h>
//ͷ�ļ������������õ��˸ı����̨�Ŀ�Ⱥ͸߶� 
#define M 100
 
struct student
{
	char name[25];//����  
	char num[25];//ѧ��  
	char credit[20];//���֤��  
	char native[35];//����  
	char tel[25];//�ֻ���  
	int special;//רҵ  
	int banji;//�༶  
	int math,yy,wl,cyy,pe;//��ѧ��Ӣ�����C���ԡ�����  
	double ave;//ƽ���� 
};
 
void input(struct student stu[M]);
void output(struct student stu[M]);
void lookfor(struct student stu[M]); //�Զ����ѯѧ����Ϣ����
void modify(struct student stu[M]); //�޸���Ϣ 
void order(struct student stu[M]); //���� 
void delete_student(struct student stu[M]); //ɾ����Ϣ 
void xuehao(struct student stu[M]);        
void xingming(struct student stu[M]);  
void fileread(struct student stu[M]);  //����ѧ����Ϣ 
void filewrite(struct student stu[M]);  
void yanshi(char *p); 
void kaifaren(struct student stu[M]);
void xitongjieshao(struct student stu[M]);
 
int count=0; 
struct student t;
 
int main()   
{  
	int choice,sum;  
	struct student stu[M];         
	system("mode con:cols=400 lines=30000"); //���ڿ���̨�Ŀ�Ⱥ͸߶�  
	system("color 0b");  //���ڿ���̨�ı�����������ɫ  
	point1:    
	sum=0;
	
	char qwe[105] = {"\t\t\t\t\t\t\t\t\3\3\3\3\3\3\3\3\3\3\3\3\3��ӭʹ��ѧ����Ϣ����ϵͳ\3\3\3\3\3\3\3\3\3\3\n"};
	yanshi(qwe);
	do
	{  
		printf("\t\t\t\t\t\t\t\t-------------------------------------------------\n");  
		printf("\t\t\t\t\t\t\t\t+               ѧ����Ϣ����ϵͳ            +\n");  
		printf("\t\t\t\t\t\t\t\t-------------------------------------------------\n");  
		printf("\t\t\t\t\t\t\t\t\t\t ***************\n");  
		printf("\t\t\t\t\t\t\t\t\t\t 1�����ѧ����Ϣ\n");  
		printf("\t\t\t\t\t\t\t\t\t\t 2�����ѧ����Ϣ\n");  
		printf("\t\t\t\t\t\t\t\t\t\t 3����ѯѧ����Ϣ\n");  
		printf("\t\t\t\t\t\t\t\t\t\t 4���޸�ѧ����Ϣ\n");  
		printf("\t\t\t\t\t\t\t\t\t\t 5��ɾ��ѧ����Ϣ\n");  
		printf("\t\t\t\t\t\t\t\t\t\t 6������ѧ����Ϣ\n");   
		printf("\t\t\t\t\t\t\t\t\t\t 7����ȡ�ļ�ѧ��\n");
		printf("\t\t\t\t\t\t\t\t\t\t 8�����浽�ļ�\n");
		printf("\t\t\t\t\t\t\t\t\t\t 9���˳�ϵͳ\n"); 
		printf("\t\t\t\t\t\t\t\t\t\t 10��������Ա����\n");
		printf("\t\t\t\t\t\t\t\t\t\t 11��ϵͳ����\n");
		printf("\t\t\t\t\t\t\t\t\t\t ***************\n");   
		printf("���������ѡ��\n");
		
		scanf("%d",&choice);
		fflush(stdin);       //������뻺����  
		if (choice>9||choice<=0)
		{ 
			sum++;
			if (sum>=5)  
			{  
				printf("��������������,�������¿�ʼ\n"); 
				system("pause");  //������ͣ  
				system("cls");   //������� 
				goto point1;
			}
		}
		switch (choice)       //����ѡ�񣬵��ò�ͬ�ĺ�������ɲ�ͬ������  
		{  
			case 1:input(stu);break;         
			case 2:output(stu);break;  
			case 3:lookfor(stu);break;  
			case 4:modify(stu);break;  
			case 5:delete_student(stu);break;  
			case 6:order(stu);break;  
			case 7:fileread(stu);break;  
			case 8:filewrite(stu);break; 
			case 9:printf("��лʹ��ѧ����Ϣ����ϵͳ,��ص�����!!!\n");system("pause");break;
			case 10:kaifaren(stu);break;
			case 11:xitongjieshao(stu);break;
			
			default:printf("��Ч��ѡ��!!!����������!!!\n");break;
		} 
	}while (choice!=9);
	
	printf("the program is over!!!\n");
	return 0;
}
 
void input(struct student stu[M])
{
	int len,size; 
	system("cls");  
	printf("�����Ҫ����ѧ������Ϣ\n"); 
	printf("%d",count); 
	 
	do
	{  
		printf("��������11λ������ɵ�ѧ��ѧ��\n"); 
		scanf("%s",&stu[count].num); 
		len=strlen(stu[count].num);
	}while(len < 11);
	  
	printf("������ͬѧ������\n");  
	scanf("%s",stu[count].name); 
	 
	do
	{
		printf("��������18λ������ɵ�ѧ�����֤��\n");
		scanf("%s",&stu[count].credit);
		size=strlen(stu[count].credit);  
	}while(size!=18);
	                                               
	printf("������ѧ���ļ���\n");
	scanf("%s",&stu[count].native);
	printf("������ѧ�����ֻ�����\n");
	scanf("%s",&stu[count].tel);  
	printf("����������Ҫ��רҵ���ţ�1���������ѧ 2��ͨ�Ź��� 3���������\n");
	scanf("%d",&stu[count].special);  
	printf("�������Ӧ��ѧ���༶����:1����һ�� 2�������� 3��������\n");  
	scanf("%d",&stu[count].banji); 
	do
	{  
		printf("���������벻����100��ѧ�����Ƴɼ�\n"); 
		scanf("%d%d%d%d%d",&stu[count].math,&stu[count].yy,&stu[count].wl,&stu[count].cyy,&stu[count].pe);
	}while(stu[count].math>100||stu[count].yy>100||stu[count].wl>100||stu[count].cyy>100||stu[count].pe>100);
	  
	stu[count].ave=(stu[count].math+stu[count].yy+stu[count].wl+stu[count].cyy+stu[count].pe)/5.0;
	count++;  
}
 
void output(struct student stu[M]) 
{  
	int j;  
	system("cls");  
	if (count==0)  
	{  
		printf("��ǰ�Ѵ�ѧ����ϢΪ0��\n");  
		return;  
	}
	
	for (j=0;j<count;j++)  
	{  
		printf("ѧ��\t\t  ����\t\t���֤��\t����\t�ֻ���\t\tרҵ\t\t�༶\t��ѧ\tӢ��\t����\tC����\t����\tƽ����\n");  
		for (j=0;j<count;j++)
		{
			printf("%s\t",stu[j].num);  
			printf("%s\t",stu[j].name);  
			printf("%s\t",stu[j].credit);  
			printf("%s\t",stu[j].native);  
			printf("%s\t",stu[j].tel);
			
			if (stu[j].special==1)
				printf("�������ѧ\t");
			else if (stu[j].special==2)
				printf("ͨ�Ź���\t");
			else  
				printf("�������\t");
			printf("%d\t",stu[j].banji);
			printf("%d\t",stu[j].math);
			printf("%d\t",stu[j].yy);
			printf("%d\t",stu[j].wl);
			printf("%d\t",stu[j].cyy);
			printf("%d\t",stu[j].pe);
			printf("%.1lf\t\n",stu[j].ave); 
		}  
	}  
}
void lookfor(struct student stu[M])       //�Զ����ѯѧ����Ϣ����  
{  
	int j,flag=0;  
	char xh[25];  
	system("cls");  
	if (count==0)  
	{  
		printf("��ǰ�Ѵ�ѧ����ϢΪ0��,�޷���ѯ!!!\n");  
		return;
	}
	else
	{
		printf("����������Ҫ�鿴��ͬѧѧ��\n");
		scanf("%s",&xh);
		fflush(stdin);
		for (j=0;j<count;j++)  
		{  
			if (strcmp(stu[j].num,xh)==0)  //ͨ���ַ��������Ѵ����ѧ����Ϣ���бȽ�,�ҳ�Ҫ�鿴��ѧ��  
			{  
				printf("ѧ��\t\t����\t\t\t\t���֤��\t\t\t\t\t����\t�ֻ���\t\t\te\t\tרҵ\t\t�༶\t��ѧ\tӢ��\t����\tC����\t����\tƽ����\n");
				printf("%s\t",stu[j].num);  
				printf("%s\t",stu[j].name);  
				printf("%s\t",stu[j].credit);  
				printf("%s\t",stu[j].native);  
				printf("%s\t",stu[j].tel);  
				if (stu[j].special==1)  
					printf("�������ѧ\t");  
				else if (stu[j].special==2)  
					printf("ͨ�Ź���\t");      
				else  
					printf("�������\t");
				printf("%d\t",stu[j].banji);
				printf("%d\t",stu[j].math);
				printf("%d\t",stu[j].yy); 
				printf("%d\t",stu[j].wl);  
				printf("%d\t",stu[j].cyy);  
				printf("%d\t",stu[j].pe);  
				printf("%.1lf\t",stu[j].ave);  
			}  
		}  
		if (j==count)  
			printf("�ܱ�Ǹ,û��������Ҫ��ѧ����Ϣ\n");  
	}  
}  
void modify(struct student stu[M])
{  
	int j,flag=0,course;
	char xh[25];
	system("cls");
	if (count==0)
	{
		printf("��ǰ�Ѵ�ѧ����ϢΪ0��,�޷��޸�!!!\n");
		return;
	}
	else  
	{  
		printf("����������Ҫ�޸ĵ�ͬѧѧ��\n");
		scanf("%s",&xh);  
		fflush(stdin);  
		for (j=0;j<count;j++)  
			if (strcmp(stu[j].num,xh)==0)
			{  
				printf("��ȷ��Ҫ�޸�ѧ������Ϣ��???�����ȷ���Ļ�,��ص�������!!!\n");  
				printf("ѡ��γ�: 1����ѧ 2��Ӣ�� 3������ 4��C���� 5������\n");
				scanf("%d",&course);  
				printf("����������Ҫ�޸ĺ��ѧ���ɼ�\n");
				switch(course)  
				{  
					case 1:scanf("%d",&stu[j].math);break;  
					case 2:scanf("%d",&stu[j].yy);break;
					case 3:scanf("%d",&stu[j].wl);break;  
					case 4:scanf("%d",&stu[j].cyy);break;  
					case 5:scanf("%d",&stu[j].pe);break;  
					default:printf("��Ч��ѡ��!!!����������!!!\n");break;  
				} 
			}
	}  
}  
void delete_student(struct student stu[M])
{  
	int choice;  
	system("cls");  
	if (count==0)  
	{  
		printf("��ǰ�Ѵ�ѧ����ϢΪ0��,�޷�ɾ��!!!\n");  
		return;  
	}  
	else  
	{  
		printf("��ѡ������Ҫɾ���ķ�ʽ:1��ѧ�� 2������(����������������,��ô�޷�ɾ��,��ѡ��ѧ��ɾ��) 3��ȡ��\n");
		scanf("%d",&choice);  
		switch(choice)
		{  
			case 3:return;break;  
			case 2:xingming(stu);break;
			case 1:xuehao(stu);break;  
			default:printf("��Ч��ѡ��!!!����������!!!\n");break;  
		}  
	}  
}  
void order(struct student stu[M])
{  
	int j,k,choice,index;  
	system("cls");  
	printf("����������Ҫ��������ķ�ʽ(��������ķ�ʽ���ǽ���)!!!\n");  
	printf("1����ѧ 2��Ӣ�� 3������ 4��C���� 5������ 6��ƽ����\n");  
	scanf("%d",&choice);
	
	switch (choice)  
	{
		case 1:for (j=0;j<count;j++)  
		{
			index=j;   
			for (k=j+1;k<count;k++)  
				if (stu[k].math>stu[index].math)  
				{
					t=stu[k];stu[k]=stu[index];stu[index]=t;
				}  
		};break; 
		 
		case 2:for (j=0;j<count;j++)
		{
			index=j;   
			for (k=j+1;k<count;k++)
				if (stu[k].yy>stu[index].yy)
				{
					stu[k]=stu[index];
				}
		 };break;
		 
		case 3:for (j=0;j<count;j++)  
		{
			index=j;   
			for (k=j+1;k<count;k++)  
				if (stu[k].wl>stu[index].wl)  
				{
					t=stu[k];stu[k]=stu[index];stu[index]=t;
				}  
		};break;
		
		case 4:for (j=0;j<count;j++)  
		{
			index=j;   
			for (k=j+1;k<count;k++)  
				if (stu[k].cyy>stu[index].cyy)  
				{
					t=stu[k];stu[k]=stu[index];stu[index]=t;
				}  
		};break;
		
		case 5:for (j=0;j<count;j++)  
		{
			index=j;   
			for (k=j+1;k<count;k++)  
				if (stu[k].pe>stu[index].pe)  
				{
					t=stu[k];stu[k]=stu[index];stu[index]=t;
				}  
		};break;
		 
		case 6:for (j=0;j<count;j++)
		{
			index=j;   
			for (k=j+1;k<count;k++)  
			if (stu[k].ave>stu[index].ave)  
			{
				t=stu[k];stu[k]=stu[index];stu[index]=t;
			}
		};break;
		  
		default:printf("��Ч��ѡ��!!!����������!!!\n");break;  
	}  
}  
void xuehao(struct student stu[M])      //�Զ���ͨ��ѧ�ŷ�ʽɾ��ѧ����Ϣ����  
{  
	int j,index=0,k=count;  
	char xh[25];  
	system("cls");  
	printf("����������Ҫɾ����ͬѧѧ��\n");
	scanf("%s",xh);
	
	fflush(stdin);  
	for (j=0;j<count;j++)  
	{
		if (strcmp(stu[j].num,xh)==0)  
		{     
			for (j=index;j<count;j++)  
				stu[j]=stu[j+1];  
			count--;  
			if (count<k)  
				printf("���Ѿ�ɾ���ɹ�\n");  
		}  
		index++;
	}
	  
	if (j==count)  
		printf("��Ǹ!!!û��������Ҫɾ����ѧ����Ϣ!*_*!\n");  
}
void xingming(struct student stu[M])       //�Զ���ͨ��������ʽɾ��ѧ����Ϣ����  
{  
	int flag=0,j,k=count;  
	char xm[25];  
	system("cls");  
	printf("����������Ҫɾ����ͬѧ����\n");  
	scanf("%s",xm);
	 
	fflush(stdin);  
	for(j=0;j<count;j++)  
	{  
		if (strcmp(stu[j].num,xm)==0)  
		{  
		
			for (j=flag-1;j<count;j++)               
				stu[j]=stu[j+1];  
			count--;  
			if (count<k)  
				printf("���Ѿ�ɾ���ɹ�\n");  
		}     
		flag++;
	}
	 
	if (j==count)  
		printf("��Ǹ!!!û��������Ҫɾ����ѧ����Ϣ!*_*!\n");  
}  
void yanshi(char *p)
{  
	while (1)  
	{  
		if (*p!=0)  
			printf("%c",*p++);  
		else  
			break;  
		Sleep(100);
	}  
}
void filewrite(struct student stu[M])
{  
	int j=0;  
	char c;  
	FILE *fp;  
	printf("��ѡ���Ƿ�Ҫ�����������ѧ����Ϣ:'y'����'n'		\n");  
	scanf("%c",&c);
	  
	fflush(stdin);  
	while(c!='y'&&c!='n')
	{  
		if (c!='y'&&c!='n')  
			printf("�������,����������\n");  
		printf("���²������Ḳ���Ѵ洢������,ȷ��������'y'��'n'		\n"); 
		scanf("%c",&c); 
		fflush(stdin);  
	}
	  
	if (c=='y')  
	{  
		if((fp=fopen("d:\\stu.dat","wb"))==NULL)  
		{  
		    printf("�ļ��򿪴���,�����޷�����\n");  
		    exit(0);  
		}  
		for(j=0;j<count;j++)  
		{
			fwrite(&stu[j],sizeof(struct student),1,fp);  
		}  
		fclose(fp);  
		if(count==0)  
		    printf("û���ļ����޷�����\n");  
		else  
			printf("���ݴ洢���\n");  
		system("pause");  
	}  
	else  
	    return;  
}  
void fileread(struct student stu[M])
{  
	int j=0;  
	char c;  
	FILE *fp;  
	system("cls");  
	printf("��ѡ���Ƿ�Ҫ�����������ѧ����Ϣ:'y'����'n'		\n");  
	scanf("%c",&c);
	
	fflush(stdin);  
	while(c!='y'&&c!='n')
	{  
		if (c!='y'&&c!='n')  
		printf("�������,����������\n");  
		printf("���²������Ḳ���Ѵ洢������,ȷ��������'y'��'n'		\n");  
		scanf("%c",&c);  
		fflush(stdin);  
	} 
	if (c=='y')  
	{  
		if((fp=fopen("d:\\stu.dat","rb"))==NULL)  
		{  
		    printf("�ļ��򿪴���,�����޷�����\n");  
		    exit(0);  
		}  
		fread(&stu[j],sizeof(struct student),1,fp);   
		count=0;  
		count++;  
		j++;  
		while(fread(&stu[j],sizeof(struct student),1,fp))  
		{  
		    j++;  
		    count++;  
		}  
		fclose(fp);  
		printf("���ݶ�ȡ���!!!\n");  
		system("pause");  
	}  
	else  
		return;  
} 
void kaifaren(struct student stu[M])
{
	printf("201705010309 ������\n");
	printf("201705010303 �����\n");
	printf("201705010311 ������\n");
	return; 
}
void xitongjieshao(struct student stu[M])
{
	printf("ϵͳ���ܣ�\n");
	printf("���˵������Ҫ��ѧ����Ϣ����������\n");
	printf("�ֱ���ʮ��������ʵ���ˣ����ѧ����Ϣ�����ѧ����Ϣ����ѯѧ����Ϣ���޸�ѧ����Ϣ��ɾ��ѧ����Ϣ��\n");
	printf("����ѧ����Ϣ����ȡ�ļ�ѧ�������浽�ļ����˳�ϵͳ�Ÿ����ܡ����⻹�п����˽��ܺ�ϵͳ���������֡�\n");
	printf("�����д�ϵͳ�ǣ��ɸ��ݽ�����ʾ����Լ���Ŀ�ġ�\n");
	printf("����˳����ɡ�\n");
	return;
}
