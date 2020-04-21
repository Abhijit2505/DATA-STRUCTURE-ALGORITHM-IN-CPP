#include<bits/stdc++.h>
using namespace std;

int find_max_rept(int* a,int n)
{
    unordered_map<int,int> mapp;
    for(int i=0;i<n;i++)
    {
        int key = a[i];
        if(mapp.count(key)==0)
        {
            mapp[key] = 1;
        }
        else
        {
            mapp[key]++;#include<bits/stdc++.h>
using namespace std;

int find_max_rept(int* a,int n)
{
    unordered_map<int,int> mapp;
    for(int i=0;i<n;i++)
    {
        int key = a[i];
        if(mapp.count(key)==0)
        {
            mapp[key] = 1;
        }
        else
        {
            mapp[key]++;
        }
    }
    int maxim = mapp[a[0]];
    int best = a[0];
    int j=1;
    while(j<n)
    {
        if(mapp[a[j]]>maxim)
        {
            maxim = mapp[a[j]];
            best = a[j];
        }
        j++;
    }
    return best;
}
int maxDistance(vector<int> a)
{
    unordered_map<int,int> mapp;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
                int key = a[i];
                int m = j-i;
                if(m>mapp[key])
                    mapp[key] = m;
            }
        }
    }
    int maxim = mapp[a[0]];
    int best = a[0];
    int j=1;
    while(j<a.size())
    {
        if(mapp[a[j]]>maxim)
        {
            maxim = mapp[a[j]];
            best = a[j];
        }
        j++;
    }
    return maxim;
}
char nonRepeatingCharacter(string str)
{
  map<char,int> mapp;
  char tak;
  int l = str.size();
  for(int i=0;i<l;i++)
  {
      char key = str[i];
      if(mapp.count(key)==0)
      {
          mapp[str[i]] = 1;
      }
      else
      {
          mapp[str[i]]++;
      }
  }
  map<char,int>::iterator it;
  it = mapp.begin();
  while(it != mapp.end())
  {
      if(it -> second ==1)
      {
          tak = it -> first;
          break;
      }
      it++;
  }
  return tak;
}
vector<int> removeDuplicates(vector<int> input)
{
    map<int,int> mapp;
    int p = input.size();
    for(int i=0;i<p;i++)
    {
        int key = input[i];
        if(mapp.count(key)==0)
        {
            mapp[key] = 1;
        }
        else
        {
            mapp[key]++;
        }
    }
    vector<int> l;
    map<int,int>::iterator it;
    it = mapp.begin();
    while(it!=mapp.end())
    {
        l.push_back(it -> first);
        it++;
    }
    /*for(auto element:mapp)
    {
        l.push_back(element.first);
    }*/
    return l;
}
void FindOccurance(int arr[],int size)
{
	unordered_map<int,int> mapp;
	int even = 0,odd = 0;
	for(int i=0;i<size;i++)
    {
        int key = arr[i];
        if(mapp.count(key)==0)
        {
            mapp[key] = 1;
        }
        else
        {
            mapp[key]++;
        }
    }
    unordered_map<int,int>:: iterator it;
    it = mapp.begin();
    while(it != mapp.end())
    {
        if(it -> second %2==0)
        {
           even++;
        }
        else
        {
            odd++;
        }
        it++;
    }
    cout << odd << " " << even << endl;
}
int CountExtraElements(int arr[], int n)
{
	unordered_map<int,int> mapp;
	for(int i=0;i<n;i++)
    {
        int key = arr[i];
        if(mapp.count(key)==0)
        {
            mapp[key] = 1;
        }
        else
        {
            mapp[key]++;
        }
    }
    int sum = 0;
    unordered_map<int,int>::iterator it = mapp.begin();
    while(it != mapp.end())
    {
        sum+= it -> second - 1;
        it ++;
    }
    return sum;
}
int main()
{
    /* vector<int> input;
    int n,data;
    cin >> n;
    while(n--)
    {
        cin >> data;
        input.push_back(data);
    }
    int l = maxDistance(input);
    cout << l << endl;*/
    /*vector<int> input;
    vector<int> output;
    int n;
    cin >> n;
    int data;
    while(n--)
    {
        cin >> data;
        input.push_back(data);
    }
    output = removeDuplicates(input);
    for(int i=0;i<output.size();i++)
    {
        cout << output[i] << " ";
    }*/
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int l = CountExtraElements(arr,n);
    cout << l << endl;
    return 0;
}

        }
    }
    int maxim = mapp[a[0]];
    int best = a[0];
    int j=1;
    while(j<n)
    {
        if(mapp[a[j]]>maxim)
        {
            maxim = mapp[a[j]];
            best = a[j];
        }
        j++;
    }
    return best;
}

int maxDistance(vector<int> a)
{
    unordered_map<int,int> mapp;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
                int key = a[i];
                int m = j-i;
                if(m>mapp[key])
                    mapp[key] = m;
            }
        }
    }
    int maxim = mapp[a[0]];
    int best = a[0];
    int j=1;
    while(j<a.size())
    {
        if(mapp[a[j]]>maxim)
        {
            maxim = mapp[a[j]];
            best = a[j];
        }
        j++;
    }
    return maxim;
}
char nonRepeatingCharacter(string str)
{
  map<char,int> mapp;
  char tak;
  int l = str.size();
  for(int i=0;i<l;i++)
  {
      char key = str[i];
      if(mapp.count(key)==0)
      {
          mapp[str[i]] = 1;
      }
      else
      {
          mapp[str[i]]++;
      }
  }
  map<char,int>::iterator it;
  it = mapp.begin();
  while(it != mapp.end())
  {
      if(it -> second ==1)
      {
          tak = it -> first;
          break;
      }
      it++;
  }
  return tak;
}

vector<int> removeDuplicates(vector<int> input)
{
    map<int,int> mapp;
    int p = input.size();
    for(int i=0;i<p;i++)
    {
        int key = input[i];
        if(mapp.count(key)==0)
        {
            mapp[key] = 1;
        }
        else
        {
            mapp[key]++;
        }
    }
    vector<int> l;
    map<int,int>::iterator it;
    it = mapp.begin();
    while(it!=mapp.end())
    {
        l.push_back(it -> first);
        it++;
    }
    /*for(auto element:mapp)
    {
        l.push_back(element.first);
    }*/
    return l;
}
void FindOccurance(int arr[],int size)
{
	unordered_map<int,int> mapp;
	int even = 0,odd = 0;
	for(int i=0;i<size;i++)
    {
        int key = arr[i];
        if(mapp.count(key)==0)
        {
            mapp[key] = 1;
        }
        else
        {
            mapp[key]++;
        }
    }
    unordered_map<int,int>:: iterator it;
    it = mapp.begin();
    while(it != mapp.end())
    {
        if(it -> second %2==0)
        {
           even++;
        }
        else
        {
            odd++;
        }
        it++;
    }
    cout << odd << " " << even << endl;
}

int main()
{
    /* vector<int> input;
    int n,data;
    cin >> n;
    while(n--)
    {
        cin >> data;
        input.push_back(data);
    }
    int l = maxDistance(input);
    cout << l << endl;*/
    /*vector<int> input;
    vector<int> output;
    int n;
    cin >> n;
    int data;
    while(n--)
    {
        cin >> data;
        input.push_back(data);
    }
    output = removeDuplicates(input);
    for(int i=0;i<output.size();i++)
    {
        cout << output[i] << " ";
    }*/
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    FindOccurance(arr,n);
    return 0;
}
