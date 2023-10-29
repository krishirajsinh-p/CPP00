/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:23:59 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/25 05:56:28 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
using std::string;

class Contact {
	private:
		string firstName;
		string lastName;
		string nickName;
		string phoneNumber;
		string darkestSecret;
		bool objectState;

	public:
		Contact();
	
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setNickName(string nickName);
		void setPhoneNumber(string phoneNumber);
		void setDarkestSecret(string darkestSecret);
		void initializeObject(void);
		
		string getFirstName(void);
		string getLastName(void);
		string getNickName(void);
		string getPhoneNumber(void);
		string getDarkestSecret(void);
		bool isObjectInitialized(void);
};

#endif
