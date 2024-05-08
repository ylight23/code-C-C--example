#include<iostream>
#include<fstream>
struct Node

{
  int data;// giá tr? data c?a node
  Node *pNext;// con tr? pNext
};
 
/* Khai báo Node d?u pHead và Node cu?i pTail*/
struct SingleList
{
  Node *pHead; //Node d?u pHead
  Node *pTail; // Node cu?i pTail
};
 
/* kh?i t?o giá tr? cho Node d?u và Node cu?i */
void Initialize(SingleList &list)
{
  list.pHead=list.pTail=NULL;// kh?i t?o giá tr? cho Node d?u và Node cu?i là Null
}
 
/* t?o Node trong danh sách liên k?t don */
Node *CreateNode(int d)
{
    Node *pNode=new Node; //s? d?ng pNode d? t?o m?t Node m?i
    if(pNode!=NULL) // N?u pNode != Null, t?c là pNode có giá tr? thì
    {
       pNode->data=d; // gán giá tr? data cho d
       pNode->pNext=NULL;// và cho con tr? pNext tr? t?i giá tr? Null
    }
    else // N?u pNode == Null, t?c là pNode không có giá tr? thì xu?t thông tin
    {
      printf("Error allocated memory");
    }
    return pNode;//tr? v? pNode
}
