#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget 
{
    protected :

        std::string type;

    public :

        ATarget();
        ATarget(const ATarget& src);
        ATarget&            operator=(const ATarget&);
        ATarget(const std::string& type);
        virtual ~ATarget();
        const std::string&  getType() const;
        void                getHitBySpell(const ASpell& spellRef) const;
        virtual ATarget*     clone() const = 0;

};