#include<bits/stdc++.h>
using namespace std;
 int ans[105][40],profit[105],weight[40];
 
 // kanpsack returns 
int knapsack(int objects,int wtLimit,int profit[],int weight[]){
	for(int obj = 0; obj <= objects; ++obj){
		for(int wt = 0; wt <= wtLimit; ++wt){
			if(obj == 0 || wt == 0)
			ans[obj][wt] = 0;
	    else if(weight[obj-1] <= wt)
	    ans[obj][wt] = max(profit[obj-1] + ans[obj-1][wt - weight[obj-1]],ans[obj-1][wt]);
	    else ans[obj][wt] = ans[obj-1][wt];
		}
	}
	return ans[objects][wtLimit];
}

int main(){
   int T;
   cin>>T;
   while(T--){
   	int objects,wtLimit;
   	long long ans = 0;
   	cin>>objects;
	for(int obj = 0 ; obj < objects; ++obj)
	  cin>>profit[obj]>>weight[obj];
   int g; cin>>g;
   for(int j = 0; j < g; ++j){
    cin>>wtLimit;
   	ans += knapsack(objects,wtLimit,profit,weight);
   }
   cout<<ans<<"\n";
}
return 0;
}
