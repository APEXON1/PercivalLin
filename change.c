#include "head.h"
/*�ú���ʵ�ֵ��Ƕ�ָ�������Ž����޸�*/
/*�β�num�����ж���Ҫ���ĵĶ�����*/ 

struct Order *change(struct Order *head,long num){
	struct Order *p;//����ṹ��ָ�� 
	int a=-1;//���������aΪѡ����Ҫ�޸ĵ���Ϣ 
	p=head;//��pָ��ͷ��� 
	while(p!=NULL){//�������� 
		if(p->num==num){//��ѯ��������Ϣʱ 
			printf("��ѯ��%ld������Ϣ��\n",num);//��ӡ��ʾ�� 
			print(p,0);//��ӡ��Ӧ��� 
			while(1){//�ó���һֱ����ֱ������
				printf("��ѡ����Ҫ�޸ĵ���Ϣ��\n");//��ӡ��ʾ�� 
				printf("1.��Ʒ�� 2.��Ʒ�۸� 3.�ջ���ַ 4.�������� 0.�˳�\n"); //��ӡ��ʾ�� 
				scanf("%d",&a);//����ѡ�� 
				while(getchar()!='\n');//��ջ����� 
				switch (a){
					case 1://�޸���Ʒ�� 
						printf("����������Ʒ����");//��ӡ��ʾ�� 
						scanf("%s",p->name);//��������Ʒ�� 
						printf("�޸ĳɹ���\n");//��ӡ��ʾ�� 
						break;
					case 2://�޸���Ʒ�۸� 
						printf("����������Ʒ�۸�");//��ӡ��ʾ�� 
						scanf("%f",&p->price);//��������Ʒ�۸� 
						printf("�޸ĳɹ���\n");//��ӡ��ʾ��
						break;
					case 3://�޸��ջ���ַ 
						printf("���������ջ���ַ��");//��ӡ��ʾ��
						scanf("%s",p->address);//�������ջ���ַ 
						printf("�޸ĳɹ���\n");//��ӡ��ʾ��
						break;
					case 4://�޸Ľ������� 
						printf("�������½������ڣ��� �� �գ���");//��ӡ��ʾ��
						scanf("%d %d %d",&p->date.year,&p->date.month,&p->date.day);//�����½������� 
						printf("�޸ĳɹ���\n");//��ӡ��ʾ��
						break;
					case 0://�˳� 
						return (head);//�������� 
						break;
					default://������� 
						printf("�����������������!");//��ӡ��ʾ��
						system("pause");//��ͣ���� 
						break;
				}
			} 
		}
		else if(p->next==NULL&&p->num!=num) {//���������һ����㶼��ѯ����������Ϣ 
			printf("���Ҳ���%ld�Ŷ�����",num);//��ӡ��ʾ��
			system("pause");//��ͣ���� 
			return NULL;//����NULL 
		}
		p=p->next;//��pָ����һ����� 
	}
} 
