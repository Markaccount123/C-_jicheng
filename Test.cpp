#include<iostream>
#include<string>
using namespace std;

class Person{
protected: 
	string _name; // ���� 
	string _sex; // �Ա� 
	int _age; // ����
};
class Student : public Person
{
public : 
	int _No ; // ѧ��
};
void Test()
{
	Student s;

	// 1.���������Ը�ֵ���������/ָ��/���� 
	Person p = s;
	Person* pp = &s;
	Person& rp = s;

	//2.��������ܸ�ֵ����������� 
	//s = p;   ֱ�ӱ���

	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ�� 
	pp = &s;
	Student* ps1 = (Student*)pp; // �������ת��ʱ���Եġ�
	ps1->_No = 10;

	// �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ�����,������
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
//protected: string _name; // ����
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
//		int _num; //ѧ��
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
//protected: string _name; // ����
//};
//class Student : public Person
//{
//protected: int _stuNum; // ѧ��
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
//	string _name = "С����"; // ���� 
//	int _num = 111; // ���֤��
//}; 
//class Student : public Person
//{
//public: void Print() 
//{ 
//	cout<<" ����:"<<_name<< endl;
//	cout<<" ���֤��:"<<Person::_num<< endl; 
//	cout<<" ѧ��:"<<_num<<endl; 
//}
//protected: 
//	int _num = 999; // ѧ��
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
//	string _name = "peter"; // ���� 
//	int _age = 18; // ����
//}; 
//// �̳к����Person�ĳ�Ա����Ա����+��Ա�����������������һ���֡��������ֳ���Student��Teacher������Person�ĳ�Ա��
////��������ʹ�ü��Ӵ��ڲ鿴Student��Teacher���󣬿��Կ��������ĸ��á�����Print���Կ�����Ա�����ĸ��á�
//
//class Student : public Person
//{
//protected:
//	int _stuid; // ѧ��
//};
//
//class Teacher : public Person
//{
//protected: 
//	int _jobid; // ����
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
//	string _name; // ����
//public : 
//	static int _count; // ͳ���˵ĸ�����
//};
//int Person :: _count = 0;
//class Student : public Person
//{
//protected : int _stuNum ; // ѧ��
//};
//class Graduate : public Student
//{
//protected : string _seminarCourse ; // �о���Ŀ
//};
//void TestPerson()
//{
//	Student s1 ; 
//	Student s2 ; 
//	Student s3 ; 
//	Graduate s4 ; 
//	cout <<" ���� :"<< Person ::_count << endl; 
//	Student ::_count = 0; 
//	cout <<" ���� :"<< Person ::_count << endl;
//}

