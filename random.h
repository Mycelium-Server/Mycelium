#ifndef MYCELIUM_RANDOM_H
#define MYCELIUM_RANDOM_H

#include <cstdlib>
#include <vector>

std::vector<long long> ur_used_values;

long long unique_random() {
    while(true) {
        long long num = (((long long)rand()) << 32) | rand();
        if(std::find(ur_used_values.begin(), ur_used_values.end(), num) == ur_used_values.end())
            return num;
    }
}

#endif //MYCELIUM_RANDOM_H
