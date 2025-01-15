#include <iostream> 
#include <stdio.h>

class Solution
{
    public: 
        int climbStairs(int n)
        {
            if(n <= 3) return n; 

            int prev1 = 3; 
            int prev2 = 2;
            int cur = 0;

            for(int i = 3; i < n; i++)
            {
                cur = prev1 + prev2; 
                prev2 = prev1; 
                prev1 = cur; 
            }
            return cur; 
        }
}

int main()
{
    int a; 
    int returnValue = 0;

    Solution* solution = new Solution();

    std::cin >> a; 

    returnValue = solution->climbStairs(a);

    std::cout << "Número de maneiras de subir as escadas: " << returnValue << std::fixed << std::endl; 

    return 0;
}