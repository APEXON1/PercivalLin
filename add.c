#include "head.h"
/*�ú���ʵ�ֵ��Ƕ������ݵ�����*/

void add(){
	FILE *pf;//�����ļ�ָ�� 
	long num;//������� 
	char name[100],address[100];//�������
	float price;//�������
	int year,month,day;//�������
	int c=-1;//���������cΪѡ�� 
	if((pf=fopen("order.txt","a"))==NULL){//���ļ� 
		printf("�޷��򿪴��ļ���");//����򿪴����򱨴�
		system("pause");//��ͣ���� 
		exit(0);//�˳����� 
	}
	while (1){//�ó���һֱ����ֱ������
		printf("��ѡ��1.ȷ������ 0.����  ");//��ӡ��ʾ�� 
		scanf("%d",&c);//ѡ�� 
		while(getchar()!='\n');//��ջ����� 
		switch (c){
			case 1://ȷ������ 
				printf("�������¶�����Ϣ�������� ��Ʒ�� ��Ʒ�۸� �ջ���ַ �������ڣ��� �� �գ�����\n");//��ӡ��ʾ�� 
				scanf("%ld %s %f %s %d %d %d",&num,name,&price,address,&year,&month,&day);//�����¶�����Ϣ 
				fprintf(pf,"%ld %s %.0f %s %d %d %d\n",num,name,price,address,year,month,day);//���¶�����Ϣ������txt�ļ� 
				printf("����ɹ����Ƿ��������......\n");//��ӡ��ʾ�� 
				break;
			case 0://���� 
				fclose(pf);//�ر��ļ� 
				return;//�������� 
				break;
			default://������� 
				printf("����������������룡\n");//��ӡ��ʾ�� 
				break;
		}
	}
} 
