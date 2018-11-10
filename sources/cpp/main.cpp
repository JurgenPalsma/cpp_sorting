/*
** main.cpp for cpp in /Users/jurgen/cpp/sorting/sources/cpp
**
** Made by jurgen.palsma@gmail.com
** Login   <Jurgen>
**
** Started on  Sat Nov 10 13:04:55 2018 jurgen.palsma@gmail.com
** Last update Sun Nov 10 15:02:23 2018 jurgen.palsma@gmail.com
*/

#include <iostream>
#include "Reader.hpp"
#include "SortingTools.hpp"
#include "Bubblesort.hpp"

void    usage() {
    std::cout << "Usage: ./sort file" << std::endl;
}

int     main(int ac, char **av)
{
    if (ac != 2) {
        usage();
        return 84;
    }

    try {
        std::vector<int>    data;
        data = getDataFromFile(av[1]);

        std::cout << "Array before sorting:" << std::endl;
        for ( auto it = data.begin(); it != data.end(); it++ ) {
    	    std::cout << *it << std::endl;
        }

        bubbleSort(data);

        std::cout << "Array after sorting:" << std::endl;
        for ( auto it = data.begin(); it != data.end(); it++ ) {
    	    std::cout << *it << std::endl;
        }

        std::cout << "Array is sorted?: " << std::boolalpha <<  isSortedArray(data) << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Error while reading file: " << e.what() << std::endl;
    }
    
    return 0;
}