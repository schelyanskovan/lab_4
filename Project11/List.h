#pragma once
#include <iostream>
#include <string>
typedef  std::string Data;
struct Node
{
	Data data;
	Node* next = 0;
	Node(Data d) : data(d) {}
};
class List
{
	Node* head = 0;
public:
	List();
	List(const List& l);

	int get_size();
	Node* get_tail();//возвращает указатель на последний Node списка
	void push_back(Data data);
	void insert(int index, Data data);
	void delete_el(int index);
	void print_all();
	void zal();
	~List();
};
