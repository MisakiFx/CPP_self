//https://www.nowcoder.com/questionTerminal/c0a4b917a15f40a49ca10532ab9019fb
/**
 * 链接：https://www.nowcoder.com/questionTerminal/c0a4b917a15f40a49ca10532ab9019fb
来源：牛客网

NowCoder号称自己已经记住了1-100000之间所有的斐波那契数。
为了考验他，我们随便出一个数n，让他说出第n个斐波那契数。当然，斐波那契数会很大。因此，如果第n个斐波那契数不到6位，则说出该数；否则只说出最后6位。

输入描述:
输入有多组数据。
每组数据一行，包含一个整数n (1≤n≤100000)。


输出描述:
对应每一组输入，输出第n个斐波那契数的最后6位。
示例1
输入
1
2
3
4
100000
输出
1
2
3
5
537501
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[100001] = { 0 };
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i < 100001; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        arr[i] %= 1000000;
    }
    while(cin >> n)
    {
        printf((n < 29 ? "%d\n" : "%06d\n"),arr[n]);
    }
}