* Create a vector of size n which keeps vals[i] & count initialized to 1.
* Create a vector of size n which keeps parent of that particular node initialize to itself i.e y[i]=i.
* Sorting edges vector based on maximum node like in B/w 2 edges which contains greatest node gets after other one.
* Then finding parents of both node in each edge.
*
a. if both count comes same we alot parent according to whoever is lesser.
b. else we alot parent a child and increase ans counter by product of both parent child which is no. of path b/w them.
returns ans.
**Complexity**
**Time complexity**: $$O(n+m*Log(m))$$
**Space complexity**: $$O(n)$$