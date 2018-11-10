/*
** Bubblesort.hpp for cpp in /Users/jurgen/cpp/sorting/sources/headers
**
** Made by jurgen.palsma@gmail.com
** Login   <Jurgen>
**
** Started on  Sat Nov 10 14:55:44 2018 jurgen.palsma@gmail.com
** Last update Sun Nov 10 15:02:04 2018 jurgen.palsma@gmail.com
*/

#ifndef BUBBLESORT_HPP_
# define BUBBLESORT_HPP_

template<typename T>
void    bubbleSort(std::vector<T> &data) {
    while (!isSortedArray(data)) {
    
        auto   prev = data.begin();

        for (auto it = data.begin(); it < data.end(); it++) {
            if (*prev > *it) {                
                std::swap(*prev, *it);
            }
            prev = it;
        }
    }
}

#endif /* !BUBBLESORT_HPP_ */
