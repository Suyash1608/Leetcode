class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
	    int n=nums.size();
	    int brindex=-1;
	    for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                brindex=i;
                break;
            }
        }
        if (brindex == -1) 
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
        for(int j=n-1;j>brindex;j--)
        {
            if(nums[j]>nums[brindex])
            {
                swap(nums[j],nums[brindex]);
                break;
            }
        }
        reverse(nums.begin() + brindex + 1, nums.end());
        }
    }
};

// /*
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> breakfind(vector<int> arr)
// 	{
// 	    int n=arr.size();
// 	    int brindex=-1;
// 	    for(int i=n-2;i>0;i--)
//         {
//             if(arr[i]<arr[i+1])
//             {
//                 brindex=i;
//                 break;
//             }
//         }
//         for(int j=n-1;j>brindex;j--)
//         {
//             if(arr[j]>arr[brindex])
//             {
//                 swap(arr[j],arr[brindex]);
//                 break;
//             }
//         }
//         reverse(arr.begin() + brindex + 1, arr.end());
//         return arr;
// 	}
// int main()
// {
//     vector<int> arr;
//     int elements;
//     int n;
//     cout<<"number of elements :"<<endl;
//     cin>>n;
//     cout<<"enter the elements :"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>elements;
//         arr.push_back(elements);
//     }
//     vector<int> ans = breakfind(arr);
//     cout << "The next permutation is: [";
//     for (auto it : ans) {
//         cout << it << " ";
//     }
//     cout << "]n";
// 	return 0;
// }
// */