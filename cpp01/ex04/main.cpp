#include <iostream>
#include <fstream>

int	ft_replace(std::ifstream &file, std::ofstream &frepl, std::string str, std::string strrepl)
{
	std::string	read;
	std::size_t	pos;

	while (std::getline(file, read))
	{
		pos = read.find(str);
		while (pos != std::string::npos)
		{
			read.erase(pos, str.length());
			std::cout << "aqui " << str << std::endl;
			read.insert(pos, strrepl);
			pos = read.find(str, pos + strrepl.length());
		}
		frepl << read << std::endl;
	}
	return(1);
}

int	main(int argc, char **argv)
{
	std::ifstream	file;
	std::ofstream	frepl;
	std::string		fname;
	std::string		fnamerepl;
	std::string		str;
	std::string		strrepl;

	if (argc != 4)
	{
		std::cout << "Error: number of arguments" << std::endl;
		exit(0);
	}
	fname = argv[1];
	fnamerepl = fname + ".replace";
	str = argv[2];
	strrepl = argv[3];
	if (str.empty() || strrepl.empty())
	{
		std::cout << "Error: empty string" << std::endl;
		exit(0);
	}
	file.open(fname.c_str());
	frepl.open(fnamerepl.c_str());
	if (!file.is_open() || !frepl.is_open())
	{
		std::cout << "Error: file" << std::endl;
		exit(0);
	}
	ft_replace(file, frepl, str, strrepl);
	file.close();
	frepl.close();
	return(0);
}
