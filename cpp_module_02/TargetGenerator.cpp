#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
    while (m.size())
    {
        delete m.begin()->second;
        m.erase(m.begin());    
    }
}

void                TargetGenerator::learnTargetType(const ATarget* targPtr){
    if (!targPtr)
        return;
    std::map<const std::string, ATarget*>::const_iterator it = m.find(targPtr->getType());
    if (it == m.end())
        m.insert(std::make_pair(targPtr->getType(), targPtr->clone()));
}

void                TargetGenerator::forgetTargetType(const std::string& targType){
    std::map<const std::string, ATarget*>::iterator it = m.find(targType);
    if (it == m.end())
        return;
    delete it->second;
    m.erase(it);
}

ATarget*             TargetGenerator::createTarget(const std::string& targType){
    std::map<const std::string, ATarget*>::const_iterator it = m.find(targType);
    return (it != m.end() ? it->second : NULL);
}