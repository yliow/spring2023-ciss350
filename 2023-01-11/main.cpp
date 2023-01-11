#include <iostream>
#include <cmath>

int house(int x[], int num)
{
    int ret = -1;
    int min_dist = -1;
    int min_index = -1;
    for (int i = 0; i < num; ++i) // run over all addr
    {
        int addr = x[i];

        // compute dist travelled by everyone to addr
        // EXERCISE: Write a function dist for this block of code.
        int dist = 0;
        for (int j = 0; j < num; ++j)
        {
            dist += abs(x[j] - addr);
        }
        
        if (min_dist == -1)
        {
            min_dist = dist;
            min_index = addr;                
        }
        else
        {
            if (min_dist > dist)
            {
                min_dist = dist;
                min_index = addr;
            }
        }
        std::cout << i << ' ' << addr << ' ' << dist << ' '
                  << min_dist << ' ' << min_dist << '\n';
    }
    return min_index;
}


int main()
{
    int x[1024] = {5, 3, 1, 2, 4, 10};
    int num = 6;
    std::cout << house(x, num) << '\n';
    return 0;
}
