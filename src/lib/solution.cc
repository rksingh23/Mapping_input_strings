#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

std::map<char,char> CPPLib::Mappable(const std::string& from, const std::string& to)
{
    
    std::map<char,char> map1;
    //std::pair<char,char> pair_map;
    
    std::map<char,char> emptyreturn;

    if (((to.length())==0)||((from.length()==0))) return emptyreturn;
    else if((to.length())!=(from.length())) return emptyreturn;        
    else
    {
    std::map<char,char>::iterator it;
    for(unsigned int i=0;i<from.length();i++)
    {
        it=map1.find(from[i]);
        if ((it !=map1.end())&&(to[i] != it->second)) return emptyreturn;
        if (it==map1.end()) //it did not find the element from[i] in the map --> add it
            map1.insert(std::pair<char,char>(from[i],to[i]));
    }
    }
    return map1;
 
}