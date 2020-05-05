#include <vector>
#include <unordered_map>

/**
 * @brief Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * 
 * This function assumes that each input would have exactly one solution, and does not use the same element twice.
 * 
 * @param nums array of integers
 * @param target sum target
 * @return std::vector<int> indices of the two numbers which add up to the target
 */
std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    // We create a map that will be filled with pairs of key value and
    // whose key is the number and value is the indice of the number in the array
    // For example: nums = [5, 2] then map = {5: 0, 2: 1}
    // because the indice of 5 is 0 and the indice of 2 is 1 in the array nums
    std::unordered_map<int, int> map;

    // Iterate the given array of integers
    for (int i = 0; i < nums.size(); i++)
    {
        // For each number nums[i] in the array, we look for "the other number"
        // that fullfills: nums[i] + "the other number" = target
        // So "the other number" = target - nums[i] (quick math)
        // If "the other number" exists in our map
        if (map.find(target - nums[i]) != map.end())
        {
            // return the current indice and "the other number"'s indice
            return {i, map[target - nums[i]]};
        }
        // Add the key value pair in the map, where
        // key is the number and value is the indice of the number
        map.emplace(nums[i], i);
    }

    return {};
}