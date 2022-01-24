/*
Permutations of a given string 
Medium Accuracy: 49.85% Submissions: 35484 Points: 4
Given a string S. The task is to print all permutations of a given string in lexicographically sorted order.

 

Example 1:

Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6 
forms as ABC, ACB, BAC, BCA, CAB and CBA .
*/

	vector<string> ans;
		vector<string>find_permutation(string S)
		{ 
            sort(S.begin(), S.end());
            do
            {
                // keep adding while there is next permutation
                ans.push_back(S);
            }while(next_permutation(S.begin(), S.end()));
            return ans;
		    
		}
