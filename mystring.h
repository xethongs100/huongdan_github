#pragma once
#include<iostream>
using namespace std;


class MyString
{
	char* str;
	int len;
public:
	MyString();
	MyString(int size, char* t);
	MyString(MyString& x);
	~MyString();
	char* getChuoi(){ return this->str; }
	MyString operator=(MyString& x);
	MyString operator+(MyString x);
	MyString operator+=(MyString x);
	void operator==(MyString x);
	void operator<(MyString x);
	void operator>(MyString x);
	void operator>=(MyString x);
	void operator<=(MyString x);
	void operator!=(MyString x);
	int length(){ return this->len; }
	bool empty();
	char* insert(int vitri, char* t);
	char* erase(int soluong);
	char* clear();
	char* substr(int vitri);
	char* normalize();
	char* upper();
	char* lower();
	char* initalLetterCase();
	friend istream& operator>>(istream& in, MyString x);
	friend ostream& operator<<(ostream& out, MyString x);
};