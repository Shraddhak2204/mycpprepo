#include <bits/stdc++.h> 
bool isPossible(int n, int m, vector<int> time, long long mid){
	long long numberOfdays=1;
	long long chapters=0;
	for(int i=0;i<n;i++){
		if(chapters + time[i] <= mid){
			chapters+=time[i];
		}
		else{
			numberOfdays++;
			if(numberOfdays > n || time[i] > mid){
				return false;
			}
			chapters=time[i];
		}
	}
	return true;

}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
	long long s=0;
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=time[i];
	}	
	long long e=sum;
	long long ans=-1;
	long long mid=s+(e-s)/2;
	while(s<=e){
          if (isPossible( n, m,time, mid)) {
            ans = mid;
            e = mid - 1;
          } 
		  else
		   {
            s = mid + 1;
           }

		   mid = s+(e-s)/2;

        }
	return ans;
	
}