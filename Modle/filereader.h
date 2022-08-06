#pragma once
#include <fstream>
#include <string>
#include <filesystem>


#include "datadesc.h"
#include "modelexsepsion.h"

#define NULL_FAIL_NAME ""

class FileReader {
	private:
		std::ifstream* __stream;

	public:
		FileReader(const std::string& file_name);
		FileReader();
		~FileReader();

	private:
		inline bool __check_file_name(const std::string& file_name);
		inline bool __is_exist(const std::string& file_name);

	public:
		bool open(const std::string& file_name);
		bool close();
		bool is_open();
		bool is_end();
		std::string read_line();
};