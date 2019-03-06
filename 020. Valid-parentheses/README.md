# Valid-parentheses

判断字符串(只包含括号小中大)是否有效，根据括号的匹配结果。

思路：
1. 遇到左括号进栈 
2. 右括号时，判断栈顶元素是否和它匹配，如果匹配就出栈顶元素，如果不匹配就返回字符串无效 
3. 结束括号匹配后要判断栈是否为空，不为空也返回字符串无效

具体到代码实现上，可以用一个小技巧，详见代码
```c++
    class Solution {
    public:
        bool isValid(string s) {
            stack<char> myk;
            for (char c : s) {
    			// 技巧：压栈的时候将相对应的右括号压入栈
                if (c == '(')   myk.push(')');
                else if (c == '[') myk.push(']');
                else if (c == '{') myk.push('}');
                else {
                    if (myk.empty() || myk.top() != c)
                        return false;
                    myk.pop();
                }
            }
            return myk.empty();
        }
    };
```