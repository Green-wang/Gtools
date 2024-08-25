一个菜鸟编写的库文件，请大佬轻喷(＃°Д°)

`Gtools`提供了许多实用功能，包括数学运算、随机数生成、斐波那契数列计算、素数检测、以及一些简单的输入输出功能。下面将逐一介绍这个类的主要成员和功能用法：

### 私有成员
- `map<int,int> tools_t;`：一个用于存储键值对的映射表，可以记录一些整数的出现次数。
- `int tools_last_random = -1;`：记录上一次生成的随机数。

### 公共成员
- **基本类型变量**：包括布尔值、整数、双精度浮点数、字符串和字符。这些变量可以直接访问和修改。
- **数学函数**：
  - `gcd(int a, int b)`：计算两个整数的最大公约数。
  - `lcm(int a, int b)`：计算两个整数的最小公倍数。
  - `is_ps(int tools_x)`：检查一个数是否是完全平方数。
  - `is_prime(int tools_x)`：检查一个数是否是素数。
  - `fastpowll(long long toola, long long toolb)`、`fastpowint(int toola, int toolb)`、`fastpow(int toola, int toolb)`：这些函数用于快速计算幂。

- **斐波那契数列相关**：
  - `fib(int tools_x)`：返回前`tools_x`个斐波那契数的向量。
  - `fibk(int tools_x)`：返回第`tools_x`个斐波那契数。

- **随机数相关**：
  - `grandom(int toolsa, int toolsb)`：生成一个介于`toolsa`和`toolsb`之间的随机整数（包含边界）。
  - `grandomx(int toolsa, int toolsb, int toolsc)`：生成一个包含`toolsc`个介于`toolsa`和`toolsb`之间随机整数的向量。
  - `unrepeat_grandomx(int toolsa, int toolsb, int toolsc)`：生成一个包含`toolsc`个不重复的、介于`toolsa`和`toolsb`之间的随机整数向量。
  - `granlast(void)`：返回上一次生成的随机数。
  - `yes_no(void)`：随机返回`true`或`false`。

- **其他工具函数**：
  - `tpp(void)`、`tips(string tools_s)`：打印测试点信息。
  - `say(string tools_x)`：输出字符串`tools_x`。
  - `tmark(int tools_x)`、`tadd(int tools_x, int tools_y)`、`tclear(void)`、`tdelete(int tools_x)`、`tget(int tools_x)`、`tset(int tools_x, int tools_y)`：这些函数用于操作`tools_t`映射表，记录或查询整数的出现次数。
  - `is_even(int tools_x)`：检查一个整数是否是偶数。
