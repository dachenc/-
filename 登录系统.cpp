//��¼ϵͳ���ܹ����λ��ᡣ�����˶�Ӧ�������� 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main ()
{
	char a[7];
	char b[3][7]={"����","��˼","����"};//�˺� 
	int i,j,d;
	int c[3]={111111,222222,333333};//����
     printf ("�������˺�\n");
	for (i=0;i<3;i++)
	{
		scanf ("%s",&a);			
		for (j=0;j<3;j++)
		{
	     if (strcmp(a,b[j]))//����ʱ����if 1
		 continue;
		 else	break;
		}//end j
		if (j==3)//if 2
		{
			printf ("�������\n");
		    printf ("������%d�λ���\n",2-i);
		}//end if 2
		else 
	    break;	
	}//end i
	if (i!=3)//if 3
	{	
		printf("����������\n");
		for (i=0;i<3;i++)
		{
			scanf ("%d",&d);
			for (j=0;j<3;j++)
			  {
			  if (strcmp(a,b[j]))//����ʱ����if
			     continue; 
			  else 
			    break;
			  }
			if(d==c[j])
			  break;
			else 
			printf("�������������%d�λ���\n",2-i);	  
	    } 
	}
	if (i!=3) 
	printf("������ȷ����ӭ����ϵͳ��");
	return 0;
}
