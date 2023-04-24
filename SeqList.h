#pragma once
#include<stdio.h>
#include<assert.h>//断言的头文件
#include<stdlib.h>//

typedef int SeqDataType;//重定义数据类型
typedef struct SeqList
{
	SeqDataType* a;//结构体首元素的地址
	int size;//顺序表中有效数据的个数
	int capacity;//顺序表的容量大小
}SEQ;

//内存管理数据的结构增删查改的接口实现
//头插尾插 头删尾删 
void SeqListInit(SEQ* pq);//顺序表的初始化
void SeqListDestory(SEQ* pq);//顺序表的摧毁
void SeqListPrint(SEQ* pq);//顺序表的打印
void SeqListpushback(SEQ* pq,SeqDataType x);//尾插
void SeqListpushFront(SEQ* pq, SeqDataType x);//头插
void SeqListPopBack(SEQ* pq);//尾删
void SeqListPopFront(SEQ* pq);//头删
 int SeqListFind(SEQ* pq, SeqDataType x);//查找具体数据的下表
 void SeqListInsert(SEQ* pq, int pos,SeqDataType x);//在具体位置插入目标元素
void SeqListErase(SEQ* pq, int pos);//在具体位置抹除目标元素
void SeqListModify(SEQ* pq, int pos,SeqDataType x);//交换元素位置

