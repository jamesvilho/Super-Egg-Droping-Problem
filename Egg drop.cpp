#include <iostream>
using namespace std;

int eggDrop(int &n, int &k)
{
    int dp[n + 1][k + 1]; // for memorizing creating a two dimentional array to store results

    for (int i = 1; i <= n; i++)
    { // Egg
        for (int j = 1; j <= k; j++)
        { // floor
            if (i == 1)
            { // if the number of egg =1, then the attempts to find the floor is equal to the floor
                dp[i][j] = j;
            }

            else if (j == 1)
            { // if the number of floor =1, only one attempts to find the minimum attempts
                dp[i][j] = 1;
            }

            else
            { // after filling the base cases in to array

                int mini = INT_MAX; // declaring a variable to store maximum value at begining
                int value;

                for (int mj = j - 1, pj = 0; mj >= 0; mj--, pj++) // fordward backward calculation current j=mj previous j =pj
                {
                    int eggsurvive = dp[i][mj];    // we know if egg survive the egg remaining is same
                    int eggbroken = dp[i - 1][pj]; // we know if egg broken a less amount of egg is remain

                    value = max(eggbroken, eggsurvive); // finding the maximum value comparing the both situation
                    mini = min(value, mini);            // finding the minimum of those maximum values
                }
                dp[i][j] = mini+1; // 1 is added to the minimum because we already used one egg for calculation
            }
        }
    }

    return dp[n][k]; // returning the value from the array desired attempts on n eggs and k floors.
}
int main()
{
    int n, k;
    cout << "Enter the number of Eggs: = ";
    cin >> n;
    cout << "Enter the number of Floor: = ";
    cin >> k;
    if((k>0) && (n>0))
    {
    int y = eggDrop(n, k);
    cout << "The number of attempts to find pivot floor is:=" << y;
    }
}
