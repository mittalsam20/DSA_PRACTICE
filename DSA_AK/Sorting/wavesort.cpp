#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;

    cout << "please input vector";
    cout << "please input vector";
    cout << "please input vector";
    cout << "please input vector";
    cout << "please input vector";

    // for (auto &ele : nums)
    // cin >> ele;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(2);

    cout << endl;

    for (auto ele : nums)
    {
        cout << ele;
    }
    cout << endl;

    cout << nums.size();

    for (int i = 1; i < nums.size() - 1; i = i + 2)
    {
        if (nums[i] > nums[i - 1])
        {
            int temp = nums[i];
            nums[i] = nums[i - 1];
            nums[i - 1] = temp;
        }

        if (nums[i] > nums[i + 1] && i <= nums.size() - 2)
        {
            int temp2 = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp2;
        }
    }
    cout << endl;
    for (auto ele : nums)
    {
        cout << ele;
    }
    return 0;
}