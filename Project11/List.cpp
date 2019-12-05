#include "List.h"
#include <iostream>
#include <string>


List::List()
{

}
List::List(const List& l)
{

}
int List:: get_size()
{
	int size = 0;
	Node*tmp = head;
	if (head == 0)
		return 0;

	while (tmp->next != 0)
	{
		tmp = tmp->next;
		size += 1;
	}
	return size;
}
Node * List::get_tail()
{
	Node*tmp = head;
	if (head == 0)
		return 0;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
	}
	return tmp;
}
void List::push_back(std::string data)
{
	Node*tmp = head;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
	}
	

}
void List::insert(int index, std::string data)
{
	if (index < 0 || index >= get_size()) throw "error";
	Node*tmp = head;
	int i = 0;
	while (i != index)
	{
		tmp = tmp->next;
		i++;
	}
	Node*tmp2 =tmp->next;
	tmp->next = new Node(data);
	tmp->next->next = tmp2;


}
void List::delete_el(int index)
{
	if (index < 0 || index >= get_size()) throw "error";
	Node*tmp = head;
	int i = 0;
	while (i != index-1)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = tmp->next->next;
}
void List::print_all()
{
	Node*tmp = head;
	if (head == 0)
		std::cout<<"0";
	while (tmp->next != 0)
	{
		tmp = tmp->next;
		std::cout << tmp;
	}
	
		
}
List::~List()
{
	if (head == 0)return;
	Node*tmp = head;
	Node*end = get_tail();
	while (tmp!=end)
	{
		Node*tmp2 = tmp->next;
		delete tmp->next;
		tmp->data = " ";
		tmp = nullptr;
		tmp = tmp2;
	}
}

int main()
{

	system("pause");
	return 0;
}
