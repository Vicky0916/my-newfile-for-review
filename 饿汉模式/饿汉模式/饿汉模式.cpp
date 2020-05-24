#include <iostream>
#include <stdlib.h>
using namespace std;

class singleton
{
private:
	singleton()
	{
		cout << "����һ����������" << endl;
	}
	~singleton()
	{
		cout << "������һ����������" << endl;
	}
	static singleton* instance; //�������ǵĵ�����������һ��������ָ��
public:
	static singleton* getinstance();
	//static void deleteInstance();
private:
	class Garbo   //�ڲ���
	{
	public:
		Garbo()
		{}
		~Garbo()
		{
			if (instance != NULL)
			{
				delete instance;
				instance = NULL;
			}
		}
	};
	static Garbo gar; //����һ���ڲ���ľ�̬���󣬵��ö������ٵ�ʱ�򣬵�����������˳���������ǵĵ�������
};
//���������̬��Ա����������ص�ʱ����Ѿ���ʼ������
singleton* singleton::instance = new singleton();
singleton::Garbo singleton::gar; //��ʼ��gar��̬��Ա����
singleton* singleton::getinstance()
{
	return instance;  //ֱ�ӷ���inatance
}

//void singleton::deleteInstance()
//{
//	delete instance;
//}
int main()
{
	cout << "we get the instance" << endl;
	singleton* a1 = singleton::getinstance();
	singleton* a2 = singleton::getinstance();
	singleton* a3 = singleton::getinstance();
	cout << "we destroy the instance" << endl;
	//singleton::deleteInstance();
	system("pause");
	return 0;
}



#include <iostream>
using namespace std;

class Singleton {
private:
	Singleton() {
		cout << "������һ����������" << endl;
	}
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
	~Singleton() {
		//������������Ҳ��Ҫ������private��
		//��Ϊ������Ҫ���ʵ���ڳ������е����������ж�����
		//�������ǲ�����ʵ���Լ������������������ͷŶ���
		cout << "������һ����������" << endl;
	}

	static Singleton* instance;  //�������ǵĵ�������,����һ��������ָ��
public:
	static Singleton* getInstance();


private:
	//����һ���ڲ���
	class Garbo {
	public:
		Garbo() {}
		~Garbo() {
			if (instance != NULL) {
				delete instance;
				instance = NULL;
			}
		}
	};

	//����һ���ڲ���ľ�̬����
	//���ö������ٵ�ʱ�򣬵�����������˳���������ǵĵ�������
	static Garbo _garbo;
};

//���������̬��Ա����������ص�ʱ����Ѿ���ʼ������
Singleton* Singleton::instance = new Singleton();
Singleton::Garbo Singleton::_garbo;     //����Ҫ��ʼ��һ����������ľ�̬��Ա����

Singleton* Singleton::getInstance() {
	return instance;
}

int main() {
	cout << "Now we get the instance" << endl;
	Singleton* instance1 = Singleton::getInstance();
	Singleton* instance2 = Singleton::getInstance();
	Singleton* instance3 = Singleton::getInstance();
	cout << "Now we destroy the instance" << endl;
	system("pause");
	return 0;
}


