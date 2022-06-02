//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
//#include<stdio.h>
//#include<stdlib.h>
// struct ListNode 
// {
//      int val;
//     struct ListNode *next;
// };
// 
//void ListPrint(struct ListNode* head)
//{
//	struct ListNode* cur=head;
//	while(cur)
//	{
//		printf("%d",cur->val);
//		cur=cur->next;
//	}
//}
//
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* cur=head;
//	int count=0;
//	int i=0;
//	while(cur)
//	{
//		cur=cur->next;
//		count++;
//	}
//	cur=head;
//	i=count/2;
//		while(i)
//		{
//			cur=cur->next;
//			i--;
//		}
//	
//	return cur;
//}
//int main()
//{
//	struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* tmp;
//	n1->val=1;
//	n2->val=2;
//	n3->val=3;
//	n4->val=4;
//	n5->val=5;
//	n1->next=n2;
//	n2->next=n3;
//	n3->next=n4;
//	n4->next=n5;
//	n5->next=NULL;
//	tmp=middleNode(n1);
//	ListPrint(tmp);
//	return 0;
//}



//只能遍历列表一次  快慢指针 快指针走两步 慢指针走一步
//#include<stdio.h>
//#include<stdlib.h>
// struct ListNode 
// {
//      int val;
//     struct ListNode *next;
// };
// 
//void ListPrint(struct ListNode* head)
//{
//	struct ListNode* cur=head;
//	while(cur)
//	{
//		printf("%d",cur->val);
//		cur=cur->next;
//	}
//}
//
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow,*fast;
//	slow=fast=head;
//	while(fast!=NULL&&fast->next!=NULL)
//	{
//		fast=fast->next->next;
//		slow=slow->next;
//	}
//	return slow;
//}
//int main()
//{
//	struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* tmp;
//	n1->val=1;
//	n2->val=2;
//	n3->val=3;
//	n4->val=4;
//	n5->val=5;
//	n1->next=n2;
//	n2->next=n3;
//	n3->next=n4;
//	n4->next=n5;
//	n5->next=NULL;
//	tmp=middleNode(n1);
//	ListPrint(tmp);
//	return 0;
//}
