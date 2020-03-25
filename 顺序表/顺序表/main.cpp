
#include "test.h"

void SeqListInit(Seq* ps, size_t capacity)  //��ʼ��
{
	assert(ps);
	ps->array = (SqlistType*)malloc(sizeof(SqlistType)*capacity);
	ps->size = 0;
	ps->capacity = capacity;
	CheckCapacity(ps);
}
void SeqListDestroy(Seq* ps)  //����
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void CheckCapacity(Seq* ps) //���
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		//ps->array = realloc(ps->array, sizeof(int) * ps->capacity);
	}
}
void SeqListPushBack(Seq* ps, SqlistType val)  //β�����Ԫ��
{
	assert(ps);
	CheckCapacity(ps);
	ps->array[ps->size] = val;
	++ps->size;
}
void SeqListPopBack(Seq* ps) //β��ɾ��Ԫ��
{
	assert(ps);
	if (ps->size > 0)
	{
		--ps->size;
	}
}
void SeqListPrintf(Seq* ps)  //��ӡ˳����Ԫ��
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		cout << ps->array[i] << " ";
	}
	cout << endl;
}
void SeqListPushFront(Seq* ps, SqlistType val)  //ͷ�����Ԫ��
{
	assert(ps);
	CheckCapacity(ps);
	int end = ps->size-1;
	while (end >= 0)
	{
		ps->array[end + 1] = ps->array[end];
		--end;
	}
	ps->array[0] = val;
	ps->size++;
}
void SeqListPopFront(Seq* ps) //ɾ��ͷ��Ԫ��
{
	assert(ps);
	int begin = 0;
	if (ps->size > 0)
	{
		while (begin < ps->size)
		{
			ps->array[begin] = ps->array[begin + 1];
			++begin;
		}
		ps->size--;
	}
	
}
int  SeqListFind(Seq* ps, SqlistType val)  //����Ԫ��
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == val)
		{
			return i;
			break;
		}
	}
	return -1;
}
void SeqListPush(Seq* ps, size_t pos, SqlistType val) //��ĳһλ�����Ԫ��
{
	assert(ps&&pos<=ps->size);
	size_t end = (ps->size)-1;
	while (end >=(int)pos)
	{
		ps->array[end + 1] = ps->array[end];
		--end;
	}
	ps->array[end] = val;
	ps->size++;
}
void Erase(Seq* ps, size_t pos) //ɾ��ĳһλ�õ�ֵ
{
	size_t begin = 0;
	assert(ps);
	begin = pos;
	while (begin < ps->size-1)
	{
		ps->array[begin] = ps->array[begin + 1];
		++begin;
	}
	ps->size--;
}
void SeqListModify(Seq* ps, size_t pos, SqlistType val)//�޸�ĳһλ�õ�ֵ
{
	assert(ps&&pos<ps->size-1);
	ps->array[pos] = val;
}
void SeqListBubbleSort(Seq* ps)  //˳��������
{
	assert(ps);
	int tmp = 0, count = ps->size;
	int i = 0;
	while (--count)
	{
		for (i = 0; i < (int)ps->size - 1; i++)
		{
			if (ps->array[i] > ps->array[i + 1])
			{
				tmp = ps->array[i];
				ps->array[i] = ps->array[i + 1];
				ps->array[i + 1] = tmp;
			}
		}
	}
}
void SeqListRemoveAll(Seq* ps, SqlistType val)  //ɾ��ĳ��ֵ
{
	assert(ps);
	int i = 0, j = 0;
	while (i < (int)ps->size)
	{
		if ((ps->array[i] != val))
		{
			ps->array[j] = ps->array[i];
		}
		++i;
	}
	ps->size = j;
}