# definning the function to swap two values, that retyrns void
def swapping(arr,p,q):
    temp = arr[p]
    arr[p] = arr[q]
    arr[q] = temp

# taking input from the user
arr = list(map(int,input().split()))
p = len(arr)
count = p

# main algorithm
for i in range(p):
    for j in range(i,p):
        if(arr[i]>arr[j]):
            swapping(arr,i,j)

# printing out the sorted array
print(arr)
