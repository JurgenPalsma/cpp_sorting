/*
** SortingTools.hpp for cpp in /Users/jurgen/cpp/sorting/sources/headers
**
** Made by jurgen.palsma@gmail.com
** Login   <Jurgen>
**
** Started on  Sat Nov 10 14:57:50 2018 jurgen.palsma@gmail.com
** Last update Sun Nov 10 15:01:45 2018 jurgen.palsma@gmail.com
*/

#ifndef SORTINGTOOLS_HPP_
	#define SORTINGTOOLS_HPP_

#include <vector>

template<typename T>
inline bool	isSortedArray(std::vector<T>    data) {
    auto   prev = data.begin();

    for (auto it = data.begin(); it < data.end(); it++) {
        if (*prev > *it) {
            return false;
        }
        prev = it;
    }

    return true;
}

#endif /* !SORTINGTOOLS_HPP_ */
