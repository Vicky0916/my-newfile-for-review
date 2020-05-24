#include <iostream>
#include <stdlib.h>
using namespace std;

class singleton
{
private:
	singleton()
	{
		cout << "创建一个单例对象" << endl;
	}
	~singleton()
	{
		cout << "析构掉一个单例对象" << endl;
	}
	static singleton* instance; //这是我们的单例对象，它是一个类对象的指针
public:
	static singleton* getinstance();
	//static void deleteInstance();
private:
	class Garbo   //内部类
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
	static Garbo gar; //定义一个内部类的静态对象，当该对象销毁的时候，调用析构函数顺便销毁我们的单例对象
};
//下面这个静态成员变量在类加载的时候就已经初始化好了
singleton* singleton::instance = new singleton();
singleton::Garbo singleton::gar; //初始化gar静态成员变量
singleton* singleton::getinstance()
{
	return instance;  //直接返回inatance
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
		cout << "创建了一个单例对象" << endl;
	}
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
	~Singleton() {
		//析构函数我们也需要声明成private的
		//因为我们想要这个实例在程序运行的整个过程中都存在
		//所以我们不允许实例自己主动调用析构函数释放对象
		cout << "销毁了一个单例对象" << endl;
	}

	static Singleton* instance;  //这是我们的单例对象,它是一个类对象的指针
public:
	static Singleton* getInstance();


private:
	//定义一个内部类
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

	//定义一个内部类的静态对象
	//当该对象销毁的时候，调用析构函数顺便销毁我们的单例对象
	static Garbo _garbo;
};

//下面这个静态成员变量在类加载的时候就已经初始化好了
Singleton* Singleton::instance = new Singleton();
Singleton::Garbo Singleton::_garbo;     //还需要初始化一个垃圾清理的静态成员变量

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


