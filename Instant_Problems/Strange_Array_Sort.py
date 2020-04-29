# taking array input from the user
arr=list(map(int,input("Please Enter the array : ").split()))

# sorting the array
arr.sort()

p = len(arr)
q = int((p/2))

# splitting the array in two parts, lower_arr having lower values 
# and upper_arr having upper values
lower_arr = [arr[i] for i in range(q)]
upper_arr = [arr[i+q] for i in range(q)]

# creating a new empty array
new_arr = [0] * p 

# main algorithm, merging lower_arr and upper_arr with some condition
for i in range(p):
    if(i%2==0):
        new_arr[i] = lower_arr[int(i/2)]
    else:
        new_arr[i] = upper_arr[int(i/2)]
        
# printing the arr
print(new_arr)
