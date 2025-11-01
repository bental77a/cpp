/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:34:15 by mohben-t          #+#    #+#             */
/*   Updated: 2025/09/20 00:34:16 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }    
    for(int i = 1;i < ac; i++)
    {
        for (int j = 0;av[i][j]; j++)
            av[i][j] = (char)toupper(av[i][j]);
        std::cout << av[i];
        if (av[i])
            std::cout << " ";
    }
    std::cout << std::endl;
}