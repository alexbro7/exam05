#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) : name(name), effects(effects) {}

ASpell::ASpell() : name("defaultName"), effects("defaultEffects"){}

ASpell::ASpell(const ASpell& src) : name(src.name), effects(src.effects){}

ASpell::~ASpell() {}

ASpell&            ASpell::operator=(const ASpell& w)
    {name = w.name; effects = w.effects; return *this;}

const std::string&  ASpell::getName() const
    {return name;}
const std::string&  ASpell::getEffects() const
    {return effects;}

void    ASpell::launch(const ATarget& targRef) const
{targRef.getHitBySpell(*this);}