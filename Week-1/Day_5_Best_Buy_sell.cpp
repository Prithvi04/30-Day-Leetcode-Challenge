//There are other Recursive solutions to this problem in the Internet
//The solution below and another solution using Dynamic Programming is the best way to solve it.
//Time Complexity of O(n) and const auxillary space.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
//Visualize this problem by plotting the prices on a graph and
//the profit lies when the graph is increasing from a local minima to its maxima 
        int buy=0,sell=0,profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
                profit+=(prices[i]-prices[i-1]);
        }
        return profit;
        
        
    }
};