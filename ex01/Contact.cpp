/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:01:18 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/25 03:46:21 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	this->objectState = false;
}

void Contact::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(string lastName) {
	this->lastName = lastName;
}

void Contact::setNickName(string nickName) {
	this->nickName = nickName;
}

void Contact::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

void Contact::initializeObject(void) {
	this->objectState = true;
}

string Contact::getFirstName(void) {
	return this->firstName;
}

string Contact::getLastName(void) {
	return this->lastName;
}

string Contact::getNickName(void) {
	return this->nickName;
}

string Contact::getPhoneNumber(void) {
	return this->phoneNumber;
}

string Contact::getDarkestSecret(void) {
	return this->darkestSecret;
}

bool Contact::isObjectInitialized(void) {
	return this->objectState;
}
