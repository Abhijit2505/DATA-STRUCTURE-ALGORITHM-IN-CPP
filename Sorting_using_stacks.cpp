#include<bits/stdc++.h>
using namespace std;


int greater_number_maker(int a,int b)
{
    return a > b ? (a*10+b) : (b*10+a);
}
int greater_number_maker(int a,int b, int c)
{
    int arr[3] = {a,b,c};
    sort(arr,arr+3);
    return 10*arr[2]+arr[0];
}
int greater_number_maker(int a,int b, int c,int d)
{
    int arr[4] = {a,b,c,d};
    sort(arr,arr+4);
    return 10*arr[3]+arr[0];
}
int main()
{
    stack<int> stack1;
    stack<int> stack2;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        stack1.push(num);
    }
    stack2.push(stack1.top());
    stack1.pop();
    while(!(stack1.empty()))
    {
        if(stack2.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
            continue;
        }
        if(stack1.top()<10 && stack2.top()<10)
        {
            int x = stack1.top();
            int y = stack2.top();
            if(abs(x-y)==1)
            {
                stack1.pop();
                stack2.pop();
                stack2.push(greater_number_maker(x,y));
                continue;
            }
            else
            {
                stack2.push(stack1.top());
                stack1.pop();
                continue;
            }
        }
        if(stack1.top()<10 && stack2.top()>=10)
        {
            int a = stack2.top()/10;
            int b = stack2.top()%10;
            int x = stack1.top();
            if(abs(a-x)==1 || abs(b-x)==1)
            {
                stack2.pop();
                stack1.pop();
                stack2.push(greater_number_maker(a,b,x));
                continue;
            }
            else if(x > a)
            {
                stack1.pop();
                stack2.push(x);
                continue;
            }
        }
        if(stack1.top()>=10 && stack2.top()<10)
        {
            int a = stack1.top()/10;
            int b = stack1.top()%10;
            int x = stack2.top();
            if(abs(a-x)==1 || abs(b-x)==1)
            {
                stack2.pop();
                stack1.pop();
                stack2.push(greater_number_maker(a,b,x));
                continue;
            }
            else
            {
                stack2.push(stack1.top());
                stack1.pop();
                continue;
            }
        }
        if(stack1.top()>=10 && stack2.top()>=10)
        {
            int a = stack1.top()/10;
            int b = stack1.top()%10;
            int c = stack2.top()/10;
            int d = stack2.top()%10;
            if(abs(a-d)==1 || abs(b-c)==1)
            {
                stack1.pop();
                stack2.pop();
                stack2.push(greater_number_maker(a,b,c,d));
                continue;
            }
            else
            {
                stack2.push(stack1.top());
                stack1.pop();
                continue;
            }
        }
        if(stack2.top()>stack1.top())
        {
            int temp = stack1.top();
            stack1.pop();
            stack1.push(stack2.top());
            stack2.pop();
            int flag = 0;
            cout << stack2.top() << endl;
            cout << temp << endl;
            while(stack2.top()<temp || flag==0)
            {
                if(stack2.empty())
                {
                    stack2.push(temp);
                    continue;
                }
                if(temp<10 && stack2.top()<10)
                {
                    int x = temp;
                    int y = stack2.top();
                    if(abs(x-y)==1)
                    {
                        stack2.pop();
                        stack2.push(greater_number_maker(x,y));
                        flag++;
                        continue;
                    }
                    else if(temp>stack2.top())
                    {
                        stack2.push(temp);
                        flag++;
                        continue;
                    }
                    else
                    {
                        stack2.push(temp);
                        flag++;
                        continue;
                    }
                }
                if(temp<10 && stack2.top()>=10)
                {
                    int a = stack2.top()/10;
                    int b = stack2.top()%10;
                    int x = temp;
                    if(abs(a-x)==1 || abs(b-x)==1)
                    {
                        stack2.pop();
                        stack2.push(greater_number_maker(a,b,x));
                        flag++;
                        continue;
                    }
                    else if(x > a)
                    {
                        stack2.push(x);
                        flag++;
                        continue;
                    }
                    else
                    {
                        stack2.push(temp);
                        flag++;
                        continue;
                    }
                }
                if(temp>=10 && stack2.top()<10)
                {
                    int a = temp/10;
                    int b = temp%10;
                    int x = stack2.top();
                    if(abs(a-x)==1 || abs(b-x)==1)
                    {
                        stack2.pop();
                        stack2.push(greater_number_maker(a,b,x));
                        flag++;
                        continue;
                    }
                    else
                    {
                        stack2.push(temp);
                        flag++;
                        continue;
                    }
                }
                if(temp>=10 && stack2.top()>=10)
                {
                    int a = temp/10;
                    int b = temp%10;
                    int c = stack2.top()/10;
                    int d = stack2.top()%10;
                    if(abs(a-d)==1 || abs(b-c)==1)
                    {
                        stack2.pop();
                        stack2.push(greater_number_maker(a,b,c,d));
                        flag++;
                        continue;
                    }
                    else
                    {
                        stack2.push(temp);
                        flag++;
                        continue;
                    }
                }
                flag++;
            }
        }
        stack2.push(stack1.top());
        stack1.pop();
    }
    while(!stack2.empty())
    {
        cout << stack2.top() << " ";
        stack2.pop();
    }
    cout << endl;
    while(!stack1.empty())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    return 0;
}
