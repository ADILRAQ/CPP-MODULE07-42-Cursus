/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:30:43 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/02 14:17:26 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Orthodox Canonical Form

template <typename T> Array<T>::Array(void) : arr(NULL), length(0)
{
}

template <typename T> Array<T>::~Array(void)
{
	if (arr)
		delete[] arr;
}

template <typename T> Array<T>::Array(unsigned int n) : length(n)
{
	if (n)
		arr = new T[n];
	else
		arr = NULL;
}

template <typename T> Array<T>::Array(const Array &obj) : arr(NULL)
{
	*this = obj;
}

template <typename T> Array<T> &Array<T>::operator = (const Array &source)
{
	unsigned int	i = 0;
	unsigned int	size = source.size();

	if (this != &source)
	{
		this->length = size;
		if (this->arr)
		{
			delete[] this->arr;
			this->arr = NULL;
		}
		if (size)
			this->arr = new T[size];
		while (i < size)
		{
			this->arr[i] = source[i];
			i++;
		}
	}
	return (*this);
}

// Implemented Methods

template <typename T> unsigned int Array<T>::size(void) const
{
	return (length);
}

template <typename T> T	&Array<T>::operator [] (unsigned int idx)
{
	if (!arr || idx >= this->size())
		throw BadAccess();
	return (arr[idx]);
}

template <typename T> T	Array<T>::operator [] (unsigned int idx) const
{
	if (!arr || idx >= this->size())
		throw BadAccess();
	return (arr[idx]);
}

// Nested Class

template <typename T> const char *Array<T>::BadAccess::what(void) const throw()
{
	return ("Error: Index out of range !!");
}
