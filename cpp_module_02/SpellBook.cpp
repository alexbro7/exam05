#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
    while (m.size())
    {
        delete m.begin()->second;
        m.erase(m.begin());    
    }
}

void                SpellBook::learnSpell(const ASpell* spellPtr){
    if (!spellPtr)
        return;
    std::map<const std::string, ASpell*>::const_iterator it = m.find(spellPtr->getName());
    if (it == m.end())
        m.insert(std::make_pair(spellPtr->getName(), spellPtr->clone()));
}

void                SpellBook::forgetSpell(const std::string& spellName){
    std::map<const std::string, ASpell*>::iterator it = m.find(spellName);
    if (it == m.end())
        return;
    delete it->second;
    m.erase(it);
}

ASpell*             SpellBook::createSpell(const std::string& spellName){
    std::map<const std::string, ASpell*>::const_iterator it = m.find(spellName);
    return (it != m.end() ? it->second : NULL);
}