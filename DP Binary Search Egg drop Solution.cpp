#include <iostream>
//#include<vector>
//#include<math>
//#include <bits/stdc++.h>

using namespace std;
// Number of Eggs Must be less or Equal to the Number of floors:
int eggDrop(int k, int n) {
       // vector <vector<int>> dp (k+1, vector<int> (n+1,0)); k-egg, n -floor
       int dp[k + 1][n + 1];
        
        for(int i=1; i<k+1; i++){ // n
            
            for(int j = 1; j<n+1; j++){ // n
                
                if(i==1)            //1
                dp[i][j] = j;

                else if(j==1)       //1
                dp[i][j] = 1;
                
                else{
                    int mr = j; //from current-- ffloor
                    int lr = 1; //fron begining
                    int temp = 0; //temporary variable
                    int minn = 32767; //set a value maximum 
                    while(lr<=mr)
                    {
                        int mid = (lr+mr)/2;
                        int left = dp[i-1][mid-1]; //breaks
                        int right= dp[i][j-mid]; //survive
                        
                        temp = 1 + max(left,right);
                       
                        if(left<right)
                            { 
                                lr = mid+1;
                            }
                        else 
                            {
                                mr = mid-1;
                            }
                        minn = min(temp, minn);

                    }
                    dp[i][j] = minn;
                }
            }
        }
        return dp[k][n];
    }
int main()
{
    int n, k;
    cout << "Enter the number of Floor: = ";
    cin >> n;
    cout << "Enter the number of Eggs: = ";
    cin >> k;
    if(k>0)
    {
    int y = eggDrop(k, n);
    cout << "The number of attempts to find pivot floor is:=" << y;
    }
    else
    cout<< "With zero Eggs we can not predict the floor";

    
}
