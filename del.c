#include "head.h"
/*该函数实现的是给定一个订单号，删除该订单号对应订单*/
/*形参num用于判断所要删除的订单号*/ 

struct Order *del(struct Order *head,long num){
	struct Order *p1,*p2;//定义结构体指针 
	
	/*空链表的情况*/
	if(head==NULL){
		printf("链表是空的！\n");//打印提示语
		system("pause");//暂停程序 
		return (head);//返回头指针 
	} 
	
	p1=head;//令p1指向头结点 
	
	/*遍历链表，查找指定结点*/
	while(num!=p1->num&&p1->next!=NULL){//遍历链表直至找到指定结点或指向了最后一个结点 
		p2=p1;//令p2指向p1 
		p1=p1->next;//p1指向下一个结点 
	} 
	
	/*找到了指定结点或最后一位刚好是指定结点，开始删除*/
	if(num==p1->num){//找到指定结点 
		if (p1==head) head=p1->next;//如果指定结点是第一个结点，直接将头指针指向第二个结点 
		else p2->next=p1->next;//如果指定结点不是第一个结点，令前一个结点的next成员指向后一个结点 
		n=n-1;//结点数量-1 
		printf("%ld号订单删除成功！\n",num);//打印提示语
		system("pause");//暂停程序 
	} 
	
	/*连最后一位都不是指定结点，报错*/
	else {
		printf("未查找到%ld号订单！\n",num);//打印提示语
		system("pause");//暂停程序 
	}
	return (head);//返回头指针 
}
