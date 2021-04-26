#include<iostream>
#include<string>
using namespace std;

class Person{
protected: 
	string _name; // 姓名 
	string _sex; // 性别 
	int _age; // 年龄
};
class Student : public Person
{
public : 
	int _No ; // 学号
};
void Test()
{
	Student s;

	// 1.子类对象可以赋值给父类对象/指针/引用 
	Person p = s;
	Person* pp = &s;
	Person& rp = s;

	//2.基类对象不能赋值给派生类对象 
	//s = p;   直接报错

	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针 
	pp = &s;
	Student* ps1 = (Student*)pp; // 这种情况转换时可以的。
	ps1->_No = 10;

	// 这种情况转换时虽然可以，但是会存在越界访问的问题,程序会崩
	pp = &p;
	Student* ps2 = (Student*)pp;
	ps2->_No = 10;
}
int main()
{
	Test();
	return 0;
}
//class Person
//{
//public: 
//	Person(const char* name = "peter") 
//		: _name(name) 
//	{ 
//		cout << "Person()" << endl;
//	}  
//	
//	Person(const Person& p) 
//		: _name(p._name) 
//	{ 
//		cout << "Person(const Person& p)" << endl; 
//	}  
//	
//	Person& operator=(const Person& p) 
//	{ 
//		cout << "Person operator=(const Person& p)" << endl; 
//		if (this != &p)
//		{
//			_name = p._name;
//			return *this;
//		}
//    } 
//	
//	~Person() 
//	{ 
//		cout << "~Person()" << endl; 
//	}
//protected: string _name; // 姓名
//};
//
//class Student : public Person
//{
//public: 
//	Student(const char* name, int num) 
//		: Person(name)
//		, _num(num) 
//	{ 
//		cout << "Student()" << endl; 
//	} 
//	
//	Student(const Student& s) 
//		: Person(s)
//		, _num(s._num) 
//	{ 
//		cout << "Student(const Student& s)" << endl;
//	}
//	Student& operator = (const Student& s) 
//	{
//		cout << "Student& operator= (const Student& s)" << endl; 
//		if (this != &s) 
//		{
//			Person::operator=(s); 
//			_num = s._num;
//		} 
//		return *this;
//	}
//	~Student() 
//	{ 
//		cout << "~Student()" << endl; 
//	}protected: 
//		int _num; //学号
//};
//void Test ()
//{ 
//	Student s1 ("jack", 18); 
//	cout << endl;
//
//	Student s2 (s1); 
//	cout << endl;
//
//	Student s3 ("rose", 17); 
//	s1 = s3 ;
//	cout << endl;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//class Person
//{
//public: 
//	friend void Display(const Person& p, const Student& s); 
//protected: string _name; // 姓名
//};
//class Student : public Person
//{
//protected: int _stuNum; // 学号
//}; 
//void Display(const Person& p, const Student& s)
//{ 
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//} 
//int main()
//{ 
//	Person p; 
//	Student s;
//	Display(p, s);
//	return 0;
//}

//class A
//{ 
//public: 
//	void fun() 
//	{ 
//		cout << "func()" << endl; 
//	} 
//}; 
//class B : public A
//{
//public: 
//	void fun(int i)
//	{ 
//		cout << "func(int i)->" << i << endl; 
//	}
//}; 
//void Test()
//{ 
//	B b; 
//	b.fun(10); 
//};
//int main()
//{
//	Test();
//	return 0;
//}

//class Person
//{
//protected: 
//	string _name = "小李子"; // 姓名 
//	int _num = 111; // 身份证号
//}; 
//class Student : public Person
//{
//public: void Print() 
//{ 
//	cout<<" 姓名:"<<_name<< endl;
//	cout<<" 身份证号:"<<Person::_num<< endl; 
//	cout<<" 学号:"<<_num<<endl; 
//}
//protected: 
//	int _num = 999; // 学号
//}; 
//void Test()
//{ 
//	Student s1; 
//	s1.Print();
//};
//int main()
//{
//	Test();
//	return 0;
//}

//class Person{
//public: 
//	void Print() 
//	{ 
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected: 
//	string _name = "peter"; // 姓名 
//	int _age = 18; // 年龄
//}; 
//// 继承后父类的Person的成员（成员函数+成员变量）都会变成子类的一部分。这里体现出了Student和Teacher复用了Person的成员。
////下面我们使用监视窗口查看Student和Teacher对象，可以看到变量的复用。调用Print可以看到成员函数的复用。
//
//class Student : public Person
//{
//protected:
//	int _stuid; // 学号
//};
//
//class Teacher : public Person
//{
//protected: 
//	int _jobid; // 工号
//};
//int main()
//{ 
//	Student s; 
//	Teacher t; 
//	s.Print(); 
//	t.Print();  
//	return 0; 
//}

//class Person{
//public: Person() 
//{ 
//	++_count; 
//}
//protected:
//	string _name; // 姓名
//public : 
//	static int _count; // 统计人的个数。
//};
//int Person :: _count = 0;
//class Student : public Person
//{
//protected : int _stuNum ; // 学号
//};
//class Graduate : public Student
//{
//protected : string _seminarCourse ; // 研究科目
//};
//void TestPerson()
//{
//	Student s1 ; 
//	Student s2 ; 
//	Student s3 ; 
//	Graduate s4 ; 
//	cout <<" 人数 :"<< Person ::_count << endl; 
//	Student ::_count = 0; 
//	cout <<" 人数 :"<< Person ::_count << endl;
//}

