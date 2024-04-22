#include "head.h"
/*该函数实现的是对新数据的输入*/

void add(){
	FILE *pf;//定义文件指针 
	long num;//定义变量 
	char name[100],address[100];//定义变量
	float price;//定义变量
	int year,month,day;//定义变量
	int c=-1;//定义变量，c为选择 
	if((pf=fopen("order.txt","a"))==NULL){//打开文件 
		printf("无法打开此文件！");//如果打开错误则报错
		system("pause");//暂停程序 
		exit(0);//退出程序 
	}
	while (1){//让程序一直运行直到结束
		printf("请选择：1.确认输入 0.返回  ");//打印提示语 
		scanf("%d",&c);//选择 
		while(getchar()!='\n');//清空缓存区 
		switch (c){
			case 1://确认输入 
				printf("请输入新订单信息（订单号 商品名 商品价格 收货地址 交易日期（年 月 日））：\n");//打印提示语 
				scanf("%ld %s %f %s %d %d %d",&num,name,&price,address,&year,&month,&day);//输入新订单信息 
				fprintf(pf,"%ld %s %.0f %s %d %d %d\n",num,name,price,address,year,month,day);//将新订单信息输入至txt文件 
				printf("输入成功！是否继续输入......\n");//打印提示语 
				break;
			case 0://返回 
				fclose(pf);//关闭文件 
				return;//结束运行 
				break;
			default://输入错误 
				printf("输入错误！请重新输入！\n");//打印提示语 
				break;
		}
	}
} 
