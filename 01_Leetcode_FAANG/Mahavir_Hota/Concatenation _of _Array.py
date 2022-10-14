# Example 1: Use concatenate() to join two arrays
con = np.concatenate((arr, arr1))
print(con)

# Example 2: Use concatenate() with axis
con = np.concatenate((arr, arr1), axis=1)
print(con)

# Example 3: Use np.stack() function to Join Arrays
con = np.stack((arr, arr1), axis=1)
print(con)

# Example 4: Use np.hstack() function
con = np.hstack((arr, arr1))
print(con)

# Example 5: Use np.vstack() function 
con = np.vstack((arr, arr1))
print(con)

# Example 6: Use np.dstack() function to Stacking Along Height (depth)
con = np.dstack((arr, arr1))
print(con)
