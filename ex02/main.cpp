/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:52:55 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/26 13:41:11 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
    try
    {
        int         i = -1;
        int         size = 6;
        Array<int>  intArray(size);

        while (++i < size)
            intArray[i] = i + 1;
        Array<int>  intArray_1 = intArray;
        i = -1;
        while (++i < size)
            std::cout << intArray[i] << "  ";
        std::cout << std::endl;
        i = -1;
        while (++i < size)
            std::cout << intArray_1[i] << "  ";
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
