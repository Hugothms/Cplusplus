/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:13:47 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/21 23:03:35 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include<iostream>
# include<exception>
# include"Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	name;
	bool				status;
	const int 			gradeSign;
	const int 			gradeExecute;
	Form(const Form& other);
	Form& operator=(const Form& other);
public:
	static const int HIGHESTGRADE;
	static const int LOWESTGRADE;
	Form();
	Form(const std::string& name, const int gradeSign, const int GradeExecute);
	~Form();
	std::string	getName() const;
	bool 		getStatus() const;
	int 		getGradeSign() const;
	int 		getGradeExecute() const;
	int 		checkGrade(int);
	bool		beSigned(Bureaucrat& bureaucrat);
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream& o, Form const& self);

#endif
