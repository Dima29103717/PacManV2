#pragma once
#include <exception>


class WrongFileNameExñeption : public std::exception {
	private:
		std::string __message;

	public:
		WrongFileNameExñeption(const std::string& msg) : __message(msg) {}

		std::string what() { return "wrong file name: " + this->__message; }

};
class NoSuchFileExñeption : public std::exception {
private:
	std::string __message;

public:
	NoSuchFileExñeption(const std::string& msg) : __message(msg) {}

	std::string what() { return "No such file: " + this->__message; }

};
class FileOpenExñeption : public std::exception {
private:
	std::string __message;

public:
	FileOpenExñeption(const std::string& msg) : __message(msg) {}

	std::string what() { return "File open fail: " + this->__message; }

};
class FileReadExñeption : public std::exception {
private:
	std::string __message;

public:
	FileReadExñeption(const std::string& msg) : __message(msg) {}

	std::string what() { return "File read fail: " + this->__message; }

};
