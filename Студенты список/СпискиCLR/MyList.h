#pragma once
#include <iostream>

class MyList
{
private:

	class ListElement
	{

	public:

		// --- ������� ��� ������� ���������� ��� ���������� ������ --- //
		char* data; // ���
		int array_length; // ����� ���
		int* arr; // ��� ������
		// --- ������� ��� ������� ���������� ��� ���������� ������ --- //

		int number_of_current_element;
		ListElement* next;
		ListElement* prev;

	};

	ListElement* head;
	ListElement* tail;
	const int MAX_ARRAY_SIZE = 1024;
	int size;

public:

	void PrintList();

	// --- ��������� ������� --- //

	MyList();
	~MyList();

	bool empty();
	bool correct_pos(const int pos);

	ListElement* find(const int pos);
	ListElement* find(const char* data, const int array_length);
	int find(const char* data);

	// --- ������� --- //

	int Get_size();

	// --- ���������� ��������� --- //

	void push_back(const char* data, const int array_length, int* arr);
	void push_front(const char* data, const int array_length, int* arr);

	// --- �������� ��������� --- //

	void pop_back();
	void pop_front();
	void erase(const int pos);
	void erase(const char* data);
	void clear();

	// --- ��������� ��������� ������ --- //

	void assign(const int pos, int* arr);
	void swap(const int first, const int second);

	// --- �������� ��� ������� --- //

	//void print()
	//{
	//	if (!empty())
	//	{
	//		ListElement* le = this->head;
	//		while (le != nullptr)
	//		{
	//			// --- ������� ��� ������� ���������� ��� ���������� ������ --- //
	//			std::cout << le->number_of_current_element << ")DATA : ";
	//			for (int i = 0; i < le->array_length; i++)
	//				std::cout << le->data[i];
	//			// --- ������� ��� ������� ���������� ��� ���������� ������ --- //
	//			le = le->next;
	//			std::cout << "\n";
	//		}
	//	}
	//}

	void sort();
	void delete_duplicates(const int pos);
};