#include<stdio.h>
#include<string.h>  //�ַ�������                         
#include<conio.h>   //��getchar����                   
#include<cstdlib>  // ��������������ͣ��������ͷ�ļ� 
#include<iostream> //  
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
 km a[M];            //M�ſΣ�һ��km���͵�����
 int ave;             
};                   
stu d[N];          //N��ѧ��
FILE *fp;         //�ļ�ָ�� 
void dayin()     //һ���˵� 
{
	printf("*****************ѧ���ɼ�����ϵͳ**********************\n");
	printf("*    1  �ɼ�¼��     2   �ɼ���ѯ     3 ����ƽ����    *\n");
	printf("*    4  ������߷�   5   ����         6 ���ѧ����Ϣ  *\n");
	printf("*    7  ��̼�¼     8   �˳�                         *\n"); 
	printf("*******************************************************\n");
	printf("��ѡ����\n");
} 
void dayin2()//¼�빦�ܵĶ����˵� 
{
	   printf("��ѡ����ǵ�1��ܣ��ɼ�¼��\n");
	   printf("************�ɼ�¼��***********\n");
	   printf("*          1 �ֹ�¼��         *\n");
	   printf("*          2 ����¼��         *\n");
	   printf("*          3 ������һ��       *\n");
	   printf("*******************************\n");
	   printf("��ѡ��¼��ɼ��ķ�ʽ��\n");
}
int  name(char x[5])//�û��� 
{
	int i,j;
	char  a[3][5]={"����","����","����"};
	printf("��ӭʹ��ѧ���ɼ�����ϵͳ\n");
  	for(i=0;i<3;i++)           //���λ��������û��� 
	{   
		printf("�������û���:");
		scanf("%s",x);
		for(j=0;j<3;j++)     //�ֱ������û�����������û����ȶ�  
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
		printf("�û����������\n");
		printf("����%d�λ���...\n",2-i);
		system("pause");
		system("cls");
		printf ("���ٴ������û���\n");
		}
		else break;
	}  //end �����û������� 
		if(i==3)
		{
		printf("�������꣬�����˳�ϵͳ...\n");
		return 0;
	    }
		else
		{ 
		printf("����%s������:\n",x);
		return 1;
	    }
}
int pass(char y[6])	//���� 
{
	int i,j,f=0;
	char  b[3][6]={'1','1','1','1','1','1','2','2','2','2','2','2','3','3','3','3','3','3'};
    for(i=0;i<3;i++)        //���λ����������� 
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
			printf("\b \b");//ʵ�������ĵ��˸����� 
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
		 printf("�����������\n");
		 printf("����%d�λ���...\n",2-i);
		 system("pause");
		 system("cls");
		 printf ("���ٴ��������� \n");
		 continue;
		 }	
		if (j==6) 
		 break;  
	}  //end ����������� 
	 if(i==3)
	 {
	 printf("�������꣬�����˳�ϵͳ...\n");
	 return 0;
     }
	 else 
	 {
	 printf ("������ȷ�����ڽ���ϵͳ.......\n");
	 system("pause");
	 system("cls");
	 return 1;
     }
}
int login()  //��¼ 
{
	char a[5];
	char b[6]; 
    if (name(a))        //�û��� 
	  if (pass(b))     //���� 
	   return 1;
	return 0;
}
void compare (stu e[N])
{
	int f3,i,j;
	stu t;
	f3=1;
	for(i=0;i<N;i++)  //��ƽ��������� 
	 {                //��ð�ݸĽ� 
	 	if (f3==0)
	 	break;
	 	for (f3=0,j=0;j<N-1-i;j++)
	 	{
	 		if(e[j].ave<e[j+1].ave)
	 		 {
	 		 	t=e[j];
	 		 	e[j]=e[j+1];
	 		 	e[j+1]=t;
	 		 	f3=1;
	 		 }  
	 	}
	 }
} 
int  test(int j)//���п�Ŀ��ϢУ�� 
{
	int i;
	for(i=0;i<j;i++)
	{
		if(strcmp(d[0].a[i].subject,d[0].a[j].subject))
		 continue;
		else 
		 break;
	}
	if(i==j)
	 return 1;
	else
	 return 0;
} 
int test2(int i)//����ѧ����ϢУ�� 
{
 int a=1,b=1,j;
 char c4;
 for(j=0;j<i;j++)
 {
 	if (d[j].num==d[i].num)
 	{
 	 a=0;
 	 printf("ѧ���ظ�¼�룡����\n");
 	 break;
    }
 }
 for (j=0;j<i;j++)
 {
 	if(strcmp(d[i].name,d[j].name))
 	  continue;
 	else 
 	  {
 	   b=0;
 	   printf("�����ظ�¼�룡����\n"); 
	   break;
      }
 }
 if(a==0||b==0)
 {
  printf("�Ƿ�ȷ�ϱ���¼����Ч��Y or N\n");
  fflush(stdin);
  scanf("%c",&c4); 
   if (c4=='y')
   return 1;
   else
   return 0;
 }
 else 
  return 1;
}
int live(stu d[N]) //�����ļ� 
{
	int i,j;
  if((fp=fopen("student.txt","w"))==NULL)
	{
	 printf("�ļ��򿪴���,�ɼ�����ʧ��\n");  
	 exit(0); 
	}
 
  fprintf (fp,"ѧ��\t����\t");
  for(i=0;i<M;i++)
    fprintf (fp,"%s\t",d[0].a[i].subject);
  fprintf(fp,"\n");
  for(i=0;i<N;i++)
   {
   	fprintf (fp,"%-d\t%-s\t",d[i].num,d[i].name);
	for(j=0;j<M;j++)
	fprintf(fp,"%-s\t",d[i].a[j].score);   	
    fprintf(fp,"\n");
   }
  fclose(fp);
  printf("����ɹ���\n");	
}
void  ManualInput(stu d[N]) //�ֹ�¼�빦�� 
{
  	int i,j; //i�����ˣ�j���ƿ�Ŀ
	char c;   //�����Ƿ񱣴浽�ļ���           
  	for (j=0;j<M;)//ֻ��ʼ��һ���˵����ſ�����
  	{
  	  printf("�������%d�ſ�Ŀ�����ƣ�\n",j+1);
  	  scanf("%s",d[0].a[j].subject);
  	  if(j!=0)
        if(test(j))//��testΪ����������ظ�����Ŀ������Ҫ�ж��Ƿ��������롣 
		j++;
	    else 
	    printf("�˿�Ŀ�ظ�¼�룬����¼����Ч��\n");
	  else
	    j++;	    
  	  printf("*******************************\n"); 
    }
    for (i=1;i<N;i++)      //��һ�������Ƶ������ˣ�ѭ������ 
    {
     	for (j=0;j<M;j++)//M�ſΣ�ÿ�ſζ���Ҫcopy 
     	strcpy(d[i].a[j].subject,d[0].a[j].subject);
    }
	system("pause");
	system("cls");
    for (i=0;i<N;)
    {
    	printf("**********************************\n"); 
    	printf("�������%d��ѧ����ѧ�ż�������\n",i+1);
    	scanf("%d %s",&d[i].num,d[i].name);
	    if(i==0)
	      {
	    	for (j=0;j<M;)
	    	{
			 printf("������%s��%s�ĳɼ�\n",d[i].name,d[i].a[j].subject); 
	    	 scanf ("%d",&d[i].a[j].score);
	    	 if (d[i].a[j].score<=100&&d[i].a[j].score>=0)
			    j++;
	         else 
			 printf("�����������������\n");
			}
			i++;
		  }
		else
		  {
		   if(test2(i))//���ظ������ظ�ѡ���������� 
		   {
		    for (j=0;j<M;)
	    	{
			 printf("������%s��%s�ĳɼ�\n",d[i].name,d[i].a[j].subject); 
	    	 scanf ("%d",&d[i].a[j].score);
	    	 if (d[i].a[j].score<=100&&d[i].a[j].score>=0)
	           j++;
	         else 
			 printf("�����������������\n");
			}
		    i++; 
	       }
	       else
		   printf("����¼����Ч��\n");
	      }
		system("pause");
	    system("cls"); 
    }
	 	for (i=0;i<N;i++)
	  {
	  	 d[i].ave=0;
	     for (j=0;j<M;j++)
	       d[i].ave+=d[i].a[j].score;
	       d[i].ave=d[i].ave/M;   
      }  
    printf ("��¼��ĳɼ�����\n");
	printf ("*************************************************\n");
	printf ("*ѧ��\t����\t");
	for(j=0;j<M;j++)
	printf("%-s\t",d[0].a[j].subject);
	printf("\t*\n");
	for(i=0;i<N;i++)
	{ 
	  printf ("*%-d\t%-s\t",d[i].num,d[i].name);	
      for(j=0;j<M;j++)
       printf("%-d\t",d[i].a[j].score);
      printf("\t*\n");
	}
	printf("*************************************************\n");
    printf("�Ƿ񱣴���¼��ĳɼ���'y'or'n'\n");
    printf("����ʾ�����ܻὫԭ�ļ����ݸ��ǣ�\n");
   	fflush(stdin);
	scanf("%c",&c);
	if (c=='y')
	live(d);
} 
int BatchInput(stu d[N])//����¼�� 
{
  int i,j;
  char a[5],b[5];
  if((fp=fopen("student.txt","r"))==NULL)
  {
	printf("�ļ��򿪴���,�ɼ�����ʧ��\n");  
	return 0; 
  }
  fscanf(fp,"%s%s",a,b);
  for(i=0;i<M;i++)
  fscanf(fp,"%s",d[0].a[i].subject);
  for(i=0;i<N+1;i++)
  {
   fscanf(fp,"%d%s",&d[i].num,d[i].name);
   for(j=0;j<M;j++)
   fscanf(fp,"%d",&d[i].a[j].score);
  }
  fclose (fp);
  for (i=1;i<N;i++)     //ֻ������һ���˵Ŀ�Ŀ���ơ���Ҫcopy��N��������ȥ�� 
    {
     	for (j=0;j<M;j++)//M�ſΣ�ÿ�ſζ���Ҫcopy 
     	strcpy(d[i].a[j].subject,d[0].a[j].subject);
    }
  for (i=0;i<N;i++)
	{
     d[i].ave=0;
	 for (j=0;j<M;j++)
	 d[i].ave+=d[i].a[j].score;
	 d[i].ave=d[i].ave/M;   
    }  
  printf ("��¼��ĳɼ�����\n");
  printf ("*************************************************\n");
  printf ("*ѧ��\t����\t");
  for(i=0;i<M;i++)
  printf("%-s\t",d[0].a[i].subject);
  printf("*\n");
  for(i=0;i<N;i++)
  {
  printf ("*%-d\t%-s\t",d[i].num,d[i].name);
  for(j=0;j<M;j++)
  printf ("%-d\t",d[i].a[j].score);
  printf("*\n");
}
  printf("*************************************************\n");
  return 1;  	
} 
int input (stu d[N])//¼��Ķ����˵�ѡ�� 
{
	   int choose3,f3;
	   system("pause");
	   system("cls");
	   dayin2();
	   do 
	   {
	   	scanf("%d",&choose3);
	   	switch (choose3)
	   	{
	   		case 1:ManualInput(d);//�˹�¼��
			   f3=0;
			   return 1; 
			   break;
			case 2:
			   f3=0;
			   return BatchInput(d);
			   break;
			case 3:
			   printf("���ڷ�����һ��...\n");
			   f3=0;
			   system("pause");
	           system("cls");
			   return 0 ;
			   break; 
			default :
			   printf ("�����������������룡\n");
			   f3=1;
			   return 1;
			   break;  
		}  
	   }
	   while (f3==1);
	system("pause");
	system("cls");
	dayin();
}
void avg(stu d[N])//����ƽ���֣�������and������ 
{
	int i,j,sum[M],choose5;
	printf("��ѡ����ǹ���3������ƽ����\n");
	printf ("��ѡ�����ƽ���ֵķ�ʽ��\n");
	printf ("     1  ���˼���ƽ����\n");
	printf ("     2  ���Ƽ���ƽ����\n");
	printf ("     3  ������һ��\n"); 
	printf("**********************************\n");//��ÿ���˵���߷� 
	scanf("%d",&choose5); 
	switch(choose5)
	{ case 1:
	  printf("���˼���ƽ�������£�\n");
	  printf("***************************\n");
	  printf ("ѧ��\t����\tƽ����\n");
	  for (i=0;i<N;i++)
	   printf ("%-d\t%-s\t%-d\n",d[i].num,d[i].name,d[i].ave); 
	  printf ("**************************\n");
	  break;
	 case 2:
	  printf("******************\n");
	  for(j=0;j<M;j++)//��ѭ���ǵ��ſ�Ŀ 
	    for (sum[j]=0,i=0;i<N;i++)     //Сѭ����N���˸ÿƳɼ�
	      sum[j]+=d[i].a[j].score; 
	  printf ("���Ƽ���ƽ�������£�\n");
	  printf ("��Ŀ\tƽ����\n");
	  for (j=0;j<N;j++)
	   printf ("%-s\t%-d\n",d[0].a[j].subject,sum[j]/N);
	  printf("******************\n");
	  break;
	 case 3:
	 	break;
	 default:
	 	printf("����������������룡\n");
	 	break;
    }
	system("pause");
	system("cls");
	dayin();
}
void max(stu d[N])//����ƽ����and������߷� 
{
	 int i,j,f4,n,choose6;//f4,ð�ݸĽ��á�n,i,j�����á� 
	 km t1;//�м���� 
	 stu t2;
	 printf ("��ѡ����ǹ����ģ�������߷֣�\n");
	 printf ("��ѡ����߷ֵķ�ʽ��\n");
	 printf ("     1  ���˿�Ŀ��߷�\n");
	 printf ("     2  ����ѧ����߷�\n");
	 printf ("     3  ������һ��\n"); 
	 printf("**********************************\n");//��ÿ���˵���߷� 
	 scanf("%d",&choose6);
	 switch (choose6)
	 {
	  case 1:
		 for(f4=1,n=0;n<N;n++)//N����
		  {
		   for (i=0;i<M-1;i++)//M�ſ�  ð�ݸĽ� 
			{
			 if(f4==0) break;
			 for(f4=0,j=0;j<M-1-i;j++)
			  {
				if(d[n].a[j].score<d[n].a[j+1].score)
			   {
				t1=d[n].a[j];
				d[n].a[j]=d[n].a[j+1];
				d[n].a[j+1]=t1;
				f4=1;
			   }    
			  }
			}
		 
		   for (i=0;i<M;i++)//��ֹһ����߷� 
			{
			 if (d[n].a[i].score==d[n].a[0].score)
			 continue;
			 else 
			 break;
			}	
		   printf("*****************************************\n");
		   printf("*ѧ��Ϊ%-d����Ϊ%-s��ͬѧ��߷���%d��*\n",d[n].num,d[n].name,i);
		   for(j=0;j<i;j++) 
		     printf("%s\t%d\n",d[n].a[j].subject,d[n].a[j].score);
		  } 
		  printf("****************************************\n");//��ÿ�ſε���߷�  
	  break;
	  case 2:
	  	int max;
			for(i=0;i<M;i++)//������߷�
			{
				max=0;
				for(j=0;j<N;j++)
				{
					if(max<d[j].a[i].score)
						max=d[j].a[i].score;
				}
				printf("%s����߷֣�\n",d[0].a[i].subject);
				for(j=0;j<N;j++)
				{
					if(max==d[j].a[i].score)
					printf("%s  %d\n",d[j].name,max);
				}
			}
	  break;
	  case 3:
	  	printf("���ڷ�����һ��...\n");
	  	break;
	  default:
	  	printf ("�������\n");
	 }
	system("pause");
	system("cls");
	dayin();
}
void search (stu d[N])
{
	int a,i,choose4;
	char b[10];
	printf ("��ѡ����ǹ���2���ɼ���ѯ\n");
	printf ("����ѡ���ѯ��ʽ��\n");
	printf ("        1    ��ѧ�Ų�ѯ\n");
	printf ("        2    ��������ѯ\n");
	printf ("        3    ������һ��\n");
	scanf ("%d",&choose4);
	switch(choose4)
	  {
		case 1:
		    int j; 
			printf ("��������Ҫ��ѯ��ѧ��\n");
			 scanf ("%d",&a);
			for (i=0;i<N;i++)
			 {
				  if (a==d[i].num)
				break;
				  else
				continue;
			 }
			if(i==N)
			 printf ("���޴��ˣ�\n");
			else
			 {
			  printf ("��ѧ����Ϣ����\n");
			  printf ("*************************************************\n");
			  printf ("*ѧ��\t����\t");
			for(j=0;j<M;j++)
			  printf("%-s\t",d[i].a[j].subject);
			  printf("\t*\n");
			  printf ("*%-d\t%-s\t",d[i].num,d[i].name);	
			for(j=0;j<M;j++)
			  printf("%-d\t",d[i].a[j].score);
			  printf("\t*\n");
			  printf ("*************************************************\n");
		     }
			break;
		case 2:
			printf ("��������Ҫ��ѯ������\n");
			scanf("%s",b);
			for (i=0;i<N;i++)
			 {
				  if (strcmp(b,d[i].name))
				  continue;
				  else
				  break;
			 }
			if(i==N)
			 printf ("���޴��ˣ�\n");
			else
              {
              printf ("��ѧ����Ϣ����\n");
			  printf ("*************************************************\n");
			  printf ("*ѧ��\t����\t");
			for(j=0;j<M;j++)
			  printf("%-s\t",d[i].a[j].subject);
			  printf("\t*\n");
			  printf ("*%-d\t%-s\t",d[i].num,d[i].name);	
			for(j=0;j<M;j++)
			  printf("%-d\t",d[i].a[j].score);
			  printf("\t*\n");
			  printf ("*************************************************\n");
              }
			break;
		case 3:
			printf ("���ڷ�����һ��...\n");
			break;
		default :
			printf("�������\n");
			break;
      }
	system("pause");
	system("cls");
	dayin();
}
void sort (stu d[N])//���������޸�ԭ�������� 
{
	 int i,j;
	 stu e[N];//��e[N]����d[N]��������򣬷�ֹ���ݻ��� 
	 for(i=0;i<N;i++)
	   e[i]=d[i];
	 printf ("��ѡ����ǹ���5������\n");
	 compare(e);
	 printf ("�ɼ�������Ϊ��\n");
	 printf ("*****************************************************************\n");
	 printf ("*����\tѧ��\t����\t");
	 for(j=0;j<M;j++)
	 printf ("%-s\t",e[0].a[j].subject);
	 printf("ƽ����\t*\n");
	 for(i=0;i<N;i++)
	  {
	   printf ("*%-d\t%-d\t%-s\t",i+1,e[i].num,e[i].name);
	   for(j=0;j<M;j++)
       printf("%-d\t",d[i].a[j].score);	  
       printf("%-d\t*\n",e[i].ave);     
 	  }
	 printf ("*****************************************************************\n");
	 system("pause");
	 system("cls");
	 dayin();
}
void notes()
{
 printf("            ||*****2020112233  ��Ԫ�� *******||\n"); 
 printf("   ������������˼· ������ǰ�ᡷ�������˵�ѭ���ʳ�ʼ��ѭ����\n");
 printf("    �ٴ�ǰ�᣺������Ҫ�ɹ���¼����������ϵͳ�Ĵ�ǰ�ᡣ�����þ���\n�Զ��˳�ϵͳ\n"); 
 printf("    �ڳ�ʼ��������ϵͳ����Ҫ�������ݵĳ�ʼ��������ֻ���˳�ϵͳ��\n������˵�ѭ��\n");
 printf("    �۹���ʵ�֣�ͨ���˵���ѭ�����������ø���������ʵ�ֹ��ܡ�\n");  
 printf("**********************************************************************\n");
 printf("��д��¼��\n");
 printf("��526�д��뿪ʼ"); 
 printf("��һ���޸�,���Ƶ�¼ϵͳ��\n");
 printf("�ڶ����޸ģ�����¼��ʱ�ظ�������֤������test������test2����\n");
 printf("�������޸ģ����빦��6���鿴�ɼ���ϸ��\n");
 printf("���Ĵ��޸ģ�����ɼ�¼������˵��й���3��������һ����\n");
 printf("������޸ģ������ļ����ɼ��ֹ�¼������ʵ�ֱ��浽�ļ���,����live����\n");
 printf("�������޸ģ���������¼�빦�ܣ�����BatchInput����\n");
 printf("���ߴ��޸ģ�����ϵͳ�����ӹ���7������notes����\n"); 
 printf("�ڰ˴��޸ģ������޸Ŀ�Ŀ����Ĵ�©��������ʱ�޸���������������ʽ��������790��\n");
}
int main()
{
 int choose1,choose2,f1=1,f2=1,i,j;//�˵�ѭ���õ�f1����ʼ��ѭ��f2��
            //choose1,ʵ�ֳ�ʼ��ѡ��choose2ʵ�ֲ˵�ѭ��ѡ�� 
 char c,c2;//c�ж��Ƿ��˳�ϵͳ,������Ϊȫ�ֱ�����int c;
             //c2�ж��Ƿ��������� 
if (login())//��ǰ�ᣬ�û���and������ȷ 
{    
	do    // ��ʼ����ѭ��
	{  
			do
			{	
			 dayin ();
		     printf ("����ʾ������¼���ʼ�ɼ���\n");
			 scanf("%d",&choose1);
			 //���ȣ���������ɼ��������޷�������һ���� 	
			   if(choose1!=1&&choose1!=7&&choose1!=8)
				 {
				  printf("�������:\n");
				  system("pause");
			      system("cls");
			     }
			   else if(choose1==1)
			   choose1=input(d);//�������ж�һ�·���ֵ��ȷ����¼��ɹ�����ʧ�� 
			}//������һ������¼��ʧ�ܡ����ɹ�������ֵΪ1�����򣬷���ֵΪ0�� 
			while (choose1!=1&&choose1!=7&&choose1!=8);
			switch(choose1)//��ѡ1��ֻ��ѡ7��8 
			{
			 case 1:
			    printf("��ʼ���ɹ��������\n");
			    system("pause");
			    system("cls");
				dayin ();
				do                   //�˵���ѭ��ѡ�� 
				{                   //��ʱ�Ѿ�¼����ɼ��� 
				scanf("%d",&choose2);
				  switch (choose2)
				  {
				  	  case 1:
						 printf ("���Ѿ�¼��ɼ����Ƿ�����¼��ɼ��� ��y��or��n��\n");
					     fflush(stdin);
						 scanf("%c",&c2); 
					     if (c2=='y')//�ж��Ƿ�����¼�� 
					     {
				          j=input(d);//j�����շ���ֵ����ȷ����¼��ʧ�ܻ�����¼��ɹ��� 
				          if(j==1) //������һ������¼��ʧ������С�����ֵΪ�� 
						   break;
						  else
						  {
	                      dayin();
					      break;
					      }
						 }
						 else
					     {
						  system("pause");
	                      system("cls");
	                      dayin();
					      break;
					     }
				      case 2:search(d);
					    break;  
					  case 3:avg(d);
					    break;
					  case 4:max(d);   //����߷֣��ȵ���sort����������  
					    break ;
					  case 5:sort(d);//����ע���ֹ���ݻ��� 
					    break;
					  case 6:
					  	 printf ("��ѡ����ǹ���6�����ѧ����Ϣ\n");
						 printf ("*********************************************************\n");
						 printf ("*ѧ��\t����\t");
						 for(j=0;j<M;j++)
						 printf("%-s\t",d[0].a[j].subject);
						 printf("ƽ����\t*\n");
						 for(i=0;i<N;i++)
						 { 
						  printf ("*%-d\t%-s\t",d[i].num,d[i].name);	
					      for(j=0;j<M;j++)
					      printf("%-d\t",d[i].a[j].score);
					      printf("%d\t*\n",d[i].ave);
						 }
						 printf("*********************************************************\n");
					   system("pause");
	                   system("cls");
	                   dayin();
					    break;
					  case 7:notes();
					         system("pause");
	                         system("cls");
	                         dayin();
					    break; 
					  case 8:
					     printf ("��ȷ���˳�ϵͳ�� ��y��or��n��\n");
					     fflush(stdin);
						 scanf("%c",&c); 
					     if (c=='y')
					     { 
				         f1=0; //�˳��˵�ѭ�� 
						 f2=0;//�˳���ʼ����ѭ��
						 break;
						 }
						 else
					     {
						  system("pause");
	                      system("cls");
	                      dayin();
					      break;
					     }
					  default:
					  	printf ("����������������빦��ѡ��\n");
					    break;
				  }
				}     //�˵�ѭ������
				while (f1==1);           
			  break;	  
			 case 7:
			  notes();
			  break;	
			 case 8:
			  printf ("��ȷ���˳�ϵͳ�� ��y��or��n��\n");
			  fflush(stdin);
			  scanf("%c",&c); 
			  if (c=='y')
			   f2=0;//�˳���ʼ��ѭ��
			  else
			     system("pause");
			     system("cls");
			  break; 
		    }
    }                      //end ��ʼ����ѭ�� 
	while(f2==1); 
}                        //end ��ǰ��
    printf ("ллʹ�ã��ټ���\n");
	return 0;
}
