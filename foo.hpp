#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
   
    // Twoja implementacja tutaj
    std::for_each(people.begin(),people.end(),[](Human& obj){obj.birthday();});
    std::transform(people.begin(), people.end(), retval.rbegin(), [](const Human& h) {
        return h.isMonster() ? 'n' : 'y';
    });
    retval.resize(people.size());
    return retval;
}
