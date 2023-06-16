#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;
    int base = 1;
    
    for(int i=0;i<stations.size();i++){
        if(stations[i] - w - base <= 0){
            base = stations[i] + w+1;
            continue;
        }
        
        answer += ((stations[i] - w) - base) / (2*w +1);
        if(((stations[i] - w) - base) % (2*w +1) != 0)
            answer++;
        
        base = stations[i] + w + 1;    
    }
    if(base <= n){
        answer += (n-base+1) / (2*w+1);
        if((n-base+1) % (2*w+1) != 0){
            answer++;
        } 
    }    
    
    return answer;
}