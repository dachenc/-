#include<stdio.h>
#include<string.h>                           
#include<conio.h>                     
#include<stdlib.h>
#include<cstdlib>   
#include<iostream>   
#define   N   3  //ѧ���� ////|>>>> �޸��� 
#define   M   4 //�γ��� /////|>>>>
#define  stu  struct student
#define  km   struct kemu
int c;      //��ѡ�û�������Ӧ������ 
char x;      //���û���
struct kemu //����ṹ��km
{
  char subject[10];
  int  score;
};
struct student           //����ṹ��stu 
{
 int num;              //ѧ�� 
 char name[10];       //���� 
 km a[M];
 int ave;            //M�ſΣ�һ��km���͵����� 
};                   
stu d[N];          //N��ѧ��
FILE *fp;         //�ļ�ָ�� 
int BatchInput(stu d[N])//����¼�� 
{
  int i,j;
  char a[5],b[5];
  if((fp=fopen("student.txt","r"))==NULL)
  {
	printf("�ļ��򿪴���,�ɼ�����ʧ��\n");  
	return 0; 
  }//�ļ��Ѵ� 
  fscanf(fp,"%s%s%s%s%s%s",a,b,d[0].a[0].subject,d[0].a[1].subject,d[0].a[2].subject,d[0].a[3].subject);
  for(i=0;i<N;i++)
  fscanf(fp,"%d%s%d%d%d%d",&d[i].num,d[i].name,&d[i].a[0].score,&d[i].a[1].score,&d[i].a[2].score,&d[i].a[3].score);
  fclose (fp);//�ļ��ر� 
  for (i=1;i<N;i++)     //ֻ������һ���˵Ŀ�Ŀ���ơ���Ҫcopy��N��������ȥ�� 
    {
     	for (j=0;j<M;j++)//M�ſΣ�ÿ�ſζ���Ҫcopy 
     	strcpy(d[i].a[j].subject,d[0].a[j].subject);
    }
  printf ("��¼��ĳɼ�����\n");
  printf ("********************************************\n");
  printf ("*ѧ��\t����\t%-s\t%-s\t%-s\t%-s\t*\n",d[0].a[0].subject,d[0].a[1].subject,d[0].a[2].subject,d[0].a[3].subject);
  for(i=0;i<N;i++)
  printf ("*%-d\t%-s\t%-d\t%-d\t%-d\t%-d\t*\n",d[i].num,d[i].name,d[i].a[0].score,d[i].a[1].score,d[i].a[2].score,d[i].a[3].score);	
  printf("*********************************************\n");
  return 1;  	
} 
int main ()
{
	int a,i;
	a=BatchInput(d);
	printf("*****************\n");
	printf("%d\n",a);
	printf("*****************\n");
	printf ("******************************************************************\n");
	printf ("ѧ��\t����\t%-s\t%-s\t%-s\t%-s\tƽ����\n",d[0].a[0].subject,d[0].a[1].subject,d[0].a[2].subject,d[0].a[3].subject);
	for (i=0;i<N;i++)
	printf ("%-d\t%-s\t%-d\t%-d\t%-d\t%-d\t%-d\n",d[i].num,d[i].name,d[i].a[0].score,d[i].a[1].score,d[i].a[2].score,d[i].a[3].score,d[i].ave);	
	printf ("******************************************************************\n");
return 0;
}
