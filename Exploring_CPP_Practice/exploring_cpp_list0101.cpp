#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

//C++探秘书籍代码测试示例list0101.cpp
//单行标准输入数字或字母然后数字字母排序输出

void read(std::istream& in, std::vector<std::string>& text)
{
	std::string line;
	while (std::getline(in, line))
		text.push_back(line);
}

int main(int argc, char* argv[])
{
	std::vector<std::string> text;
	if (argc < 2)
	read(std::cin, text);
	else
	{
		std::ifstream in(argv[1]);
		if (not in)
		{
			std::perror(argv[1]);
			return EXIT_FAILURE;
		}
		read(in, text);
		
	}
	std::sort(text.begin(), text.end());
	
	std::copy(text.begin(), text.end(),
	std::ostream_iterator<std::string>(std::cout, "\n"));
	system("pause");
}
