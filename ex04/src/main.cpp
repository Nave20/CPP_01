/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   GitHub : @Nave20                                  #+#    #+#             */
/*   28 is the new 42                                 ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <ostream>

void replacer(std::string file, std::string search, std::string replace)
{
	if (search.empty())
		return;

	std::ifstream in(file.c_str());
	if (!in)
		return;

	std::ofstream out((file + ".replace").c_str());
	std::string line;

	while (std::getline(in, line))
	{
		size_t pos = 0;

		while ((pos = line.find(search, pos)) != std::string::npos)
		{
			line.erase(pos, search.length());
			line.insert(pos, replace);
			pos += replace.length();
		}

		out << line;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: <filename> <replace> <filler>" << std::endl;
		return 1;
	}
	replacer(argv[1], argv[2], argv[3]);
}
