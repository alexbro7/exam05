#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator 
{
    public :

        TargetGenerator();
        ~TargetGenerator();
        void                learnTargetType(const ATarget* targPtr);
        void                forgetTargetType(const std::string& targName);
        ATarget*             createTarget(const std::string& targName);


    private :

        std::map<const std::string, ATarget*> m;
        TargetGenerator(const TargetGenerator& src);
        TargetGenerator&            operator=(const TargetGenerator&);
};