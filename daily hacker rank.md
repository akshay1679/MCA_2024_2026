![[Pasted image 20250826214231.png]]

```python
if __name__ == '__main__':

    n = int(input())

    arr = map(int, input().split())

    arr = list(arr)

    m = max(arr)

    while m in arr:

        arr[arr.index(m)] = -1999

    m = max(arr)

    print(m)
```

Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given  scores. Store them in a list and find the score of the runner-up.

**Input Format**

The first line contains . The second line contains an array   of  integers each separated by a space.

**Constraints**

**Output Format**

Print the runner-up score.

```md
**Sample Input 0**

5
2 3 6 6 5

**Sample Output 0**

5
```

