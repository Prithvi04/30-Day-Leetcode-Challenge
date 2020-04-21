/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
//Interactive and new problem of LeetCode and uses the concept of Binary Search as there is restriction in number of function calls.
// (Optimal Approach) Imagine there is a pointer p(x, y) starting from top right corner. p can only move left or down. If the value at p is 0, move down. If the value at p is 1, move left. 
    //Try to figure out the correctness and time complexity of this algorithm.    
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int>dim(2,0);
        dim=binaryMatrix.dimensions();
        int r=dim[0];
        int c=dim[1];
        int res=-1;
        int i=0;
        int j=c-1;
        while(i<r && j>=0)
        {
            if(binaryMatrix.get(i,j)==1)
            {
                res=j;
                j--;
                
            }
            else
            {
                i++;
            }
        }
        return res;
        
    }
};