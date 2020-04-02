/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: guillaume <guillaume@student.le-101.fr>    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/10 14:43:50 by guillaume    #+#   ##    ##    #+#       */
/*   Updated: 2020/03/11 07:33:31 by guillaume   ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Contact.hpp"

void   Contact::describe(int index) {
    std::cout << std::right << "|" << std::setw(10) << index;
    if (std::strlen(first_name.c_str()) > 10)
        std::cout << "|" << first_name.substr(0, 9) << ".";
    else
        std::cout << "|" << std::setw(10) << first_name;
        
    if (std::strlen(last_name.c_str()) > 10)
        std::cout << "|" << last_name.substr(0, 9) << ".";
    else
        std::cout << "|" << std::setw(10) << last_name;

    if (std::strlen(nickname.c_str()) > 10)
        std::cout << "|" << nickname.substr(0, 9) << ".";
    else
        std::cout << "|" << std::setw(10) << nickname;
    std::cout << "|" << std::endl;
}

void   Contact::describe_all() {
    std::cout << "Prenom : " << first_name << std::endl;
    std::cout << "Nom : " << last_name << std::endl;
    std::cout << "Pseudo : " << nickname << std::endl;
    std::cout << "Login : " << login << std::endl;
    std::cout << "Address postale : " << postal_address << std::endl;
    std::cout << "Address email : " << email_address << std::endl;
    std::cout << "Numero de telephone : " << phone_number << std::endl;
    std::cout << "Date d'anniversaire : " << birthday_date << std::endl;
    std::cout << "Nourriture prefere : " << favorite_meal << std::endl;
    std::cout << "Couleur des sous-vetements : " << underwear_color << std::endl;
    std::cout << "Secret le plus sombre : " << darkest_secret << std::endl << std::endl;
}

bool   Contact::isFill() {
    if (this->first_name.empty())
        return (false);
    return (true);
}

std::string Contact::getFirstName() {return this->first_name;}
std::string Contact::getLastName() {return this->last_name;}
std::string Contact::getNickname() {return this->nickname;}
std::string Contact::getLogin() {return this->login;}
std::string Contact::getPostalAddress() {return this->postal_address;}
std::string Contact::getEmailAddress() {return this->email_address;}
std::string Contact::getPhoneNumber() {return this->phone_number;}
std::string Contact::getBirthdayDate() {return this->birthday_date;}
std::string Contact::getFavoriteMeal() {return this->favorite_meal;}
std::string Contact::getUnderwearColor() {return this->underwear_color;}
std::string Contact::getDarkestSecret() {return this->darkest_secret;}

void    Contact::setFirstName() {
    std::string res;

    std::cout << "Entrez votre prenom :" << std::endl;
    std::cin >> res;
    while (res.find_first_of("0123456789") != std::string::npos) {
        std::cout << "Depuis quand un prenom contient des chiffres ? Reessayez :" << std::endl;
        std::cin >> res;
    }
    first_name = res;
}

void    Contact::setLastName() {
    std::string res;

    std::cout << "Entrez votre nom :" << std::endl;
    std::cin >> res;
    while (res.find_first_of("0123456789") != std::string::npos) {
        std::cout << "Depuis quand un nom contient des chiffres ? Reessayez :" << std::endl;
        std::cin >> res;
    }
    last_name = res;
}

void    Contact::setNickname() {
    std::cout << "Entrez votre pseudo :" << std::endl;
    std::cin >> nickname;
}

void    Contact::setLogin() {
    std::string res;

    std::cout << "Entrez votre login :" << std::endl;
    std::cin >> res;
    while (res.find_first_of("0123456789") != std::string::npos) {
        std::cout << "Depuis quand un login contient des chiffres ? Reessayez :" << std::endl;
        std::cin >> res;
    }
    login = res;
}

void    Contact::setPostalAddress() {
    std::cout << "Entrez votre address postale :" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, postal_address);
}

void    Contact::setEmailAddress() {
    std::string res;

    std::cout << "Entrez votre addresse email :" << std::endl;
    std::cin >> res;
    while (res.find('@') == std::string::npos) {
        std::cout << "Elle ne contient pas d'@ ! Reessayez :" << std::endl;
        std::cin >> res;
    }
    email_address = res;
}

void    Contact::setPhoneNumber() {
    std::string res;

    std::cout << "Entrez votre numero de telephone :" << std::endl;
    std::cin >> res;
    while (res.find_first_not_of("0123456789") != std::string::npos || std::strlen(res.c_str()) != 10) {
        std::cout << "Un numero doit contenir exclusivement des chiffres et avoir une longueur de 10 ! Reessayez :" << std::endl;
        std::cin >> res;
    }
    phone_number = res;
}

void    Contact::setBirthdayDate() {
    std::string res;

    std::cout << "Entrez votre date d'anniversaire :" << std::endl;
    std::cin >> res;
    while (res.find_first_not_of("0123456789") != std::string::npos || std::strlen(res.c_str()) != 8) {
        std::cout << "La date est au format 'JJMMAAAA', Reessayez :" << std::endl;
        std::cin >> res;
    }
    birthday_date = res;
}

void    Contact::setFavoriteMeal() {
    std::cout << "Entrez votre nourriture prefere :" << std::endl;
    std::cin >> favorite_meal;
}

void    Contact::setUnderwearColor() {
    std::cout << "Entrez la couleur de vos sous-vetements :" << std::endl;
    std::cin >> underwear_color;
}

void    Contact::setDarkestSecret() {
    std::cout << "Entrez votre secret le plus sombre :" << std::endl;
    std::cin >> darkest_secret;
}