/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:24:28 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/29 23:57:32 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define clrscr() cout<<"\033[2J\033[H"<<flush
#define MAX_CONTACTS 8

#include "Contact.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::flush;

class PhoneBook {
	private:
		short index;
		Contact contacts[MAX_CONTACTS];

	public:
		PhoneBook();
		void addContact(void);
		void searchContact(void);
};

void displayHeader(string header);

#endif
