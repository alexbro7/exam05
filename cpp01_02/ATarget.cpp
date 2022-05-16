#include "ATarget.hpp"

ATarget::ATarget(const std::string& type) : type(type) {}

ATarget::ATarget() : type("defaultType"){}

ATarget::ATarget(const ATarget& src) : type(src.type){}

ATarget::~ATarget() {}

ATarget&            ATarget::operator=(const ATarget& w)
    {type = w.type; return *this;}

const std::string&  ATarget::getType() const
    {return type;}

void                ATarget::getHitBySpell(const ASpell& spellRef) const
    {std::cout << type << " has been " << spellRef.getEffects() << "!" << std::endl;}