class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        //make frequency array for 256 ASCII charecters and initialise all positions with -1 value
//We keep 256 since string can have only 256 different charecters at a time 
vector<int> unique(256,-1);

int n=s.size();

if(n==0) //no charecters present
	return 0;

int length=0; //current length without repetition in substring
int max_length=0; //maximum possible length without repetition in substring

//both pointers start from first ele
int left=0, right=0;

while(right<n)
{
	//if ele is present the value will be the index of that charecter in the string.
	if(unique[s[right]]!=-1)
	{
	 //We do max so left pointer can jump one ele after the previous repeating ele's pos.
		  left = max(unique[s[right]]+1,left); 
	}

//update the position of the ele in the freq array with the new pointers index in the string.   
	unique[s[right]] = right; 

	//find max length
	length = right-left+1;
	max_length = max(max_length, length);

	right++; //move right pointer to next ele      
}
return max_length; 
    }
};