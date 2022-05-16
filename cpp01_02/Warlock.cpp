#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title)
    {std::cout << name << ": This looks like another boring day." << std::endl;}

Warlock::~Warlock(){
    std::cout << name << ": My job here is done!" << std::endl;
    while (spellBook.size())
    {
        delete spellBook.begin()->second;
        spellBook.erase(spellBook.begin());    
    }
}

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

void                Warlock::learnSpell(const ASpell* spellPtr){
    if (!spellPtr)
        return;
    std::map<const std::string, ASpell*>::const_iterator it = spellBook.find(spellPtr->getName());
    if (it == spellBook.end())
        spellBook.insert(std::make_pair(spellPtr->getName(), spellPtr->clone()));
}

void                Warlock::forgetSpell(const std::string spellName){
    std::map<const std::string, ASpell*>::iterator it = spellBook.find(spellName);
    if (it == spellBook.end())
        return;
    delete it->second;
    spellBook.erase(it);
}

void                Warlock::launchSpell(const std::string spellName, const ATarget& targRef){
    std::map<const std::string, ASpell*>::const_iterator it = spellBook.find(spellName);
    if (it != spellBook.end())
        it->second->launch(targRef);
}