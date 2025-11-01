#include "header.hpp"


// std::string Contact::askField (const std::string &prompt)
// {
//         std::string input;
//         while (true)
//         {
//             std::cout << prompt;
//             if (!std::getline(std::cin, input))
//             {
//                 std::cout << "\nInput error. Aborting.\n";
//                 exit(1);
//             }
//             if (!input.empty())
//                 return input;
//             std::cout << "Field can't be empty. Please try again.\n";
//         }
// }



void Contact::printContact()
{
    int width = 10;
    int truncate = width - 1;

    std::cout << std::setw(width);
    std::string fields[3] = { first_name, last_name, nickname };
    for (int i = 0; i < 3; i++)
    {
        if (fields[i].length() > (unsigned)width)
            std::cout << fields[i].substr(0, truncate) << ".";
        else
            std::cout << std::setw(width) << fields[i];

        std::cout << "|";
    }
    std::cout << std::endl;
}

int  Contact::pars_phoneNumber(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if(isdigit(str[i]) == 0)
			return (1);	
	}
	return (0);
}
int Contact::pars_contact_fields(std::string &str)
{
	if (str.empty())
		return (1);
	for (size_t i = 0; i < str.size(); i++)
	{
		if(isalnum(str[i]) == 0)
			return (1);	
	}
	return (0);
}
int Contact::contact_fields(std::string str, std::string &fie)
{
	std::cout << str ;
	std::getline(std::cin ,fie);
	if(pars_contact_fields(fie))
		return (1);
	if(str == "Enter phoneNumber: ")
	{
		if(pars_phoneNumber(fie))
			return (1);
	}
	return(0);
}

int Contact::setValue()
{
	if (contact_fields("Enter first name: ", first_name))
		return(1);
	if (contact_fields("Enter lastName: ", last_name))
		return(1);
	if (contact_fields("Enter nickname: ", nickname))
		return(1);
	if (contact_fields("Enter phoneNumber: ", phone_number))
		return(1);
	if (contact_fields("Enter darkestSecret: ", darkest_secret))
		return(1);
	return (0);
}

void Contact::chooseContack()
{
	std::cout << "firstName : " << first_name <<"\n" ;
	std::cout << "lastName : " << last_name <<"\n";
	std::cout << "nickname : " << nickname <<"\n";
	std::cout << "phoneNumber : " << phone_number <<"\n";
	std::cout << "darkestSecret : " << darkest_secret <<"\n";
}

void	PhoneBook::searchContact()
{
	for (int i = 0; i < count ; i++)
	{
		for (int j = 0; j < 11; j++)
			std::cout << "---";
		std::cout << "\n" << i + 1 << " |";
		contact[i].printContact();
	}

	if(count > 0)
		for (int j = 0; j < 11; j++)
			std::cout << "---";
	std::cout << std ::endl;

	while (count > 0)
	{
		std::string command;
		std::cout << "Choose a contact (1 :  " << count << "): ";
		
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nEnd of input detected. Exiting search.\n";
			break;
		}
		if (contact[0].pars_phoneNumber(command) == 0)
		{
			int index = atoi(command.c_str());

			if (index >= 1 && index <= count)
			{
				contact[index - 1].chooseContack(); 
				break;
			}
			else
				std::cout << "Invalid index! Try again.\n";
		}
		else
			std::cout << "Please enter a number only.\n";
	}
}