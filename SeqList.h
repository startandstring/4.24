#pragma once
#include<stdio.h>
#include<assert.h>//���Ե�ͷ�ļ�
#include<stdlib.h>//

typedef int SeqDataType;//�ض�����������
typedef struct SeqList
{
	SeqDataType* a;//�ṹ����Ԫ�صĵ�ַ
	int size;//˳�������Ч���ݵĸ���
	int capacity;//˳����������С
}SEQ;

//�ڴ�������ݵĽṹ��ɾ��ĵĽӿ�ʵ��
//ͷ��β�� ͷɾβɾ 
void SeqListInit(SEQ* pq);//˳���ĳ�ʼ��
void SeqListDestory(SEQ* pq);//˳���Ĵݻ�
void SeqListPrint(SEQ* pq);//˳���Ĵ�ӡ
void SeqListpushback(SEQ* pq,SeqDataType x);//β��
void SeqListpushFront(SEQ* pq, SeqDataType x);//ͷ��
void SeqListPopBack(SEQ* pq);//βɾ
void SeqListPopFront(SEQ* pq);//ͷɾ
 int SeqListFind(SEQ* pq, SeqDataType x);//���Ҿ������ݵ��±�
 void SeqListInsert(SEQ* pq, int pos,SeqDataType x);//�ھ���λ�ò���Ŀ��Ԫ��
void SeqListErase(SEQ* pq, int pos);//�ھ���λ��Ĩ��Ŀ��Ԫ��
void SeqListModify(SEQ* pq, int pos,SeqDataType x);//����Ԫ��λ��

