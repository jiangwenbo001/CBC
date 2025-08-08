#include<bits/stdc++.h>
#include"Micro.h"
using namespace std;
struct Math{
	private: 
		bitset<Prime_max> Prime; 
		vector<int> prime;int prime_long=1;
	public:
		Math(){
			Prime.set();Prime[0]=0;Prime[1]=0;
		}
		char initialize_prime(int x){
			if(x>1e9) return ErrArgTooLarge; 
			if(x<=0) return ErrInvArg;
			for(int i=prime_long+1;i<=x;i++){
				if(Prime[i]==1) prime.push_back(i);
				for(int j=0;j<prime.size()&&i*prime[j]<Prime_max;j++){
					Prime[i*prime[j]]=0;
					if(i%prime[j]==0)break;
				}
			}
			prime_long=max(prime_long,x);
			for(int i=0;i<prime.size();i++) cout<<prime[i]<<endl;
			return ErrNoErr;
		}
		char gcd(int x,int y,int& res){
			if(x==0&&y==0) return ErrNan;
			if(y==0){
				res=x;
				return 0;
			}
			return gcd(y,x%y,res);
		}
		char lcm(int x,int y,int& res){
			int g=gcd(x,y,res);
			if(g!=0) return g;
			else{
				res=(int)((long long)(x*y)/res);
				return 0;
			}
		}
		
} m;
int main(){
	cout<<(int)m.initialize_prime(1e2)<<endl;
	cout<<(int)m.initialize_prime(1e3)<<endl;
	return 0;
} 
