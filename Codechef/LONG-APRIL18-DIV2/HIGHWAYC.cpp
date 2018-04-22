#include <bits/stdc++.h>
using namespace std;
 
double time_to_cross_lane, MIN_DIS = 0.000001, st, et;
 
int main(){
	long long t, number_of_lane;
	double chef_speed, width_of_lane, ans;
	cin>>t;
	std::cout << std::fixed;
	cout<<std::setprecision(9);
	while(t--){
		cin>>number_of_lane;
		cin>>chef_speed>>width_of_lane;
		vector<double> velocity(number_of_lane);
		vector<int> direction(number_of_lane);
		vector<double> initial_position(number_of_lane);
		vector<double> car_length(number_of_lane);
		for(int i=0; i<number_of_lane; i++){
			cin>>velocity[i];
		}
		for(int i=0; i<number_of_lane; i++){
			cin>>direction[i];
		}
		for(int i=0; i<number_of_lane; i++){
			cin>>initial_position[i];
			if(direction[i]==0)
				initial_position[i] *= -1;
		}
		for(int i=0; i<number_of_lane; i++){
			cin>>car_length[i];
		}
		ans = 0;
		time_to_cross_lane = width_of_lane/chef_speed;
		for(int i=0; i<number_of_lane; i++){
			initial_position[i] += (ans*velocity[i]);
			if((initial_position[i]-car_length[i]-MIN_DIS)<0){
				if((initial_position[i]+MIN_DIS)>=0){
					et = ((0-(initial_position[i]-car_length[i])+MIN_DIS)/velocity[i])+ans;
					ans = et + time_to_cross_lane;
				}
				else{
					st = ans + ((-initial_position[i]-MIN_DIS)/velocity[i]);
					et = ans + ((car_length[i]+MIN_DIS-initial_position[i])/velocity[i]);
					//cout<<st<<" "<<et<<endl;
					if((st>=ans && st<=(ans+time_to_cross_lane)) || (et>=ans && et<=(ans+time_to_cross_lane)) || 
						(ans>=st && (ans+time_to_cross_lane)<=et)){
						ans = et+time_to_cross_lane;
					}
					else{
						ans += time_to_cross_lane;
					}
				}
			}
			else{
				ans += time_to_cross_lane;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
} 