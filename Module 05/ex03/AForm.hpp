#ifndef AForm_HPP
# define AForm_HPP

# include "iostream"
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    bool _is_signed;
    std::string _target;
    const std::string _name;
    const int _need_to_sign;
    const int _need_to_execute;
    AForm();

public:

    AForm( const int need_to_sign, const int need_to_execute, const std::string name, const std::string target );
    AForm( AForm &src );
    virtual ~AForm();

    AForm& operator=( const AForm &rhs);

    void beSigned( const Bureaucrat &B );
    void isExecutable( const Bureaucrat& b ) const;
    virtual void execute( const Bureaucrat& executor ) const = 0;

    class ToHigh : public std::exception
    {
        public:
            virtual const char *what() const throw(){
                return "Error: Form: Grade to high";}
    };

    class ToLow : public std::exception
    {
        public:
            virtual const char *what() const throw(){
                return "Error: Form: Grade to low";}
    };

    class NotSigned : public std::exception
    {
        public:
            virtual const char *what() const throw(){
                return "Error: Form: Not signed";}
    };

    bool getIsSigned( void ) const;
    std::string getTarget( void ) const;
    std::string getName( void ) const;
    int getNeedToSign( void ) const;
    int getNeedToExecute( void ) const;

protected:

    void setIsSigned( bool is_signed );
    void setTarget( std::string target );
};

std::ostream& operator<<( std::ostream& os, const AForm& fo);

#endif