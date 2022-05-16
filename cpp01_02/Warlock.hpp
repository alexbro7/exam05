#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    public :

        Warlock(const std::string& name, const std::string& title);
        ~Warlock();
        const std::string&  getName() const;
        const std::string&  getTitle() const;
        void                setTitle(const std::string& title);
        void                introduce() const;
        void                learnSpell(const ASpell* spellPtr);
        void                forgetSpell(const std::string spellName);
        void                launchSpell(const std::string spellName, const ATarget& targRef);


    private :

        std::string name;
        std::string title;
        std::map<const std::string, ASpell*> spellBook;
        Warlock();
        Warlock(const Warlock& src);
        Warlock&            operator=(const Warlock&);
};