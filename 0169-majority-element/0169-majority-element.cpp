class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
    //     unordered_map <int,int> mp;
    //     for(int i=0;i<n;i++)
    //     {
    //         mp[nums[i]]++;
    //     }
    // for(auto i: mp)
    // {
    //     if(i.second>n/2)
    //     {
    //         return i.first;
    //     }
    // }
    //   return 0;  

    // moore's voting algorithm
    int element=0,count =0;
    for(int i=0;i<n;i++)
    {
        if(count== 0)
        {
            element =nums[i];
        }
        if(element==nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return element;
    }
};