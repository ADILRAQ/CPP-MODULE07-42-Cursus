/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:09 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/26 10:24:10 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class	Array{
	private:
		T				*arr;
		unsigned int	length;

	public:
		// Orthodox Canonical Form
		Array(void);
		~Array(void);
		Array(const Array &obj);
		Array	&operator = (const Array &source);

		// Param Constructor
		Array(unsigned int n);

		// Implemented Methods
		unsigned int	size(void) const;
		T				elemAccess(unsigned int idx) const;

		// Setters
		void			setArr(T value);

		// Nested Class
		class BadAccess : std::exception {
			public:
				const char	*what(void) const throw();
		};
};

#include "Array.tpp"
