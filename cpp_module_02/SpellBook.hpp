#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    public :

        SpellBook();
        ~SpellBook();
        void                learnSpell(const ASpell* spellPtr);
        void                forgetSpell(const std::string& spellName);
        ASpell*                createSpell(const std::string& spellName);


    private :

        std::map<const std::string, ASpell*> m;
        SpellBook(const SpellBook& src);
        SpellBook&            operator=(const SpellBook&);
};