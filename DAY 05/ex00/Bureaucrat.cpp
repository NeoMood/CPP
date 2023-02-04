#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int gr) : name(n) , grade(gr)
{
	std::cout << "\e[0;33mParametrized Constructor called of Bureaucrat\e[0m" << std::endl;
    if(this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}


const std::string Bureaucrat::getname()
{
	return(this->name);
}

unsigned int Bureaucrat::getgrade()
{
	return(this->grade);
}

void Bureaucrat::increment_grade()
{
	this->grade--;
}

void Bureaucrat::decrement_grade()
{
	this->grade++;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if(this != &assign)
    {
        this->grade = assign.grade;
    }
	return *this;
}

std::ostream& operator<<(std::ostream& myout ,Bureaucrat& bur)
{
    myout << bur.getname() << ",  bureaucrat grade " << bur.getgrade() << std::endl;
    return myout;
}

