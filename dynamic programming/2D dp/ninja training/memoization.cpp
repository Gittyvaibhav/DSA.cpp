//recurrance relation
//index will be the day and last will be the last activity done because we cannot do the same activity on consecutive days so we have to know what was the last activity done so that we can choose the maximum of the other two activities
//do stuffs
//find maximum of all the three

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int ninjaTraining(int currDay, int last, vector<vector<int>>& points, vector<vector<int>>& dp) 
{   
    //basecase
    if (currDay == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, points[0][i]);
            }
        }
        return maxi;
    }

    int maxi = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i != last)
        {
            if (dp[currDay][i] != -1)
            {
                maxi = max(maxi, dp[currDay][i]);
            }
            else
            {
                int point = points[currDay][i] + ninjaTraining(currDay - 1, i, points, dp);
                dp[currDay][i] = point;
                maxi = max(maxi, point);
            }
        }
    }
    return maxi;

};
int main(){
    vector<vector<int>> points = {{10, 50, 1}, {5, 100, 11}, {50, 20, 30}};
    int n = points.size();
    int last = 3; // 3 indicates no activity done previously
    vector<vector<int>> dp(n, vector<int>(4, -1)); // 4 because last can be 0, 1, 2 or 3
    
    cout << ninjaTraining(n - 1, last, points, dp) << endl;


}