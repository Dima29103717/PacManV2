#pragma once
#include <exception>


class WrongFileNameExeption : public std::exception {
	private:
		std::string __message;

	public:
		WrongFileNameExeption(const std::string& msg) : __message(msg) {}

		std::string what() { return "wrong file name: " + this->__message; }

};
class NoSuchFileExeption : public std::exception {
private:
	std::string __message;

public:
	NoSuchFileExeption(const std::string& msg) : __message(msg) {}

	std::string what() { return "No such file: " + this->__message; }

};
class FileOpenExeption : public std::exception {
private:
	std::string __message;

public:
	FileOpenExeption(const std::string& msg) : __message(msg) {}

	std::string what() { return "File open fail: " + this->__message; }

};
class FileReadExeption : public std::exception {
private:
	std::string __message;

public:
	FileReadExeption(const std::string& msg) : __message(msg) {}

	std::string what() { return "File read fail: " + this->__message; }

};
