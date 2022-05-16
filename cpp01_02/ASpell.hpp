#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell 
{

    protected :

        std::string name;
        std::string effects;

    public :

        ASpell();
        ASpell(const ASpell& src);
        ASpell&            operator=(const ASpell&);
        ASpell(const std::string& name, const std::string& effects);
        virtual ~ASpell();
        const std::string&  getName() const;
        const std::string&  getEffects() const;
        void                launch(const ATarget& targRef) const;
        virtual ASpell*     clone() const = 0;

};