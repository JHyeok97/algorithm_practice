#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int n = triangle.size();

    if(n==1)
    {
        return answer = triangle[0][0];
    }
    
    else
    {
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j == 0){
                triangle[i][j] += triangle[i-1][j];
            }
            else if(i==j){
                triangle[i][j] += triangle[i-1][j-1];
            }
            else {
                triangle[i][j] += max(triangle[i-1][j-1],triangle[i-1][j]);
            }

            if(i == n-1){
                answer = max(answer,triangle[i][j]);
            }
        }
    }    
    
    return answer;
    }
}