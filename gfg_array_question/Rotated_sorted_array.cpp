/**
 * You have been given an integer array 
n
u
m
s
 sorted in ascending order with distinct values. 
n
u
m
s
 is rotated at an unknown pivot index 
k
 (
0
 
≤
 
k
 
<
 
n
u
m
s
.
l
e
n
g
t
h
) such that the resulting array is 
[
n
u
m
s
[
k
]
,
n
u
m
s
[
k
+
1
]
,
.
.
.
,
n
u
m
s
[
n
−
1
]
,
n
u
m
s
[
0
]
,
n
u
m
s
[
1
]
,
.
.
.
,
n
u
m
s
[
k
−
1
]
]
 (0-indexed).

For example, 
[
0
,
1
,
2
,
4
,
5
,
6
,
7
]
 might be rotated at pivot index 
3
 and become 
[
4
,
5
,
6
,
7
,
0
,
1
,
2
]
.

Given the array 
n
u
m
s
 after the rotation and an integer 
t
a
r
g
e
t
, print the index of 
t
a
r
g
e
t
 if it is in 
n
u
m
s
, or 
−
1
 if it is not in 
n
u
m
s
.

You must write an algorithm with 
O
(
l
o
g
n
)
 runtime complexity.

Input Format

The first line of input contains 
N
, size of the array
The second line of input contains 
N
 space-separated array elements 
n
u
m
s
[
0
]
,
.
.
.
.
.
.
.
.
,
n
u
m
s
[
N
−
1
]
The third line of the input contains a single integer 
T
 denoting the number of test cases. The description of 
T
 test cases follows.
Each test case consists of a positive integer 
t
a
r
g
e
t
Constraints

1
 
≤
 
N
 
≤
 
10
4
−
10
4
 
≤
 
n
u
m
s
[
i
]
, 
t
a
r
g
e
t
 
≤
 
10
4
1
 
≤
 
T
 
≤
 
10
5
Output Format

For each testcase, print the index if the 
t
a
r
g
e
t
 is found. If not, print 
−
1
.
Sample Input 0

7
4 5 6 7 0 1 2
2
0
3

Sample Output 0

4
-1
 */

#include <bits/stdc++.h>
using namespace std;
 int search(int arr[], int target,int n) {
	 int l=0;int h=n-1;
	 int mid=l+(h-l)/2;
	 while(l<=h){
		 if(arr[mid]==target){
			 return mid;
		 }
		 else if(arr[mid]>=arr[l]){
			 if(arr[l]<=target&&arr[mid]>=target){
				 h=mid-1;
			 }
			 else{
				 l=mid+1;
			 }
		 }
		 else{
			 if(arr[mid]<=target&&arr[h]>=target){
				 l=mid+1;
			 }
			 else{
				 h=mid-1;
			 }
		 }
		 mid=l+(h-l)/2;
	 }
	 return -1;
 }
int main() {
    // your code goes here
int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s;
	cin>>s;
	while(s--){ 
		int t;
		cin>>t;
	cout<<search(arr,t,n)<<endl;
		
	}
    return 0;
}