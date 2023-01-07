In the question given that
If there exists a solution, it is guaranteed to be unique
-this lines clearly tells us that we have unique or no solution exists
​
Here two cases are possible
​
* if our total_gas is less than our total cost in that case we can't complete our journey so will return -1
* now we have a unique solution that means a starting_point exists
* To find that point i will keep track of my current_gas+=gas[i]-cost[i]
* lets suppose at any index our current gas became negative so i can clearly say that till that index all the gas station between ith and starting point are bad starting point as well.
* So, this means we can start trying at next gas station on the i+1 station
**Complexity**
* Time complexity:O(N)
* Space complexity:O(1)