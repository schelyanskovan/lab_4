#pragma once
#include <iostream>
#include <string>

struct Node
{
	std::string data;
	Node* next = 0;
	Node(std::string d) : data(d) {}
};
class List
{
	Node* head = 0;
public:
	List();
	List(const List& l);

	int get_size();
	Node* get_tail();//возвращает указатель на последний Node списка
	void push_back(std:: string data);
	void insert(int index, std::string data);
	void delete_el(int index);
	void print_all();
	~List();
};
