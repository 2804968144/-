#include<iostream>
using namespace std;
struct link
{
	int data;
	link* next;
};
class list 
{
public:
	int size;
	link* first;
	void creatlist(int size);
};
void list::creatlist(int n)
{
	link* cold;
	first = new link();
	first->data = 1;
	n = this->size;
	cold = first;
	for (int i = 2; i <= n; i++)
	{
		link* cnew;
		cnew = new link();
		cnew->data =i ;
		cold->next = cnew;
		cold = cnew;

		
	}
	cold->next = first;
}
int main()
{
	list group;
	int m;
	cout << "����������";
	cin >> group.size;
	cout << endl;
	cout << "���뱨�������";
	cin >> m;
	group.creatlist(group.size);
	link* del, * p;

	p = group.first;
	for (int i = 0; i < group.size-1; i++)
	{
		for (int j = 1; j < m; j++)
		{
			del = p;
			p = p->next;
		}
		cout  << p->data <<"��̭"<< endl;
		del->next = p->next;
		delete p;
		p = del->next;
	}
	cout <<"���µ�Ϊ��"<< p->data;
}