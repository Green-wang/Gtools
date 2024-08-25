#include<bits/stdc++.h>
using namespace std;
//by Green_wang
class Gtools{
	private:
	map<int,int> tools_t;
	int tools_last_random = -1;
	public:
	bool tools_bool = 0;
	int tools_int = 0;
	double tools_double = 0;
	string tools_string = "";
	char tools_char;
	int gcd(int a, int b){
		return __gcd(a,b);
	}
	int lcm(int a, int b){
		return (a * b) / __gcd(a, b);
	}
	void tpp(void){
		cout << "*Testpoint" << endl;
	}
	void tips(string tools_s){
		cout << "*Testpoint " << tools_s << endl;
	}
	void pass(void){
		int toolsa;
	}
	void say(string tools_x){
		cout << tools_x;
	}
	bool is_ps(int tools_x){
		int t = sqrt(tools_x);
		if (t * t == tools_x){
			return 1;
		} else {
			return 0;
		}
	}
	vector<int> fib(int tools_x){
		vector<int> tools_ans;
		tools_ans.push_back(0);
		for (int tools_i = 1; tools_i <= tools_x; tools_i ++){
			if (tools_i <= 2) tools_ans.push_back(1);
			else tools_ans.push_back(tools_ans[tools_i - 2] + tools_ans[tools_i - 1]);
		}
		return tools_ans;
	}
	bool is_prime(int tools_x){
		for (int tools_i = 2; tools_i * tools_i <= tools_x; tools_i ++){
			if (tools_x % tools_i == 0){
				return 0;
			}
		}
		return 1;
	}
	long long fastpowll(long long toola, long long toolb) {
		if (toolb == 0){
			return 1;
		} 
		long long toolres = fastpowll(toola, toolb / 2);
		if (toolb % 2){
			return toolres * toolres * toola;
		} else {
			return toolres * toolres;
		}
	}
	int fastpowint(int toola, int toolb) {
		if (toolb == 0){
			return 1;
		} 
		int toolres = fastpowll(toola, toolb / 2);
		if (toolb % 2){
			return toolres * toolres * toola;
		} else {
			return toolres * toolres;
		}
	}
	long long fastpow(int toola, int toolb) {
		if (toolb == 0){
			return 1;
		} 
		long long toolres = fastpowll(toola, toolb / 2);
		if (toolb % 2){
			return toolres * toolres * toola;
		} else {
			return toolres * toolres;
		}
	}
	void tmark(int tools_x){
		tools_t[tools_x] ++;
	}
	void tadd(int tools_x, int tools_y){
		tools_t[tools_x] += tools_y;
	}
	void tclear(void){
		tools_t.clear();
	}
	void tdelete(int tools_x){
		tools_t[tools_x] = 0;
	}
	int tget(int tools_x){
		return tools_t[tools_x];
	}
	void tset(int tools_x, int tools_y){
		tools_t[tools_x] = tools_y;
	}
	int fibk(int tools_x){
		vector<int> tools_ans;
		tools_ans.push_back(0);
		for (int tools_i = 1; tools_i <= tools_x; tools_i ++){
			if (tools_i <= 2) tools_ans.push_back(1);
			else tools_ans.push_back(tools_ans[tools_i - 2] + tools_ans[tools_i - 1]);
		}
		return tools_ans[tools_x];
	}
	int grandom(int toolsa, int toolsb){
		srand(time(0));
		tools_last_random = (rand() % (toolsb-toolsa+1)) + toolsa;
		return tools_last_random;
	}
	vector<int> grandomx(int toolsa, int toolsb, int toolsc){
		srand(time(0));
		vector<int> tools_v;
		for (int tools_i = 1; tools_i <= toolsc; tools_i ++){
			tools_v.push_back((rand() % (toolsb-toolsa+1)) + toolsa);
		}
		return tools_v;
	}
	vector<int> unrepeat_grandomx(int toolsa, int toolsb, int toolsc){
		srand(time(0));
		vector<int> tools_v;
		map<int,int> tools_map;
		if (toolsc > (toolsb - toolsa + 1)) return {-1};
		int x = -1;
		for (int tools_i = 1; tools_i <= toolsc; tools_i ++){
			x = (rand() % (toolsb-toolsa+1)) + toolsa;
			while (tools_map[x]){
				x = (rand() % (toolsb-toolsa+1)) + toolsa;
			}
			tools_v.push_back(x);
			tools_map[x] = 1;
		}
		return tools_v;
	}
	int granlast(void){
		return tools_last_random;
	}
	bool yes_no(void){
		srand(time(0));
		return (rand() % 2);
	}
	bool is_even(int tools_x){
		if (tools_x == 1) return 0;
		if (tools_x & 1 == 1) return 0;
		else return 1;
	}
	void help(void){
		cout << "----Gtools by Green_wang----\n";
		cout << "The Gtools class is a versatile utility class that encapsulates many helpful functionalities.\n\nPrivate Members:\nstd::map<int, int> tools_t;: A map used to store the occurrence count of integers.\nint tools_last_random = -1;: Keeps track of the last generated random number.\n\nPublic Members:\nBasic Types:\nThe class includes basic data types like bool, int, double, std::string, and char as member variables. However, it's generally not recommended to expose such basic types directly as public members unless they serve a specific purpose.\n\nMathematical Functions:\nint gcd(int a, int b): Computes the Greatest Common Divisor (GCD) of two integers.\nint lcm(int a, int b): Computes the Least Common Multiple (LCM) of two integers.\nbool is_ps(int tools_x): Checks if a number is a perfect square. The name is_ps might be confusing; a more descriptive name like isPerfectSquare would be better.\nbool is_prime(int tools_x): Checks if a number is a prime.\nlong long fastpowll(long long toola, long long toolb), int fastpowint(int toola, int toolb), int fastpow(int toola, int toolb): These functions compute the power of a number efficiently. However, having multiple versions can be confusing. Ideally, fastpow should be templated or overloaded to handle different types.\n\nFibonacci Sequence:\nstd::vector<int> fib(int tools_x): Returns the first tools_x Fibonacci numbers.\nint fibk(int tools_x): Returns the tools_xth Fibonacci number.\n\nRandom Number Generation:\nint grandom(int toolsa, int toolsb): Generates a random integer between toolsa and toolsb (inclusive).\nstd::vector<int> grandomx(int toolsa, int toolsb, int toolsc): Generates a vector of toolsc random integers between toolsa and toolsb.\nstd::vector<int> unrepeat_grandomx(int toolsa, int toolsb, int toolsc): Generates a vector of toolsc unique random integers between toolsa and toolsb.\nint granlast(void): Returns the last generated random number.\nbool yes_no(void): Randomly returns true or false.\nNote: It's recommended to call srand(time(0)) only once at the start of the program to initialize the random number generator.\n\nOther Utility Functions:\nvoid tpp(void), void tips(std::string tools_s): These functions seem to be related to printing test point information but lack specific implementation details.\nvoid say(std::string tools_x): Outputs a string.\nvoid tmark(int tools_x), void tadd(int tools_x, int tools_y), void tclear(void), void tdelete(int tools_x), int tget(int tools_x), void tset(int tools_x, int tools_y): These functions manipulate the tools_t map.\nbool is_even(int tools_x): Checks if an integer is even." << std::endl;
	}
};

