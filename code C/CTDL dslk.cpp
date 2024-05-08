#include<iostream>
#include<fstream>
struct Node

{
  int data;// gi� tr? data c?a node
  Node *pNext;// con tr? pNext
};
 
/* Khai b�o Node d?u pHead v� Node cu?i pTail*/
struct SingleList
{
  Node *pHead; //Node d?u pHead
  Node *pTail; // Node cu?i pTail
};
 
/* kh?i t?o gi� tr? cho Node d?u v� Node cu?i */
void Initialize(SingleList &list)
{
  list.pHead=list.pTail=NULL;// kh?i t?o gi� tr? cho Node d?u v� Node cu?i l� Null
}
 
/* t?o Node trong danh s�ch li�n k?t don */
Node *CreateNode(int d)
{
    Node *pNode=new Node; //s? d?ng pNode d? t?o m?t Node m?i
    if(pNode!=NULL) // N?u pNode != Null, t?c l� pNode c� gi� tr? th�
    {
       pNode->data=d; // g�n gi� tr? data cho d
       pNode->pNext=NULL;// v� cho con tr? pNext tr? t?i gi� tr? Null
    }
    else // N?u pNode == Null, t?c l� pNode kh�ng c� gi� tr? th� xu?t th�ng tin
    {
      printf("Error allocated memory");
    }
    return pNode;//tr? v? pNode
}
