/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:52:55 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/26 10:17:27 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
    try
    {
        Array<int>  intArray(6);

        intArray.setArr(12);
        std::cout << intArray.elemAccess(0) << std::endl;
    }
    catch (Array<int>::BadAccess &e)
    {
        std::cout << e.what() << std::endl;
    }
}
