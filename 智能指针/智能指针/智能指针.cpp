//void fun1()
//{
//	throw int(11);  //�׳��쳣
//}
//void fun2()
//{
//	int* p = new int[10000];
//	fun1();
//	delete[] p;
//}
//int main()
//{
//	try
//	{
//		fun2();
//	}
//	catch (int& e)
//	{
//		cout << "����" << endl;
//	}
//	system("pause");
//	return 0;
//}

//void fun2()
//{
//	int *p = new int[10000];
//	try
//	{
//		fun1();
//	}
//	catch(int& e)
//	{
//		delete[] p;
//		cout << "�����׳�" << endl;
//		throw;
//	}
//	delete[] p;
//}

//template<class T>
//class SmartPtr
//{
//private:
//	T* _ptr;
//public:
//	SmartPtr(T* ptr = nullptr)
//		:_ptr(ptr)
//	{
//	}
//	T& operator*()  //����* �����������
//	{
//		return *_ptr;
//	}
//	T* operator->()  //���� ->��������ʽṹ���Ա
//	{
//		return _ptr;
//	}
//	~SmartPtr()
//	{
//		if (_ptr)
//			delete _ptr;
//	}
//};
//int main()
//{
//	int *p = new int;
//	SmartPtr<int> sp(p);
//	*sp = 10;
//	cout << *sp << endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int* p = new int;
//	auto_ptr<int> ap(p);
//	auto_ptr<int> copy(ap);
//	*ap = 10;
//	system("pause");
//	return 0;
//}

//template<class T>
//class MyAuto_ptr
//{
//private:
//	T* _ptr;
//public:
//	MyAuto_ptr(T* ptr) 
//		:_ptr(ptr)
//	{}
//	MyAuto_ptr(MyAuto_ptr<T>& p)
//		:_ptr(p._ptr) //��������
//	{
//		p._ptr = nullptr;  //������������֮���Լ����ÿ���
//	}
//	MyAuto_ptr<T>& operator=(MyAuto_ptr<T> &p)  //���ظ�ֵ
//	{
//		if (this != &p)  //��ֹ�Լ����Լ���ֵ
//		{
//			if (_ptr)
//				_ptr = nullptr;
//			 
//			_ptr = p._ptr; 
//			p._ptr = nullptr;  //���Լ��ÿ�
//		}
//		return *this;
//	}
//	T& operator*()
//	{
//		return *_ptr;
//	}
//	T& operator->()
//	{
//		return _ptr;
//	}
//	~MyAuto_ptr()
//	{
//		if (_ptr)
//			delete _ptr;
//	}
//};
//template<class T>
//class MyUnique_ptr
//{
//private:
//	T* _ptr;
//public:
//	MyUnique_ptr(T* ptr=nullptr)
//		:_ptr(ptr)
//	{}
//	MyAuto_ptr(MyAuto_ptr<T>& p) = delete;
//	
//	MyAuto_ptr<T>& operator=(MyAuto_ptr<T> &p)=delete  //���ظ�ֵ
//	
//	T& operator*()
//	{
//		return *_ptr;
//	}
//	T& operator->()
//	{
//		return _ptr;
//	}
//	~MyUnique_ptr()
//	{
//		if (_ptr)
//			delete _ptr;
//	}
//};

//unique_ptr<int> p1(new string("hello world"));
//unique_ptr<int> p2;
//p2 = p1;  // #1�� not allowed
//
//unique_ptr<int> p3;
//p3 = unique_ptr<int>(new string("hello world")); //#2�� allowed
template<class T>
class MyShared_ptr
{
public:
	MyShared_ptr(MyShared_ptr<T>& p)//�������캯��
		:_pr(p._ptr)
		,_count(p._count)
	{
		++(*_count);   //���Ӽ���
	}
	MyShared_ptr<T>& operator=(MyShared_ptr<T>& p)
	{
		if (_ptr != p._ptr) //��ֹ�Լ����Լ���ֵ
		{
			if (--(*count) == 0)  //��������һ��ָ��ÿռ��ָ�룬����ֱ��ɾ��
			{
				delete _ptr;
				delete _count;
			}
			_ptr = p._ptr;
			_count = p._count;
			++(*_count);

		}
	}
	~MyShared_ptr()//��������������ǰ����Ϊ0��ֱ���ͷſռ�
	{
		if (--(*_count) == 0)
		{
			delete _ptr;
			delete _count;
		}
	}

private:
	T* _ptr;
	int* _count;
};