#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title)
    {std::cout << name << ": This looks like another boring day." << std::endl;}
Warlock::Warlock(){}
Warlock::Warlock(const Warlock& src) : name(src.name), title(src.title){}
Warlock::~Warlock()
    {std::cout << name << ": My job here is done!" << std::endl;}
Warlock&            Warlock::operator=(const Warlock& w)
    {name = w.name; title = w.title; return *this;}
const std::string&  Warlock::getName() const
    {return name;}
const std::string&  Warlock::getTitle() const
    {return title;}
void                Warlock::setTitle(const std::string& t)
    {title = t;}
void                Warlock::introduce() const
    {std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;}