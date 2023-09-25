/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:50:36 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/25 17:07:53 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class What
{
	private:
		int	Number;

	public:
		int	getNumber() const
		{
			return (Number);
		}
		What(){Number = 24;}
};

std::ostream &operator << (std::ostream &O, const What &obj)
{
	O << obj.getNumber();
	return (O);
}

int	main(void)
{
	int	size = 5;
	int	arr[] = {12, 4, -12, 0, 12};
	What	Arr[size];

	iter(arr, size, print);
	std::cout << std::endl;
	iter(Arr, size, print);
}
