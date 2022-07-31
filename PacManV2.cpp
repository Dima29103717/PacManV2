// PacManV2.cpp: определяет точку входа для приложения.
//

#include "PacManV2.h"

#include <string>
#include "Modle/filereader.h"
#include "Modle/modelexsepsion.h"

using namespace std;

int main()
{
	try
	{
		std::string file_name = "level1.txt";
		FileReader reader(file_name);
	}
	catch (WrongFileNameExeption e) {
		cout << e.what() << "\n";
	}
	catch (NoSuchFileExeption e) {
		cout << e.what() << "\n";
	}
	catch (FileOpenExeption e) {
		cout << e.what() << "\n";
	}
	return 0;
}
