/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:34:09 by mohben-t          #+#    #+#             */
/*   Updated: 2025/11/01 10:24:11 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	std::string command;
	PhoneBook book;
	int i;

	book.count = 0;
	i = 0;
	while(true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): \n";
		if(!(getline(std::cin, command)))
		{
			std::cout << "EOF" << std::endl ;
			exit(1);
		}
		if (command == "ADD")
		{
			if (book.count == 8)
			{
				i = 0;
			}
			if (book.contact[i].setValue())
				continue;
			if (book.count <= 7)
				book.count++;
			i++;
		}
		else if (command == "SEARCH")
			book.searchContact();
		else if (command == "EXIT")
			exit(0);
	}
	return(0);
}