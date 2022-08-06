#pragma once
#include <exception>


class WrongFileNameEx�eption : public std::exception {
	private:
		std::string __message;

	public:
		WrongFileNameEx�eption(const std::string& msg) : __message(msg) {}

		std::string what() { return "wrong file name: " + this->__message; }

};
class NoSuchFileEx�eption : public std::exception {
private:
	std::string __message;

public:
	NoSuchFileEx�eption(const std::string& msg) : __message(msg) {}

	std::string what() { return "No such file: " + this->__message; }

};
class FileOpenEx�eption : public std::exception {
private:
	std::string __message;

public:
	FileOpenEx�eption(const std::string& msg) : __message(msg) {}

	std::string what() { return "File open fail: " + this->__message; }

};
class FileReadEx�eption : public std::exception {
private:
	std::string __message;

public:
	FileReadEx�eption(const std::string& msg) : __message(msg) {}

	std::string what() { return "File read fail: " + this->__message; }

};
