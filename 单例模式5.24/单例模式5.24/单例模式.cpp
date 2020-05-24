#include <iostream>
#include <stdlib.h>
using namespace std;

class singleton  //ʵ�ֵ���ģʽ����
{
private:
	singleton() //˽�еĹ��캯��,�����Ͳ����������ط�������ʵ��
	{

	}
	static singleton* instance;  //����һ��Ψһָ��ʵ����ָ�룬������˽�е�
	static int b;

	class Delete
	{
	public:
		~Delete()
		{
			if (singleton::instance)
			{
				delete singleton::instance;
				cout << "delete successful!" << endl;
			}
		}
	};

	static Delete del;
public:
	static singleton* GetInstance()  //����һ�����к��������Ի�ȡ���Ψһʵ��
	{
		if (instance == NULL)  //�ж��ǲ��ǵ�һ��ʹ��
			instance = new singleton;
		return instance;
	}
	static void show()
	{
		cout << b << endl;
	}
};
int singleton::b = 10; //��̬��Ա������������г�ʼ���������������һ���ֲ�������ĳ����
singleton* singleton::instance = NULL;
singleton::Delete singleton::del;
int main()
{
	singleton* a1 = singleton::GetInstance();
	cout << a1 << endl;
	a1->show();

	singleton* a2 = singleton::GetInstance();
	cout << a2 << endl;
	a2->show();
	system("pause");
	return 0;
}