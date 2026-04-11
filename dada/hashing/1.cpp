

// You are given an array nums consisting of positive integers.
// Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
// The frequency of an element is the number of occurrences of that element in the array.

// Input: nums = [1,2,2,3,1,4]
// Output: 4
// Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
// So the number of elements in the array with maximum frequency is 4.

#include<bits/stdc++.h>
using namespace std;
    int maxFrequencyElements(vector<int>& nums) {
        //size of array
        int n=nums.size();
        unordered_map<int,int>mp;
        //frequency of all element of array elemnt 
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        //find max_freq in ordered map
        int max_freq=1;
        for(auto &pair :mp){
            if(pair.second>max_freq){
                max_freq=pair.second;
            }
        }
        //count total frequencies of elements in nums such that--
        // those elements all have the maximum frequency.
        int count=0;
        for(auto &pair :mp){
            if(pair.second==max_freq){
               count+=pair.second;
            }
        }
        return count;    
    }

//tc---->o(n)
//sc---->o(n)------>optimized 

int main(){
     cout<<"Radhe Radhe";
    cout<<"Input size of array Radhe"<<endl;
    int n;
    cin>>n;//6
    vector<int>arr(n);//1,2,2,3,1,4
    cout<<"Taking input of array element Radhe"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"output is "<<maxFrequencyElements(arr);
}
// Input: nums = [1,2,2,3,1,4]
// Output: 4
